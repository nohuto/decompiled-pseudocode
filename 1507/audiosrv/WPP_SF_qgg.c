/*
 * XREFs of WPP_SF_qgg @ 0x1800713B8
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18003EA40 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qgg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids, 50LL, (__int64 *)va);
}
