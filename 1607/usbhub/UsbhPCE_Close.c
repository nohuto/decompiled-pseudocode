/*
 * XREFs of UsbhPCE_Close @ 0x1C00410BC
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x1C003F500 (UsbhBusPnpStop_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C0042064 (Usbh_PCE_Close_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D674 (WPP_RECORDER_SF_dq.c)
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
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v9,
      a3);
  }
  Log((__int64)a1, 512, 1346712114, 0LL, *(unsigned __int16 *)(a2 + 4));
  LODWORD(v10) = 0;
  UsbhDispatch_PortChangeQueueEventEx(a1, a2, 22LL, a3, v10, 0, 0LL, 0LL);
  UsbhReleaseEnumBusLockEx((__int64)a1, a2 + 24, *(_WORD *)(a2 + 4));
}
