/*
 * XREFs of UsbhiSignalResumeEvent @ 0x1C0024F50
 * Callers:
 *     Usbh_PCE_BusReset_Action @ 0x1C0003F78 (Usbh_PCE_BusReset_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C000B48C (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x1C000D1E0 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0041820 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C0041D14 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C0042088 (Usbh_PCE_ResumeTimeout_Action.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C0025134 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C00252D0 (UsbhSetPcqEventStatus.c)
 */

__int64 __fastcall UsbhiSignalResumeEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = UsbhLogSignalResumeEvent(a1, a2);
  if ( (_DWORD)result )
    return UsbhSetPcqEventStatus(a1, a2, 1LL, 30LL);
  return result;
}
