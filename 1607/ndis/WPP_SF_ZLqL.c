/*
 * XREFs of WPP_SF_ZLqL @ 0x1C00627E0
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C00E90B8 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_ZLqL(__int64 a1, __int64 a2, unsigned __int16 *a3, int a4, ...)
{
  int v5; // ecx
  const wchar_t *v6; // rdx
  const wchar_t *v7; // r8
  int v8; // [rsp+98h] [rbp+20h] BYREF
  __int64 v9; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  va_list va1; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v9 = va_arg(va1, _QWORD);
  v8 = a4;
  if ( a3 )
    v5 = *a3;
  else
    v5 = 8;
  if ( a3 )
    v6 = (const wchar_t *)*((_QWORD *)a3 + 1);
  else
    v6 = L"NULL";
  v7 = L"\b";
  if ( a3 )
    v7 = a3;
  ndisWppFastTraceMessage(
    &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids,
    0x11u,
    v7,
    2LL,
    v6,
    v5,
    &v8,
    4LL,
    va,
    8LL,
    va1,
    4LL,
    0LL);
}
