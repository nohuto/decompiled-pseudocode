/*
 * XREFs of PpmIdleUsingStateSelection @ 0x140009ED4
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x140009E20 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000DC30 (PopAcquireRwLockShared.c)
 */

bool PpmIdleUsingStateSelection()
{
  bool v0; // bl
  _PPM_IDLE_STATES *IdleStates; // rcx

  PopAcquireRwLockShared(&PpmIdlePolicyLock);
  v0 = 0;
  IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
  if ( IdleStates )
    v0 = IdleStates->InterfaceVersion == 1;
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  return v0;
}
