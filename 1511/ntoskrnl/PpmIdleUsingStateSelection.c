/*
 * XREFs of PpmIdleUsingStateSelection @ 0x140097180
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1400970CC (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14009DB3C (PopAcquireRwLockShared.c)
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
