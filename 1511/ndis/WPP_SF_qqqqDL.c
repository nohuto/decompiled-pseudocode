/*
 * XREFs of WPP_SF_qqqqDL @ 0x1C0040D74
 * Callers:
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqqDL(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+A0h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, 0x2Au, va);
}
