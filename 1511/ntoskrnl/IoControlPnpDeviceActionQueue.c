/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x140124618
 * Callers:
 *     PopFxChildDeviceActive @ 0x1401E9B40 (PopFxChildDeviceActive.c)
 *     PopUpdateWakeSourceWorker @ 0x1401ECBD0 (PopUpdateWakeSourceWorker.c)
 *     WmipRegistrationWorker @ 0x140508288 (WmipRegistrationWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x1406385A0 (PopDiagDeviceRundownWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoControlPnpDeviceActionQueue(char a1)
{
  if ( a1 )
    return PnpLockDeviceActionQueue();
  else
    return PnpUnlockDeviceActionQueue();
}
