/*
 * XREFs of UsbhPCE_psSUSPEND @ 0x1C0026170
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C0016A90 (UsbhHubRunPortChangeQueue.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 */

int *__fastcall UsbhPCE_psSUSPEND(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // edx
  int v8; // r8d
  __int64 v10; // [rsp+58h] [rbp+10h]

  FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      70,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  Log(a1, 512, 1346711864, 0LL, *(unsigned __int16 *)(a2 + 4));
  LODWORD(v10) = 0;
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, 18LL, a3, v10, 0, 0LL, 0LL);
}
