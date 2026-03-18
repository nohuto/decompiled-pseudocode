/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x140156FEC
 * Callers:
 *     PopFxChildDeviceActive @ 0x1402376A0 (PopFxChildDeviceActive.c)
 *     PopUpdateWakeSourceWorker @ 0x14023AE8C (PopUpdateWakeSourceWorker.c)
 *     WmipRegistrationWorker @ 0x14057E3C4 (WmipRegistrationWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x1406B86A4 (PopDiagDeviceRundownWorker.c)
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
