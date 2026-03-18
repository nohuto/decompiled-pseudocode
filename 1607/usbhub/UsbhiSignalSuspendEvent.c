/*
 * XREFs of UsbhiSignalSuspendEvent @ 0x1C0042D70
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x1C000ABA0 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000D4E0 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000D740 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000E6F0 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C00120F0 (Usbh_PCE_wChange_Action.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C0041C0C (UsbhRemoveQueuedSuspend.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C00258C0 (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalSuspendEvent @ 0x1C0027090 (UsbhLogSignalSuspendEvent.c)
 */

void __fastcall UsbhiSignalSuspendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2, a3, a4) )
    UsbhSetPcqEventStatus(a1, a2, 0LL, 30);
}
