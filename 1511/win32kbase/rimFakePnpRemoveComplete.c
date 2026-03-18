/*
 * XREFs of rimFakePnpRemoveComplete @ 0x1C00CAB44
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C00113D0 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x1C0010044 (rimOnPnpRemoveComplete.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C00104CC (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
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
    0x16u,
    (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids);
  *(_DWORD *)(a2 + 176) |= 8u;
  v4 = -(*(_DWORD *)(a2 + 332) & 1);
  rimOnPnpRemoveComplete(a1, a2);
  *(_DWORD *)(a2 + 332) ^= ((unsigned __int8)v4 ^ (unsigned __int8)*(_DWORD *)(a2 + 332)) & 1;
  v7 = 0;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5,
    4u,
    0x17u,
    (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
    a1,
    a2,
    v7);
  return 0LL;
}
