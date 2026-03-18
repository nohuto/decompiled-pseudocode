/*
 * XREFs of Usbh_iSignalSyncDeviceReset @ 0x1C0045668
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0004460 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C001AA70 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C001D1CC (UsbhFreePortChangeQueueObject.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00407FC (UsbhFreePortChangeQueueTimeoutObject.c)
 * Callees:
 *     UsbhLogSignalDriverResetEvent @ 0x1C000471C (UsbhLogSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C00047A8 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSetPcqEventStatus @ 0x1C001F9D0 (UsbhSetPcqEventStatus.c)
 */

void __fastcall Usbh_iSignalSyncDeviceReset(__int64 a1, __int64 a2, __int64 a3)
{
  UsbhSignalSyncDeviceResetPdo(a1, a2, -1073741823);
  if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a3) )
    UsbhSetPcqEventStatus(a1, a3, 3LL, 30);
}
