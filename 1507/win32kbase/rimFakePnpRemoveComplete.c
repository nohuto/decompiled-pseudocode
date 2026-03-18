/*
 * XREFs of rimFakePnpRemoveComplete @ 0x1C00C9B60
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C001A680 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     rimOnPnpRemoveComplete @ 0x1C0076908 (rimOnPnpRemoveComplete.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0076D6C (WPP_RECORDER_SF_qqD.c)
 */

__int64 __fastcall rimFakePnpRemoveComplete(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  int v7; // [rsp+38h] [rbp-10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x14u,
    (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids);
  *(_DWORD *)(a2 + 184) |= 8u;
  v4 = -(*(_DWORD *)(a2 + 340) & 1);
  rimOnPnpRemoveComplete(a1, a2);
  *(_DWORD *)(a2 + 340) ^= ((unsigned __int8)v4 ^ (unsigned __int8)*(_DWORD *)(a2 + 340)) & 1;
  v7 = 0;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5,
    4u,
    0x15u,
    (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
    a1,
    a2,
    v7);
  return 0LL;
}
