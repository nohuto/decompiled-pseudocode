/*
 * XREFs of FsRtlCreateSectionForDataScan @ 0x14002F658
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     CcZeroEndOfLastPage @ 0x140088AE0 (CcZeroEndOfLastPage.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     MmGetFileObjectForSection @ 0x1404710BC (MmGetFileObjectForSection.c)
 *     MmCreateSection @ 0x1404710D4 (MmCreateSection.c)
 *     FsRtlGetFileSize @ 0x1404711C4 (FsRtlGetFileSize.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1404B31B8 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlReleaseFile @ 0x1404B32F0 (FsRtlReleaseFile.c)
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
  ULONG v14; // r14d
  struct _KTHREAD *CurrentThread; // rax
  int v16; // ebx
  __int64 v17; // r8
  int Section; // eax
  struct _FILE_OBJECT *FileObjectForSection; // rax
  struct _FILE_OBJECT *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  PVOID v25; // rbx
  int inserted; // edi
  struct _KTHREAD *v28; // rdx
  __int16 v29; // cx
  $CD287064E7C9F7953DE243E927CFCB99 *v30; // rcx
  _BYTE v31[8]; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  LARGE_INTEGER FileSize; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF

  v10 = SectionPageProtection;
  Object = 0LL;
  Handle = 0LL;
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
  v16 = FsRtlAcquireToCreateMappedSection(FileObject, v10, v31, &SectionPageProtection);
  if ( v16 < 0 )
  {
    v28 = KeGetCurrentThread();
    v29 = v28->KernelApcDisable + 1;
    v28->KernelApcDisable = v29;
    if ( !v29 )
    {
      v30 = &v28->152;
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != v30 && !v28->SpecialApcDisable )
        KiCheckForKernelApcDelivery(v30, v28, v17);
    }
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
        Section = MmCreateSection((unsigned int)&Object, v10, v14, 0LL, FileObject);
        v16 = Section;
        if ( Section != -1073741740 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&FsRtlHalfSecond);
      }
      if ( Section >= 0 )
      {
        FileObjectForSection = (struct _FILE_OBJECT *)MmGetFileObjectForSection(Object);
        v20 = FileObjectForSection;
        if ( FileObjectForSection )
        {
          CcZeroEndOfLastPage(FileObjectForSection);
          ObfDereferenceObjectWithTag(v20, 0x746C6644u);
        }
      }
    }
    else
    {
      v16 = -1073741807;
    }
  }
  FsRtlReleaseFile(FileObject);
  v23 = KeGetCurrentThread();
  v24 = v23->KernelApcDisable + 1;
  v23->KernelApcDisable = v24;
  if ( !v24
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
    && !v23->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery(v23, v21, v22);
  }
  KeGetCurrentThread()[1].ApcState.ApcListHead[0].Flink = 0LL;
  if ( v16 < 0 )
    return v16;
  v25 = Object;
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  inserted = ObInsertObject(v25, 0LL, DesiredAccess, 0, 0LL, &Handle);
  if ( inserted < 0 )
  {
    ObfDereferenceObjectWithTag(v25, 0x746C6644u);
  }
  else
  {
    *SectionHandle = Handle;
    *SectionObject = v25;
    if ( SectionFileSize )
      *SectionFileSize = FileSize;
  }
  return inserted;
}
