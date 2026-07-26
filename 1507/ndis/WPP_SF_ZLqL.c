/*
 * XREFs of WPP_SF_ZLqL @ 0x1C005EEA0
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C00E6058 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049420 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_ZLqL(__int64 a1, __int64 a2, __int64 *a3, int a4, ...)
{
  __int64 v4; // rcx
  const wchar_t *v5; // rax
  int v6; // [rsp+98h] [rbp+20h] BYREF
  __int64 v7; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  va_list va1; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v7 = va_arg(va1, _QWORD);
  v6 = a4;
  if ( a3 && a3[1] )
    v4 = *(unsigned __int16 *)a3;
  else
    v4 = 10LL;
  if ( !a3 || (v5 = (const wchar_t *)a3[1]) == 0LL )
    v5 = L"NULL";
  if ( !a3 || !*(_WORD *)a3 )
    a3 = qword_1C00241B0;
  ndisWppFastTraceMessage(
    &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids,
    0x11u,
    a3,
    2LL,
    v5,
    v4,
    &v6,
    4LL,
    va,
    8LL,
    va1,
    4LL,
    0LL);
}
