/*
 * XREFs of rimFakePnpRemoveComplete @ 0x1C00DB150
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C0010070 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C000CCA4 (WPP_RECORDER_SF_qqD.c)
 *     rimOnPnpRemoveComplete @ 0x1C000EA9C (rimOnPnpRemoveComplete.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimFakePnpRemoveComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  __int64 v7; // rdx

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    26,
    (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids);
  v4 = -(*(_DWORD *)(v2 + 348) & 1);
  v5 = -__CFSHR__(*(_DWORD *)(v2 + 184), 9);
  *(_DWORD *)(v2 + 184) |= 8u;
  rimOnPnpRemoveComplete(a1, v2);
  v6 = *(_DWORD *)(v2 + 184) ^ (v5 << 8);
  *(_DWORD *)(v2 + 348) ^= ((unsigned __int8)v4 ^ (unsigned __int8)*(_DWORD *)(v2 + 348)) & 1;
  *(_DWORD *)(v2 + 184) ^= v6 & 0x100;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v7,
    4u,
    0x1Bu,
    (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
    a1,
    v2,
    0);
  return 0LL;
}
