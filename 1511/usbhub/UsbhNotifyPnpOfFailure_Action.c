/*
 * XREFs of UsbhNotifyPnpOfFailure_Action @ 0x1C0043F00
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0020DE0 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00138F0 (UsbhWaitEventWithTimeoutEx.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhNotifyPnpOfFailure_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  struct _DEVICE_OBJECT *v6; // rcx

  v5 = FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids);
  Log(a1, 16, 1852798022, a1, 0LL);
  UsbhWaitEventWithTimeoutEx(a1, v5 + 650, 500, 1900233040, 0, 0LL);
  v6 = (struct _DEVICE_OBJECT *)*((_QWORD *)v5 + 149);
  v5[643] |= 4u;
  IoInvalidateDeviceState(v6);
}
