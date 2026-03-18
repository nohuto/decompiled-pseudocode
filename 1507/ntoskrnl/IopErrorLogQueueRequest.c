/*
 * XREFs of IopErrorLogQueueRequest @ 0x140678964
 * Callers:
 *     IopErrorLogThread @ 0x14057B2A4 (IopErrorLogThread.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char IopErrorLogQueueRequest()
{
  struct _KDPC *PoolWithTagPriority; // rax
  struct _KDPC *Dpc; // rdi

  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (struct _KDPC *)ExAllocatePoolWithTagPriority(
                                            NonPagedPoolNx,
                                            0x80uLL,
                                            0x20206F49u,
                                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (struct _KDPC *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x20206F49u);
  Dpc = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    KeInitializeDpc(PoolWithTagPriority, (PKDEFERRED_ROUTINE)IopErrorLogDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)&Dpc[1], NotificationTimer);
    LOBYTE(PoolWithTagPriority) = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)-300000000LL, 0, 0x7D0u, Dpc);
  }
  else
  {
    IopErrorLogSessionPending = 0;
  }
  return (char)PoolWithTagPriority;
}
