/*
 * XREFs of IoRetrievePriorityInfo @ 0x14006FEC0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetIoPriorityHint @ 0x140070020 (IoGetIoPriorityHint.c)
 */

NTSTATUS __stdcall IoRetrievePriorityInfo(
        PIRP Irp,
        PFILE_OBJECT FileObject,
        PETHREAD Thread,
        PIO_PRIORITY_INFO PriorityInfo)
{
  int v4; // esi
  int v5; // ebp
  _DWORD *FileObjectExtension; // rax
  int v9; // eax
  _IO_PRIORITY_HINT v10; // edx
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *v14; // rcx
  unsigned int BasePriority; // eax
  unsigned int v16; // edx

  v4 = 0;
  v5 = 2;
  PriorityInfo->IoPriority = IoPriorityNormal;
  if ( Irp && (Irp->Flags & 0xE0000) != 0 )
  {
    PriorityInfo->IoPriority = IoGetIoPriorityHint(Irp);
  }
  else if ( FileObject
         && (FileObjectExtension = FileObject->FileObjectExtension) != 0LL
         && (v9 = FileObjectExtension[16]) != 0 )
  {
    PriorityInfo->IoPriority = v9 - 1;
  }
  else
  {
    if ( !Thread )
    {
LABEL_31:
      *(_QWORD *)&PriorityInfo->ThreadPriority = -1LL;
      return 0;
    }
    v10 = (*((_DWORD *)&Thread[1].SwapListEntry + 3) >> 9) & 7;
    if ( (Thread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v10 = IoPriorityVeryLow;
    if ( v10 < IoPriorityNormal && Thread == KeGetCurrentThread() && HIDWORD(Thread[1].Timer.TimerListEntry.Flink) )
      v10 = IoPriorityNormal;
    PriorityInfo->IoPriority = v10;
  }
  if ( !Thread )
    goto LABEL_31;
  if ( Thread->Priority >= 16 || !Thread->SchedulingGroup )
    goto LABEL_25;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulingGroup = Thread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    v14 = (char *)SchedulingGroup + CurrentPrcb->ScbOffset;
    if ( v14 )
      v4 = ((unsigned __int8)v14[112] >> 3) & 1;
  }
  if ( CurrentIrql < 2u )
    __writecr8(CurrentIrql);
  BasePriority = 1;
  if ( !v4 )
LABEL_25:
    BasePriority = Thread->BasePriority;
  PriorityInfo->ThreadPriority = BasePriority;
  v16 = (*((_DWORD *)&Thread[1].SwapListEntry + 3) >> 12) & 7;
  if ( (Thread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    if ( v16 < 2 )
      v5 = (*((_DWORD *)&Thread[1].SwapListEntry + 3) >> 12) & 7;
    v16 = v5;
  }
  PriorityInfo->PagePriority = v16;
  return 0;
}
