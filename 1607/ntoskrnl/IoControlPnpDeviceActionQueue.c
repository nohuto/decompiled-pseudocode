/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x140110C4C
 * Callers:
 *     PopFxChildDeviceActive @ 0x140202344 (PopFxChildDeviceActive.c)
 *     PopUpdateWakeSourceWorker @ 0x140205844 (PopUpdateWakeSourceWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x14052BDBC (PopDiagDeviceRundownWorker.c)
 *     WmipRegistrationWorker @ 0x1405435C8 (WmipRegistrationWorker.c)
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
