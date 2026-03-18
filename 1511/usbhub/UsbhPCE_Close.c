/*
 * XREFs of UsbhPCE_Close @ 0x1C0040D84
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x1C003F1E0 (UsbhBusPnpStop_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C0041D2C (Usbh_PCE_Close_Action.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhPCE_Close(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp+10h]

  FdoExt(a1, a2, a3, a4);
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
  Log(a1, 512, 1346712114, 0LL, *(unsigned __int16 *)(a2 + 4));
  LODWORD(v10) = 0;
  UsbhDispatch_PortChangeQueueEventEx(a1, a2, 22LL, a3, v10, 0, 0LL, 0LL);
  UsbhReleaseEnumBusLockEx(a1, a2 + 24, *(_WORD *)(a2 + 4));
}
