/*
 * XREFs of UsbhSignalSyncDeviceReset @ 0x1C0004730
 * Callers:
 *     UsbhDriverResetPort @ 0x1C00049E0 (UsbhDriverResetPort.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0011DC0 (UsbhHubDispatchPortEvent.c)
 *     UsbhBusConnectPdo @ 0x1C001E444 (UsbhBusConnectPdo.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0022500 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042670 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x1C0042EE0 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0044448 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004466C (Usbh_BusPause_PdoEvent.c)
 *     UsbhFailDriverResetPort @ 0x1C0050260 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x1C0050DB0 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x1C00519C0 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0004888 (UsbhSignalSyncDeviceResetPdo.c)
 */

__int64 __fastcall UsbhSignalSyncDeviceReset(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  UsbhSignalSyncDeviceResetPdo(a1, a2, a4);
  return UsbhSignalDriverResetEvent(a1, a3);
}
