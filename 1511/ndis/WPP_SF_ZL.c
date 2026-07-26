/*
 * XREFs of WPP_SF_ZL @ 0x1C0056490
 * Callers:
 *     ndisValidate60Protocol @ 0x1C00A75F8 (ndisValidate60Protocol.c)
 *     ndisValidateLegacyProtocols @ 0x1C00C9D84 (ndisValidateLegacyProtocols.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_ZL(unsigned __int16 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 v4; // rdx
  const wchar_t *v5; // rax
  int v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = a4;
  if ( a3 && a3[1] )
    v4 = *(unsigned __int16 *)a3;
  else
    v4 = 10LL;
  if ( !a3 || (v5 = (const wchar_t *)a3[1]) == 0LL )
    v5 = L"NULL";
  if ( !a3 || !*(_WORD *)a3 )
    a3 = qword_1C00276B0;
  ndisWppFastTraceMessage(&WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids, a1, a3, 2LL, v5, v4, &v6, 4LL, 0LL);
}
