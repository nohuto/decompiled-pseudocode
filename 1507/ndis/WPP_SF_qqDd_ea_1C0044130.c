/*
 * XREFs of WPP_SF_qqDd @ 0x1C0044130
 * Callers:
 *     ndisSetOpenEnableWakeUp @ 0x1C00CBE60 (ndisSetOpenEnableWakeUp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDd(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_fbb1998797815902974a7c4233493709_Traceguids, 0x11u, va);
}
