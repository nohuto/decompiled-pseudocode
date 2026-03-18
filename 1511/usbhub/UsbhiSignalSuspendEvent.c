/*
 * XREFs of UsbhiSignalSuspendEvent @ 0x1C0042A38
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1C000F3F8 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C0013310 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0014370 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0017330 (Usbh_PCE_wChange_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C001D1CC (UsbhFreePortChangeQueueObject.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C00418D4 (UsbhRemoveQueuedSuspend.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C001F9D0 (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalSuspendEvent @ 0x1C0026510 (UsbhLogSignalSuspendEvent.c)
 */

void __fastcall UsbhiSignalSuspendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2, a3, a4) )
    UsbhSetPcqEventStatus(a1, a2, 0LL, 30);
}
