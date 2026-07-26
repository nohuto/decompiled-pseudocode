/*
 * XREFs of WPP_SF_qDL @ 0x1C0058FA4
 * Callers:
 *     ndisMOidRequest @ 0x1C0007ED0 (ndisMOidRequest.c)
 *     ndisReferenceOpenByHandle @ 0x1C001EC00 (ndisReferenceOpenByHandle.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qDL(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  __int64 v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, 0x69u, &v4, 8LL, &v5, 4LL, va, 4LL, 0LL);
}
