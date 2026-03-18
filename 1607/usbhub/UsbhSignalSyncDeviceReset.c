/*
 * XREFs of UsbhSignalSyncDeviceReset @ 0x1C0004850
 * Callers:
 *     UsbhDriverResetPort @ 0x1C0004B20 (UsbhDriverResetPort.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0013130 (UsbhHubDispatchPortEvent.c)
 *     UsbhBusConnectPdo @ 0x1C0021174 (UsbhBusConnectPdo.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0023330 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0042BC4 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x1C0043440 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C00448B8 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C0044ADC (Usbh_BusPause_PdoEvent.c)
 *     UsbhFailDriverResetPort @ 0x1C0050860 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x1C00513B0 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FC0 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C00049A8 (UsbhSignalSyncDeviceResetPdo.c)
 */

__int64 __fastcall UsbhSignalSyncDeviceReset(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  UsbhSignalSyncDeviceResetPdo(a1, a2, a4);
  return UsbhSignalDriverResetEvent(a1, a3);
}
