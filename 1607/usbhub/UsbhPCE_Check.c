/*
 * XREFs of UsbhPCE_Check @ 0x1C0041004
 * Callers:
 *     UsbhReset2Complete @ 0x1C00183B0 (UsbhReset2Complete.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D674 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhPCE_Check(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  int v10; // [rsp+28h] [rbp-30h]
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h]

  v11 = 0;
  FdoExt((__int64)a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      0x49u,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v10,
      a3);
  }
  Log((__int64)a1, 512, 1346712112, 0LL, *(unsigned __int16 *)(a2 + 4));
  LODWORD(v12) = 0;
  UsbhDispatch_PortChangeQueueEventEx(a1, a2, 20LL, a3, v12, 0, 0LL, (int *)&v11);
  return v11;
}
