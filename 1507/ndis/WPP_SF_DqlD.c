/*
 * XREFs of WPP_SF_DqlD @ 0x1C00565A0
 * Callers:
 *     ndisReferenceProtocol @ 0x1C0019A3C (ndisReferenceProtocol.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_DqlD(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // [rsp+80h] [rbp+18h] BYREF
  __int64 v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_0009299248ba37495192320194ebfcad_Traceguids, 0x25u, &v4);
}
