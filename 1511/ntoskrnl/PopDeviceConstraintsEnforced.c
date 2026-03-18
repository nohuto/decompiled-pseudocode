/*
 * XREFs of PopDeviceConstraintsEnforced @ 0x1401F3BA8
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x14063CAA4 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     <none>
 */

bool PopDeviceConstraintsEnforced()
{
  bool v0; // dl
  unsigned __int8 CurrentIrql; // r8
  _PPM_IDLE_STATES *IdleStates; // rcx

  v0 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
  if ( IdleStates && IdleStates->InterfaceVersion == 1 )
    v0 = PpmPlatformStates != 0;
  __writecr8(CurrentIrql);
  return v0;
}
