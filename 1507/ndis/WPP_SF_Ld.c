/*
 * XREFs of WPP_SF_Ld @ 0x1C0049870
 * Callers:
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0049018 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Ld(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+60h] [rbp+18h] BYREF
  int v5; // [rsp+68h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, 0x59u, &v4);
}
