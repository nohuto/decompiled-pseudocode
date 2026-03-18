/*
 * XREFs of UsbhQueuePauseChange @ 0x1C0041628
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C0012AD0 (UsbhHubProcessIsr.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhQueuePauseChange(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+78h] [rbp+20h]

  Log(a1, 512, 1769436977, a3, a2);
  LODWORD(v9) = 0x80000;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x4Fu,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v8);
  }
  result = UsbhGetPortData(a1, a2);
  if ( result )
    result = (__int64)UsbhDispatch_PortChangeQueueEventEx(a1, result, 4LL, a3, v9, 0, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v7) = a2;
    return WPP_RECORDER_SF_d(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             0,
             1u,
             0x50u,
             (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
             v7);
  }
  return result;
}
