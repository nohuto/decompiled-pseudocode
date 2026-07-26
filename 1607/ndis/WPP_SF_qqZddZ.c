/*
 * XREFs of WPP_SF_qqZddZ @ 0x1C005D374
 * Callers:
 *     ndisMOpenAdapter @ 0x1C00E7CD0 (ndisMOpenAdapter.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqZddZ(__int64 a1, __int64 a2, ...)
{
  int v2; // ecx
  const wchar_t *v3; // rdx
  const wchar_t *v4; // r9
  const wchar_t *v5; // r10
  const wchar_t *v6; // r8
  int v7; // r11d
  __int64 v8; // [rsp+C0h] [rbp+18h] BYREF
  va_list va; // [rsp+C0h] [rbp+18h]
  __int64 v10; // [rsp+C8h] [rbp+20h] BYREF
  va_list va1; // [rsp+C8h] [rbp+20h]
  unsigned __int16 *v12; // [rsp+D0h] [rbp+28h]
  __int64 v13; // [rsp+D8h] [rbp+30h] BYREF
  va_list va2; // [rsp+D8h] [rbp+30h]
  __int64 v15; // [rsp+E0h] [rbp+38h] BYREF
  va_list va3; // [rsp+E0h] [rbp+38h]
  unsigned __int16 *v17; // [rsp+E8h] [rbp+40h]
  va_list va4; // [rsp+F0h] [rbp+48h] BYREF

  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v12 = va_arg(va2, unsigned __int16 *);
  va_copy(va3, va2);
  v13 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v15 = va_arg(va4, _QWORD);
  v17 = va_arg(va4, unsigned __int16 *);
  if ( v17 )
    v2 = *v17;
  else
    v2 = 8;
  v3 = L"NULL";
  if ( v17 )
    v4 = (const wchar_t *)*((_QWORD *)v17 + 1);
  else
    v4 = L"NULL";
  v5 = L"\b";
  v6 = L"\b";
  if ( v17 )
    v6 = v17;
  if ( v12 )
    v7 = *v12;
  else
    v7 = 8;
  if ( v12 )
  {
    v3 = (const wchar_t *)*((_QWORD *)v12 + 1);
    v5 = v12;
  }
  ndisWppFastTraceMessage(
    &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids,
    0x26u,
    va,
    8LL,
    va1,
    8LL,
    v5,
    2LL,
    v3,
    v7,
    va2,
    4LL,
    va3,
    4LL,
    v6,
    2LL,
    v4,
    v2,
    0LL);
}
