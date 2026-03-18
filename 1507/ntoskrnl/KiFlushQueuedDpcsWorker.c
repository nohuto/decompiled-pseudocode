/*
 * XREFs of KiFlushQueuedDpcsWorker @ 0x1400D544C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiFlushQueuedDpcsWorker(struct _KPRCB *a1)
{
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 DpcQueueDepth; // rcx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl

  CurrentPrcb = a1;
  DpcQueueDepth = (unsigned int)a1->DpcData[0].DpcQueueDepth;
  result = (unsigned int)DpcQueueDepth | CurrentPrcb->DpcData[1].DpcQueueDepth;
  if ( (unsigned int)DpcQueueDepth | CurrentPrcb->DpcData[1].DpcQueueDepth )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( !CurrentPrcb )
      CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->NestingLevel )
    {
      CurrentPrcb->InterruptRequest = 1;
    }
    else
    {
      LOBYTE(DpcQueueDepth) = 2;
      HalRequestSoftwareInterrupt(DpcQueueDepth);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
