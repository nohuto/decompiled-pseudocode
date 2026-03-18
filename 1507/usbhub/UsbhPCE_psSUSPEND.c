/*
 * XREFs of UsbhPCE_psSUSPEND @ 0x1C0026F60
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C00104E0 (UsbhHubRunPortChangeQueue.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D124 (WPP_RECORDER_SF_dq.c)
 */

int *__fastcall UsbhPCE_psSUSPEND(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // edx
  int v8; // r8d
  __int64 v10; // [rsp+58h] [rbp+10h]

  FdoExt((__int64)a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      70,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  Log((__int64)a1, 512, 1346711864, 0LL, *(unsigned __int16 *)(a2 + 4));
  LODWORD(v10) = 0;
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, 18LL, a3, v10, 0, 0LL, 0LL);
}
