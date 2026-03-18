/*
 * XREFs of UsbhPCE_SD_Resume @ 0x1C00411A0
 * Callers:
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C00423C0 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D124 (WPP_RECORDER_SF_dq.c)
 */

int *__fastcall UsbhPCE_SD_Resume(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  int v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp+10h]

  FdoExt((__int64)a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      0x45u,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v10,
      a3);
  }
  Log((__int64)a1, 512, 1346711859, 0LL, *(unsigned __int16 *)(a2 + 4));
  LODWORD(v11) = 0;
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, 13LL, a3, v11, 0, 0LL, 0LL);
}
