/*
 * XREFs of UsbhNotifyPnpOfFailure_Action @ 0x1C0043DD0
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0021690 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000C760 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhNotifyPnpOfFailure_Action(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  struct _DEVICE_OBJECT *v6; // rcx

  v5 = FdoExt((__int64)a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids);
  Log((__int64)a1, 16, 1852798022, (__int64)a1, 0LL);
  UsbhWaitEventWithTimeoutEx(a1, v5 + 650, 500, 1900233040, 0, 0LL);
  v6 = (struct _DEVICE_OBJECT *)*((_QWORD *)v5 + 149);
  v5[643] |= 4u;
  IoInvalidateDeviceState(v6);
}
