/*
 * XREFs of UsbhiSignalResumeEvent @ 0x1C001FC60
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0003E90 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0014370 (Usbh_PCE_Resume_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C001D1CC (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0041A3C (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0041F30 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C00422A4 (Usbh_PCE_ResumeTimeout_Action.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C001F834 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C001F9D0 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhiSignalResumeEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2, a3, a4) )
    UsbhSetPcqEventStatus(a1, a2, 1LL, 30);
}
