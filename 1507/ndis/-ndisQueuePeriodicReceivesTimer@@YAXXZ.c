/*
 * XREFs of ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C00628A4
 * Callers:
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C005C330 (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ndisMQueueReceiveNetBufferLists @ 0x1C00641AC (ndisMQueueReceiveNetBufferLists.c)
 *     ndisPeriodicReceivesWorker @ 0x1C0064280 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     <none>
 */

void ndisQueuePeriodicReceivesTimer(void)
{
  LARGE_INTEGER v0; // rdx

  if ( !_InterlockedExchange((volatile __int32 *)qword_1C0084D78 + KeGetPcr()->Prcb.Number, 1) )
  {
    v0 = DueTime;
    if ( !DueTime.QuadPart )
      v0.QuadPart = -1LL;
    KeSetTimer(
      (PKTIMER)qword_1C0084D70 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
      v0,
      (PKDPC)qword_1C0084D70 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number + 1);
  }
}
