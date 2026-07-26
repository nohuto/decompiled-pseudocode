/*
 * XREFs of WPP_SF_LqqZZ @ 0x1C005E6E0
 * Callers:
 *     ndisPnPNotifyBinding @ 0x1C00E3EEC (ndisPnPNotifyBinding.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_LqqZZ(__int64 a1, __int64 a2, int a3, ...)
{
  __int64 *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  const wchar_t *v6; // r8
  __int64 *v7; // rcx
  const wchar_t *v8; // rdx
  int v9; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v10; // [rsp+B8h] [rbp+20h] BYREF
  va_list va; // [rsp+B8h] [rbp+20h]
  __int64 v12; // [rsp+C0h] [rbp+28h] BYREF
  va_list va1; // [rsp+C0h] [rbp+28h]
  unsigned __int16 *v14; // [rsp+C8h] [rbp+30h]
  unsigned __int16 *v15; // [rsp+D0h] [rbp+38h]
  va_list va2; // [rsp+D8h] [rbp+40h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v14 = va_arg(va2, unsigned __int16 *);
  v15 = va_arg(va2, unsigned __int16 *);
  v9 = a3;
  v3 = (__int64 *)v15;
  v4 = 10LL;
  if ( v15 && *((_QWORD *)v15 + 1) )
    v5 = *v15;
  else
    v5 = 10LL;
  if ( !v15 || (v6 = (const wchar_t *)*((_QWORD *)v15 + 1)) == 0LL )
    v6 = L"NULL";
  if ( !v15 || !*v15 )
    v3 = qword_1C00276B0;
  v7 = (__int64 *)v14;
  if ( !v14 )
    goto LABEL_15;
  if ( *((_QWORD *)v14 + 1) )
    v4 = *v14;
  v8 = (const wchar_t *)*((_QWORD *)v14 + 1);
  if ( !v8 )
LABEL_15:
    v8 = L"NULL";
  if ( !v14 || !*v14 )
    v7 = qword_1C00276B0;
  ndisWppFastTraceMessage(
    &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids,
    0x1Bu,
    &v9,
    4LL,
    va,
    8LL,
    va1,
    8LL,
    v7,
    2LL,
    v8,
    v4,
    v3,
    2LL,
    v6,
    v5,
    0LL);
}
