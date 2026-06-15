/*
 * XREFs of WPP_SF_qdggg @ 0x1800712D0
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18003EA40 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdggg(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+A8h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids, 48LL, (__int64 *)va);
}
