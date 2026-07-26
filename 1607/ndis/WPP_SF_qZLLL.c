/*
 * XREFs of WPP_SF_qZLLL @ 0x1C006305C
 * Callers:
 *     ndisQuerySetMiniportDeviceState @ 0x1C009C914 (ndisQuerySetMiniportDeviceState.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qZLLL(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4, ...)
{
  int v4; // eax
  const wchar_t *v5; // rdx
  const wchar_t *v6; // rcx
  __int64 v7; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v8; // [rsp+B0h] [rbp+28h] BYREF
  va_list va; // [rsp+B0h] [rbp+28h]
  __int64 v10; // [rsp+B8h] [rbp+30h] BYREF
  va_list va1; // [rsp+B8h] [rbp+30h]
  va_list va2; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
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
    0x36u,
    &v7,
    8LL,
    v6,
    2LL,
    v5,
    v4,
    va,
    4LL,
    va1,
    4LL,
    va2,
    4LL,
    0LL);
}
