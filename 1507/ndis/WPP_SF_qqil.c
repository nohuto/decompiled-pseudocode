/*
 * XREFs of WPP_SF_qqil @ 0x1C005B3EC
 * Callers:
 *     NdisSetTimerObject @ 0x1C00217C0 (NdisSetTimerObject.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqil(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_b7e8219cdeacda1a8a9aa4db7b390a12_Traceguids, 0xAu, va);
}
