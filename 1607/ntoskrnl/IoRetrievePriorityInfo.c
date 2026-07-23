/*
 * XREFs of IoRetrievePriorityInfo @ 0x1400E96E0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     IoGetIoPriorityHint @ 0x1400E9B20 (IoGetIoPriorityHint.c)
 *     PsGetBaseIoPriorityThread @ 0x1400E9DA0 (PsGetBaseIoPriorityThread.c)
 */

NTSTATUS __stdcall IoRetrievePriorityInfo(
        PIRP Irp,
        PFILE_OBJECT FileObject,
        PETHREAD Thread,
        PIO_PRIORITY_INFO PriorityInfo)
{
  int v4; // ebp
  int v5; // esi
  _DWORD *FileObjectExtension; // rax
  _IO_PRIORITY_HINT v9; // edx
  unsigned int BasePriority; // eax
  unsigned int v11; // edx
  int v13; // eax
  int BaseIoPriorityThread; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *i; // rcx
  _IO_PRIORITY_HINT IoPriorityHint; // eax

  v4 = 0;
  v5 = 2;
  PriorityInfo->IoPriority = IoPriorityNormal;
  if ( Irp && (Irp->Flags & 0xE0000) != 0 )
  {
    IoPriorityHint = IoGetIoPriorityHint(Irp);
LABEL_33:
    PriorityInfo->IoPriority = IoPriorityHint;
    goto LABEL_10;
  }
  if ( !FileObject )
  {
    if ( !Thread )
      goto LABEL_42;
    IoPriorityHint = (unsigned int)PsGetIoPriorityThread((__int64)Thread);
    goto LABEL_33;
  }
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( FileObjectExtension )
  {
    v13 = FileObjectExtension[18];
    if ( v13 )
    {
      PriorityInfo->IoPriority = v13 - 1;
    }
    else
    {
      if ( !Thread )
        goto LABEL_42;
      BaseIoPriorityThread = PsGetBaseIoPriorityThread(Thread);
      if ( BaseIoPriorityThread < 2 && Thread == KeGetCurrentThread() && *(_DWORD *)(v15 + 1784) )
        BaseIoPriorityThread = 2;
      *(_DWORD *)(v16 + 12) = BaseIoPriorityThread;
    }
  }
  else
  {
    if ( !Thread )
    {
LABEL_42:
      *(_QWORD *)&PriorityInfo->ThreadPriority = -1LL;
      return 0;
    }
    v9 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
    if ( (Thread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v9 = IoPriorityVeryLow;
    if ( v9 < IoPriorityNormal && Thread == KeGetCurrentThread() && Thread[1].Timer.DueTime.LowPart )
      v9 = IoPriorityNormal;
    PriorityInfo->IoPriority = v9;
  }
LABEL_10:
  if ( !Thread )
    goto LABEL_42;
  if ( Thread->Priority >= 16 || !Thread->SchedulingGroup )
    goto LABEL_13;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulingGroup = Thread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    for ( i = (char *)SchedulingGroup + CurrentPrcb->ScbOffset; i; i = (char *)*((_QWORD *)i + 51) )
    {
      v4 = ((unsigned __int8)i[112] >> 3) & 1;
      if ( v4 )
        break;
    }
  }
  if ( CurrentIrql < 2u )
    __writecr8(CurrentIrql);
  if ( v4 )
    BasePriority = 1;
  else
LABEL_13:
    BasePriority = Thread->BasePriority;
  PriorityInfo->ThreadPriority = BasePriority;
  v11 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
  if ( (Thread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    if ( v11 < 2 )
      v5 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
    v11 = v5;
  }
  PriorityInfo->PagePriority = v11;
  return 0;
}
