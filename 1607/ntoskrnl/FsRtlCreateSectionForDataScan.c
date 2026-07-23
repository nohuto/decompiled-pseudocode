/*
 * XREFs of FsRtlCreateSectionForDataScan @ 0x14007DBE0
 * Callers:
 *     <none>
 * Callees:
 *     CcZeroEndOfLastPage @ 0x1400243D0 (CcZeroEndOfLastPage.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     FsRtlGetFileSize @ 0x14042B324 (FsRtlGetFileSize.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x14042CC68 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlReleaseFile @ 0x14042CD30 (FsRtlReleaseFile.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     MmGetFileObjectForSection @ 0x14047031C (MmGetFileObjectForSection.c)
 *     MmCreateSectionEx @ 0x140470334 (MmCreateSectionEx.c)
 */

NTSTATUS __stdcall FsRtlCreateSectionForDataScan(
        PHANDLE SectionHandle,
        PVOID *SectionObject,
        PLARGE_INTEGER SectionFileSize,
        PFILE_OBJECT FileObject,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        ULONG Flags)
{
  ULONG v10; // esi
  PHANDLE v11; // r12
  ULONG v15; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rdx
  int v18; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // r12
  int Section; // eax
  struct _FILE_OBJECT *FileObjectForSection; // rax
  struct _FILE_OBJECT *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  PVOID v28; // rbx
  int inserted; // edi
  int v31; // [rsp+30h] [rbp-40h]
  _BYTE v32[8]; // [rsp+50h] [rbp-20h] BYREF
  PVOID Object; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-8h] BYREF

  v10 = SectionPageProtection;
  v11 = SectionHandle;
  Object = 0LL;
  Handle = 0LL;
  if ( (SectionPageProtection & 0xFFFFFFF9) != 0 || !SectionPageProtection )
    return -1073741578;
  v15 = AllocationAttributes;
  if ( (AllocationAttributes & 0xFF7FFFFF) != 0x8000000 )
    return -1073741577;
  if ( !FileObject->SectionObjectPointer )
    return -1073741792;
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v18 = FsRtlAcquireToCreateMappedSection(FileObject, v10, &SectionPageProtection, v32);
  if ( v18 < 0 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v19, v20);
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
    return v18;
  }
  v18 = FsRtlGetFileSize(FileObject, &FileSize);
  if ( v18 >= 0 )
  {
    if ( FileSize.QuadPart )
    {
      v21 = SectionPageProtection;
      while ( 1 )
      {
        Section = MmCreateSectionEx((int)&Object, v10, v15, v31, FileObject, v21);
        v18 = Section;
        if ( Section != -1073741740 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&FsRtlHalfSecond);
      }
      if ( Section >= 0 )
      {
        FileObjectForSection = (struct _FILE_OBJECT *)MmGetFileObjectForSection(Object);
        v24 = FileObjectForSection;
        if ( FileObjectForSection )
        {
          CcZeroEndOfLastPage(FileObjectForSection);
          ObfDereferenceObjectWithTag(v24, 0x746C6644u);
        }
      }
      v11 = SectionHandle;
    }
    else
    {
      v18 = -1073741807;
    }
  }
  FsRtlReleaseFile(FileObject);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v25, v26, v27);
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
  if ( v18 < 0 )
    return v18;
  v28 = Object;
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  inserted = ObInsertObject(v28, 0LL, DesiredAccess, 0, 0LL, &Handle);
  if ( inserted < 0 )
  {
    ObfDereferenceObjectWithTag(v28, 0x746C6644u);
  }
  else
  {
    *v11 = Handle;
    *SectionObject = v28;
    if ( SectionFileSize )
      *SectionFileSize = FileSize;
  }
  return inserted;
}
