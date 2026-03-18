/*
 * XREFs of UsbhPCE_QueueChangeObject @ 0x1C0041140
 * Callers:
 *     UsbhResetPortTimerDpc @ 0x1C0044360 (UsbhResetPortTimerDpc.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueChangeObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  unsigned __int16 v7; // bx
  __int64 result; // rax
  __int64 v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+28h] [rbp-30h]

  v7 = a2;
  FdoExt(a1, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x4Du,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v11);
  }
  result = UsbhGetPortData(a1, v7);
  if ( result )
    result = (__int64)UsbhDispatch_PortChangeQueueEventEx(a1, result, 4LL, a4, a3, 2, a6, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v10) = v7;
    return WPP_RECORDER_SF_d(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             0,
             1u,
             0x4Eu,
             (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
             v10);
  }
  return result;
}
