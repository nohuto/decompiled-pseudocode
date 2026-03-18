/*
 * XREFs of UsbhiSignalSuspendEvent @ 0x1C004281C
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x1C000B48C (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000BF20 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000C180 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000D1E0 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_wChange_Action @ 0x1C0011310 (Usbh_PCE_wChange_Action.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C00416B8 (UsbhRemoveQueuedSuspend.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C00252D0 (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalSuspendEvent @ 0x1C00273F8 (UsbhLogSignalSuspendEvent.c)
 */

void __fastcall UsbhiSignalSuspendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2, a3, a4) )
    UsbhSetPcqEventStatus(a1, a2, 0LL, 30);
}
