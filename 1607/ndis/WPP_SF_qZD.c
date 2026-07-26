/*
 * XREFs of WPP_SF_qZD @ 0x1C0062FC0
 * Callers:
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qZD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, ...)
{
  int v4; // eax
  const wchar_t *v5; // rdx
  const wchar_t *v6; // rcx
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  v7 = a3;
  if ( a4 )
    v4 = *a4;
  else
    v4 = 8;
  if ( a4 )
    v5 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v5 = L"NULL";
  v6 = L"\b";
  if ( a4 )
    v6 = a4;
  ndisWppFastTraceMessage(
    &WPP_7b68669345513bc3aa7a551c4dacedad_Traceguids,
    0x2Fu,
    &v7,
    8LL,
    v6,
    2LL,
    v5,
    v4,
    va,
    4LL,
    0LL);
}
