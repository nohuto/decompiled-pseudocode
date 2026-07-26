/*
 * XREFs of WPP_SF_qqDd @ 0x1C00456C8
 * Callers:
 *     ndisSetOpenEnableWakeUp @ 0x1C00C5280 (ndisSetOpenEnableWakeUp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDd(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_6e2fc96078008429fd92c28490874609_Traceguids, 0x11u, va);
}
