/*
 * XREFs of UsbhPCE_QueueChange @ 0x1C0041068
 * Callers:
 *     UsbhReset1Debounce @ 0x1C0050D10 (UsbhReset1Debounce.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // bx
  __int64 result; // rax
  __int64 v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+28h] [rbp-30h]

  v5 = a2;
  FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = v5;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x4Bu,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v9);
  }
  result = UsbhGetPortData(a1, v5);
  if ( result )
    result = (__int64)UsbhDispatch_PortChangeQueueEventEx(a1, result, 4LL, a4, a3, 0, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v8) = v5;
    return WPP_RECORDER_SF_d(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             0,
             1u,
             0x4Cu,
             (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
             v8);
  }
  return result;
}
