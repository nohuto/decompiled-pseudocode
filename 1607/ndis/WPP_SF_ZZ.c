/*
 * XREFs of WPP_SF_ZZ @ 0x1C0042C34
 * Callers:
 *     ndisIfAliasChange @ 0x1C00432A8 (ndisIfAliasChange.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_ZZ(__int64 a1, __int64 a2, const wchar_t *a3)
{
  const wchar_t *v3; // r11

  v3 = L"\b";
  if ( a3 )
    v3 = a3;
  ndisWppFastTraceMessage(&WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, 0xA3u, v3);
}
