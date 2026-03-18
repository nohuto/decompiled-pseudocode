/*
 * XREFs of IopErrorLogQueueRequest @ 0x1405FE020
 * Callers:
 *     IopErrorLogThread @ 0x140503EFC (IopErrorLogThread.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     sub_1401BD574 @ 0x1401BD574 (sub_1401BD574.c)
 */

char IopErrorLogQueueRequest()
{
  struct _KDPC *v0; // rax
  struct _KDPC *Dpc; // rdi

  v0 = (struct _KDPC *)sub_1401BD574(NonPagedPoolNx, 0x80uLL);
  Dpc = v0;
  if ( v0 )
  {
    KeInitializeDpc(v0, (PKDEFERRED_ROUTINE)IopErrorLogDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)&Dpc[1], NotificationTimer);
    LOBYTE(v0) = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)-300000000LL, 0, 0x7D0u, Dpc);
  }
  else
  {
    IopErrorLogSessionPending = 0;
  }
  return (char)v0;
}
