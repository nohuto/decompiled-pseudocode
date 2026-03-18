/*
 * XREFs of IoControlPnpDeviceActionQueue @ 0x1401106E8
 * Callers:
 *     PopFxChildDeviceActive @ 0x140202518 (PopFxChildDeviceActive.c)
 *     PopUpdateWakeSourceWorker @ 0x140205A18 (PopUpdateWakeSourceWorker.c)
 *     PopDiagDeviceRundownWorker @ 0x14052B16C (PopDiagDeviceRundownWorker.c)
 *     WmipRegistrationWorker @ 0x140543088 (WmipRegistrationWorker.c)
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
