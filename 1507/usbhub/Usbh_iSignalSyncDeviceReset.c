/*
 * XREFs of Usbh_iSignalSyncDeviceReset @ 0x1C0045538
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x1C0004540 (Usbh_PCE_QueueDriverReset_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000B48C (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_QueueChange_Action @ 0x1C000E550 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C00405E0 (UsbhFreePortChangeQueueTimeoutObject.c)
 * Callees:
 *     UsbhLogSignalDriverResetEvent @ 0x1C00047FC (UsbhLogSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0004888 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSetPcqEventStatus @ 0x1C00252D0 (UsbhSetPcqEventStatus.c)
 */

void __fastcall Usbh_iSignalSyncDeviceReset(__int64 a1, __int64 a2, __int64 a3)
{
  UsbhSignalSyncDeviceResetPdo(a1, a2, -1073741823);
  if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a3) )
    UsbhSetPcqEventStatus(a1, a3, 3LL, 30);
}
