/*
 * XREFs of WPP_SF_sZZ @ 0x1C004ECC8
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00AD7C4 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_sZZ(unsigned __int16 a1, __int64 a2, const char *a3, unsigned __int16 *a4, unsigned __int16 *a5)
{
  int v6; // r11d
  int v7; // esi
  const wchar_t *v8; // r10
  const wchar_t *v9; // rbp
  const wchar_t *v10; // rdx
  const wchar_t *v11; // rdi
  __int64 v12; // r9
  __int64 v13; // r9
  const char *v14; // r8

  v6 = 8;
  if ( a5 )
    v7 = *a5;
  else
    v7 = 8;
  v8 = L"NULL";
  if ( a5 )
    v9 = (const wchar_t *)*((_QWORD *)a5 + 1);
  else
    v9 = L"NULL";
  v10 = L"\b";
  v11 = L"\b";
  if ( a5 )
    v11 = a5;
  if ( a4 )
  {
    v6 = *a4;
    v8 = (const wchar_t *)*((_QWORD *)a4 + 1);
    v10 = a4;
  }
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
    &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids,
    a1,
    v14,
    v13,
    v10,
    2LL,
    v8,
    v6,
    v11,
    2LL,
    v9,
    v7,
    0LL);
}
