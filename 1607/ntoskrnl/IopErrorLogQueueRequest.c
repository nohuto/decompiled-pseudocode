/*
 * XREFs of IopErrorLogQueueRequest @ 0x140628100
 * Callers:
 *     IopErrorLogThread @ 0x140542C34 (IopErrorLogThread.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     IopVerifierExAllocatePool_3 @ 0x1401CB430 (IopVerifierExAllocatePool_3.c)
 */

char IopErrorLogQueueRequest()
{
  struct _KDPC *Pool_3; // rax
  struct _KDPC *Dpc; // rdi

  Pool_3 = (struct _KDPC *)IopVerifierExAllocatePool_3(NonPagedPoolNx, 0x80uLL);
  Dpc = Pool_3;
  if ( Pool_3 )
  {
    KeInitializeDpc(Pool_3, (PKDEFERRED_ROUTINE)IopErrorLogDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)&Dpc[1], NotificationTimer);
    LOBYTE(Pool_3) = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)-300000000LL, 0, 0x7D0u, Dpc);
  }
  else
  {
    IopErrorLogSessionPending = 0;
  }
  return (char)Pool_3;
}
