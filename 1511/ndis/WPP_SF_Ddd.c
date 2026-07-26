/*
 * XREFs of WPP_SF_Ddd @ 0x1C00408F8
 * Callers:
 *     ndisQuerySetMiniportEx2 @ 0x1C001F4F4 (ndisQuerySetMiniportEx2.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Ddd(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, 0xAu, &v4);
}
