/*
 * XREFs of WPP_SF_DqlD @ 0x1C0056430
 * Callers:
 *     ndisReferenceProtocol @ 0x1C001BE60 (ndisReferenceProtocol.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_DqlD(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // [rsp+80h] [rbp+18h] BYREF
  __int64 v5; // [rsp+88h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, 0x25u, &v4);
}
