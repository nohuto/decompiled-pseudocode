/*
 * XREFs of rimOnPnpQueryRemove @ 0x1C00DB234
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C000C538 (RIMDoOnPnpNotification.c)
 * Callees:
 *     RIMCloseDev @ 0x1C000C778 (RIMCloseDev.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000CCA4 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimOnPnpQueryRemove(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v7; // [rsp+38h] [rbp-10h]

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    22,
    (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids);
  *(_DWORD *)(v2 + 184) &= ~2u;
  v4 = RIMCloseDev(v2);
  v7 = v4;
  WPP_RECORDER_SF_qqD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5,
    4u,
    0x17u,
    (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
    a1,
    v2,
    v7);
  return v4;
}
