/*
 * XREFs of UsbhPCE_Close @ 0x1C0040B68
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x1C003EFB0 (UsbhBusPnpStop_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C0041B10 (Usbh_PCE_Close_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D124 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhPCE_Close(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp+10h]

  FdoExt((__int64)a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      0x43u,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v9,
      a3);
  }
  Log((__int64)a1, 512, 1346712114, 0LL, *(unsigned __int16 *)(a2 + 4));
  LODWORD(v10) = 0;
  UsbhDispatch_PortChangeQueueEventEx(a1, a2, 22LL, a3, v10, 0, 0LL, 0LL);
  UsbhReleaseEnumBusLockEx((__int64)a1, a2 + 24, *(_WORD *)(a2 + 4));
}
