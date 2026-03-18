/*
 * XREFs of rimOnPnpQueryRemove @ 0x1C00CACD8
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00108E0 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C00104CC (WPP_RECORDER_SF_qqD.c)
 *     RIMCloseDev @ 0x1C00106D8 (RIMCloseDev.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimOnPnpQueryRemove(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v7; // [rsp+38h] [rbp-10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x12u,
    (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids);
  *(_DWORD *)(a2 + 176) &= ~2u;
  v4 = RIMCloseDev(a2);
  v7 = v4;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5,
    4u,
    0x13u,
    (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
    a1,
    a2,
    v7);
  return v4;
}
