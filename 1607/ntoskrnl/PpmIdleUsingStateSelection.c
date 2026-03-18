/*
 * XREFs of PpmIdleUsingStateSelection @ 0x14000A354
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x14000A2A0 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000E0B0 (PopAcquireRwLockShared.c)
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
