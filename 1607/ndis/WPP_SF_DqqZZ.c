/*
 * XREFs of WPP_SF_DqqZZ @ 0x1C006FB4C
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C00E7430 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_DqqZZ(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v3; // ecx
  const wchar_t *v4; // rdx
  const wchar_t *v5; // r9
  const wchar_t *v6; // r10
  const wchar_t *v7; // r8
  int v8; // r11d
  int v9[6]; // [rsp+90h] [rbp-18h] BYREF
  __int64 v10; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  __int64 v12; // [rsp+D0h] [rbp+28h] BYREF
  va_list va1; // [rsp+D0h] [rbp+28h]
  unsigned __int16 *v14; // [rsp+D8h] [rbp+30h]
  unsigned __int16 *v15; // [rsp+E0h] [rbp+38h]
  va_list va2; // [rsp+E8h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, unsigned __int16 *);
  v15 = va_arg(va2, unsigned __int16 *);
  v9[0] = 1;
  if ( v15 )
    v3 = *v15;
  else
    v3 = 8;
  v4 = L"NULL";
  if ( v15 )
    v5 = (const wchar_t *)*((_QWORD *)v15 + 1);
  else
    v5 = L"NULL";
  v6 = L"\b";
  v7 = L"\b";
  if ( v15 )
    v7 = v15;
  if ( v14 )
    v8 = *v14;
  else
    v8 = 8;
  if ( v14 )
  {
    v4 = (const wchar_t *)*((_QWORD *)v14 + 1);
    v6 = v14;
  }
  ndisWppFastTraceMessage(
    &WPP_95145dda949833bd55dad319dd5d3165_Traceguids,
    0xBu,
    v9,
    4LL,
    va,
    8LL,
    va1,
    8LL,
    v6,
    2LL,
    v4,
    v8,
    v7,
    2LL,
    v5,
    v3,
    0LL);
}
