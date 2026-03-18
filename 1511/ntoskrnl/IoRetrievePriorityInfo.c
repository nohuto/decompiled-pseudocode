/*
 * XREFs of IoRetrievePriorityInfo @ 0x140072690
 * Callers:
 *     <none>
 * Callees:
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     IoGetIoPriorityHint @ 0x140077CE0 (IoGetIoPriorityHint.c)
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
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *v17; // rcx

  v4 = 0;
  v5 = 2;
  PriorityInfo->IoPriority = IoPriorityNormal;
  if ( Irp && (Irp->Flags & 0xE0000) != 0 )
  {
    PriorityInfo->IoPriority = IoGetIoPriorityHint(Irp);
    goto LABEL_10;
  }
  if ( !FileObject )
  {
LABEL_18:
    if ( !Thread )
      goto LABEL_34;
    PriorityInfo->IoPriority = PsGetIoPriorityThread((__int64)Thread);
    goto LABEL_10;
  }
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( FileObjectExtension )
  {
    v13 = FileObjectExtension[18];
    if ( v13 )
    {
      PriorityInfo->IoPriority = v13 - 1;
      goto LABEL_10;
    }
    goto LABEL_18;
  }
  if ( !Thread )
  {
LABEL_34:
    *(_QWORD *)&PriorityInfo->ThreadPriority = -1LL;
    return 0;
  }
  v9 = (*((_DWORD *)&Thread[1].SwapListEntry + 3) >> 9) & 7;
  if ( (Thread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    v9 = IoPriorityVeryLow;
  if ( v9 < IoPriorityNormal && Thread == KeGetCurrentThread() && HIDWORD(Thread[1].Timer.TimerListEntry.Flink) )
    v9 = IoPriorityNormal;
  PriorityInfo->IoPriority = v9;
LABEL_10:
  if ( !Thread )
    goto LABEL_34;
  if ( Thread->Priority >= 16 || !Thread->SchedulingGroup )
    goto LABEL_13;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulingGroup = Thread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    v17 = (char *)SchedulingGroup + CurrentPrcb->ScbOffset;
    if ( v17 )
      v4 = ((unsigned __int8)v17[112] >> 3) & 1;
  }
  if ( CurrentIrql < 2u )
    __writecr8(CurrentIrql);
  if ( v4 )
    BasePriority = 1;
  else
LABEL_13:
    BasePriority = Thread->BasePriority;
  PriorityInfo->ThreadPriority = BasePriority;
  v11 = (*((_DWORD *)&Thread[1].SwapListEntry + 3) >> 12) & 7;
  if ( (Thread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    if ( v11 < 2 )
      v5 = (*((_DWORD *)&Thread[1].SwapListEntry + 3) >> 12) & 7;
    v11 = v5;
  }
  PriorityInfo->PagePriority = v11;
  return 0;
}
