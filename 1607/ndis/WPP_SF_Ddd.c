/*
 * XREFs of WPP_SF_Ddd @ 0x1C0044448
 * Callers:
 *     ndisQuerySetMiniportEx2 @ 0x1C001B1D0 (ndisQuerySetMiniportEx2.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Ddd(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // [rsp+70h] [rbp+18h] BYREF
  int v5; // [rsp+78h] [rbp+20h]

  v5 = a4;
  v4 = a3;
  ndisWppFastTraceMessage(&WPP_aebdfe7d38b7359b1048ceacddaf5972_Traceguids, 0xAu, &v4);
}
