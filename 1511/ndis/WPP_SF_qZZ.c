/*
 * XREFs of WPP_SF_qZZ @ 0x1C0056518
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C00E3930 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qZZ(unsigned __int16 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned __int16 *a5)
{
  __int64 *v5; // rax
  __int64 v7; // r8
  __int64 v8; // r10
  const wchar_t *v9; // rdx
  const wchar_t *v10; // rcx
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF

  v11 = a3;
  v5 = (__int64 *)a5;
  v7 = 10LL;
  if ( a5 && *((_QWORD *)a5 + 1) )
    v8 = *a5;
  else
    v8 = 10LL;
  if ( !a5 || (v9 = (const wchar_t *)*((_QWORD *)a5 + 1)) == 0LL )
    v9 = L"NULL";
  if ( !a5 || !*a5 )
    v5 = qword_1C00276B0;
  if ( !a4 )
    goto LABEL_15;
  if ( a4[1] )
    v7 = *(unsigned __int16 *)a4;
  v10 = (const wchar_t *)a4[1];
  if ( !v10 )
LABEL_15:
    v10 = L"NULL";
  if ( !a4 || !*(_WORD *)a4 )
    a4 = qword_1C00276B0;
  ndisWppFastTraceMessage(
    &WPP_e424ef97f2a14b5e115affaca25388e5_Traceguids,
    a1,
    &v11,
    8LL,
    a4,
    2LL,
    v10,
    v7,
    v5,
    2LL,
    v9,
    v8,
    0LL);
}
