/*
 * XREFs of rimOnPnpQueryRemove @ 0x1C00C9C18
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C0076038 (RIMDoOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0076D6C (WPP_RECORDER_SF_qqD.c)
 *     RIMCloseDev @ 0x1C007707C (RIMCloseDev.c)
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
    0x10u,
    (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids);
  *(_DWORD *)(a2 + 184) &= ~2u;
  v4 = RIMCloseDev(a2);
  v7 = v4;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5,
    4u,
    0x11u,
    (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
    a1,
    a2,
    v7);
  return v4;
}
