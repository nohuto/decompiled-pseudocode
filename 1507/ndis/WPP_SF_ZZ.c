/*
 * XREFs of WPP_SF_ZZ @ 0x1C003DF78
 * Callers:
 *     ndisIfAliasChange @ 0x1C00207CC (ndisIfAliasChange.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_ZZ(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r10
  const wchar_t *v6; // rcx
  const wchar_t *v7; // rax

  v4 = 10LL;
  if ( a4 && a4[1] )
    v5 = *(unsigned __int16 *)a4;
  else
    v5 = 10LL;
  if ( !a4 || (v6 = (const wchar_t *)a4[1]) == 0LL )
    v6 = L"NULL";
  if ( !a4 || !*(_WORD *)a4 )
    a4 = qword_1C00241B0;
  if ( !a3 )
    goto LABEL_15;
  if ( a3[1] )
    v4 = *(unsigned __int16 *)a3;
  v7 = (const wchar_t *)a3[1];
  if ( !v7 )
LABEL_15:
    v7 = L"NULL";
  if ( !a3 || !*(_WORD *)a3 )
    a3 = qword_1C00241B0;
  ndisWppFastTraceMessage(
    &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids,
    0xA3u,
    a3,
    2LL,
    v7,
    v4,
    a4,
    2LL,
    v6,
    v5,
    0LL);
}
