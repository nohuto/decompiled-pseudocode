/*
 * XREFs of WPP_SF_qqDDD @ 0x1C0040AC8
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C0007FE0 (ndisFDoOidRequestInternal.c)
 *     ndisMDoOidRequest @ 0x1C0008EC8 (ndisMDoOidRequest.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqDDD(unsigned __int16 a1, __int64 a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(&WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, va);
}
