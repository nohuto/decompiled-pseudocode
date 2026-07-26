/*
 * XREFs of ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C0021960
 * Callers:
 *     ndisInterruptDpc @ 0x1C0004D50 (ndisInterruptDpc.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C00102D0 (ndisMQueueReceiveNetBufferLists.c)
 *     ndisPeriodicReceivesWorker @ 0x1C0067110 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     <none>
 */

void ndisQueuePeriodicReceivesTimer(void)
{
  LARGE_INTEGER v0; // rdx

  if ( !_InterlockedExchange((volatile __int32 *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4LL * KeGetPcr()->Prcb.Number), 1) )
  {
    v0 = *(LARGE_INTEGER *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
    if ( !*(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
      v0.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)KeGetPcr()->Prcb.Number],
      v0,
      (PKDPC)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)KeGetPcr()->Prcb.Number + 8]);
  }
}
