/*
 * XREFs of FsRtlCreateSectionForDataScan @ 0x140093000
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     CcZeroEndOfLastPage @ 0x14003D0A0 (CcZeroEndOfLastPage.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     FsRtlGetFileSize @ 0x1403F7C1C (FsRtlGetFileSize.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1403F9080 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlReleaseFile @ 0x1403F9150 (FsRtlReleaseFile.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     MmGetFileObjectForSection @ 0x14044E974 (MmGetFileObjectForSection.c)
 *     MmCreateSection @ 0x14044E98C (MmCreateSection.c)
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
  ULONG v12; // esi
  ULONG v14; // r14d
  struct _KTHREAD *CurrentThread; // rax
  int v16; // ebx
  int Section; // eax
  struct _FILE_OBJECT *FileObjectForSection; // rax
  struct _FILE_OBJECT *v19; // rsi
  PVOID v20; // rbx
  int inserted; // edi
  _BYTE v23[8]; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  LARGE_INTEGER FileSize; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  Object = 0LL;
  Handle = 0LL;
  v12 = SectionPageProtection;
  if ( (SectionPageProtection & 0xFFFFFFF9) != 0 || !SectionPageProtection )
    return -1073741578;
  v14 = AllocationAttributes;
  if ( (AllocationAttributes & 0xFF7FFFFF) != 0x8000000 )
    return -1073741577;
  if ( !FileObject->SectionObjectPointer )
    return -1073741792;
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v16 = FsRtlAcquireToCreateMappedSection(FileObject, v12, v23, &SectionPageProtection);
  if ( v16 < 0 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
    return v16;
  }
  v16 = FsRtlGetFileSize(FileObject, &FileSize);
  if ( v16 >= 0 )
  {
    if ( FileSize.QuadPart )
    {
      while ( 1 )
      {
        Section = MmCreateSection((int)&Object, v12, v14, 0LL, FileObject);
        v16 = Section;
        if ( Section != -1073741740 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&FsRtlHalfSecond);
      }
      if ( Section >= 0 )
      {
        FileObjectForSection = (struct _FILE_OBJECT *)MmGetFileObjectForSection(Object);
        v19 = FileObjectForSection;
        if ( FileObjectForSection )
        {
          CcZeroEndOfLastPage(FileObjectForSection);
          ObfDereferenceObjectWithTag(v19, 0x746C6644u);
        }
      }
    }
    else
    {
      v16 = -1073741807;
    }
  }
  FsRtlReleaseFile(FileObject);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
  if ( v16 < 0 )
    return v16;
  v20 = Object;
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  inserted = ObInsertObject(v20, 0LL, DesiredAccess, 0, 0LL, &Handle);
  if ( inserted < 0 )
  {
    ObfDereferenceObjectWithTag(v20, 0x746C6644u);
  }
  else
  {
    *SectionHandle = Handle;
    *SectionObject = v20;
    if ( SectionFileSize )
      *SectionFileSize = FileSize;
  }
  return inserted;
}
