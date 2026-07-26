/*
 * XREFs of WPP_SF_qqZddZ @ 0x1C0058EBC
 * Callers:
 *     ndisMOpenAdapter @ 0x1C00E340C (ndisMOpenAdapter.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqZddZ(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+C0h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, 0x26u, va);
}
