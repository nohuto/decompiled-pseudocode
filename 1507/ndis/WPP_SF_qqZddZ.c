/*
 * XREFs of WPP_SF_qqZddZ @ 0x1C00591CC
 * Callers:
 *     ndisMOpenAdapter @ 0x1C00E8200 (ndisMOpenAdapter.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqZddZ(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+C0h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, 0x23u, va);
}
