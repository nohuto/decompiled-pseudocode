/*
 * XREFs of UsbhSignalSyncDeviceReset @ 0x1C0004650
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0004900 (UsbhDriverResetPort.c)
 *     UsbhBusConnectPdo @ 0x1C0008C4C (UsbhBusConnectPdo.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0018370 (UsbhHubDispatchPortEvent.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0020810 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C004288C (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x1C0043100 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0044578 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004479C (Usbh_BusPause_PdoEvent.c)
 *     UsbhFailDriverResetPort @ 0x1C00501C0 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x1C0050D10 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051920 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C00047A8 (UsbhSignalSyncDeviceResetPdo.c)
 */

__int64 __fastcall UsbhSignalSyncDeviceReset(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  UsbhSignalSyncDeviceResetPdo(a1, a2, a4);
  return UsbhSignalDriverResetEvent(a1, a3);
}
