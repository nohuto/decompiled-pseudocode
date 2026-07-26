/*
 * XREFs of WPP_SF_sZZ @ 0x1C0049A80
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C0099308 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_sZZ(unsigned __int16 a1, __int64 a2, const char *a3, __int64 *a4, unsigned __int16 *a5)
{
  __int64 *v5; // rax
  __int64 v8; // r11
  __int64 v9; // rdi
  const wchar_t *v10; // r10
  const wchar_t *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  const char *v14; // r8

  v5 = (__int64 *)a5;
  v8 = 10LL;
  if ( a5 && *((_QWORD *)a5 + 1) )
    v9 = *a5;
  else
    v9 = 10LL;
  if ( !a5 || (v10 = (const wchar_t *)*((_QWORD *)a5 + 1)) == 0LL )
    v10 = L"NULL";
  if ( !a5 || !*a5 )
    v5 = qword_1C00241B0;
  if ( !a4 )
    goto LABEL_15;
  if ( a4[1] )
    v8 = *(unsigned __int16 *)a4;
  v11 = (const wchar_t *)a4[1];
  if ( !v11 )
LABEL_15:
    v11 = L"NULL";
  if ( !a4 || !*(_WORD *)a4 )
    a4 = qword_1C00241B0;
  if ( a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  v14 = "NULL";
  if ( a3 )
    v14 = a3;
  ndisWppFastTraceMessage(
    &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids,
    a1,
    v14,
    v13,
    a4,
    2LL,
    v11,
    v8,
    v5,
    2LL,
    v10,
    v9,
    0LL);
}
