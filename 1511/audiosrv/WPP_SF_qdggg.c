/*
 * XREFs of WPP_SF_qdggg @ 0x18006F9E8
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800416D0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdggg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+A8h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, 48LL, (__int64 *)va);
}
