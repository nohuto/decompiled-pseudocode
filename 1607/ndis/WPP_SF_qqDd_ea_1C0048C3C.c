/*
 * XREFs of WPP_SF_qqDd @ 0x1C0048C3C
 * Callers:
 *     ndisSetOpenEnableWakeUp @ 0x1C00CAC18 (ndisSetOpenEnableWakeUp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDd(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids, 0x11u, va);
}
