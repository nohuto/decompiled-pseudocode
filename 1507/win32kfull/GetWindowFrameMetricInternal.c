/*
 * XREFs of GetWindowFrameMetricInternal @ 0x1C0094140
 * Callers:
 *     GetWindowFrameMetric @ 0x1C000E7FC (GetWindowFrameMetric.c)
 *     GetWindowBordersWithCompatFlags2 @ 0x1C0093A44 (GetWindowBordersWithCompatFlags2.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0093D50 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowFrameMetricInternal(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rcx

  if ( (a2 & 0x10000000) != 0 || (a2 & 0x20000000) != 0 )
    return 0LL;
  if ( a3 )
    return ScaleSystemMetricForDPI(92LL, a3);
  if ( (a2 & 0x2000000) != 0 )
    v3 = gpsi + 1880LL;
  else
    v3 = gpsi + 2268LL;
  return *(unsigned int *)(v3 + 368);
}
