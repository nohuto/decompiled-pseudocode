/*
 * XREFs of WPP_SF_DqZ @ 0x1C0048910
 * Callers:
 *     ndisMValidatePMWakeReason @ 0x1C004980C (ndisMValidatePMWakeReason.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_DqZ(__int64 a1, __int64 a2, int a3, ...)
{
  int v3; // edx
  const wchar_t *v4; // r8
  const wchar_t *v5; // rcx
  int v6; // [rsp+80h] [rbp+18h] BYREF
  __int64 v7; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  unsigned __int16 *v9; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v7 = va_arg(va1, _QWORD);
  v9 = va_arg(va1, unsigned __int16 *);
  v6 = a3;
  if ( v9 )
    v3 = *v9;
  else
    v3 = 8;
  if ( v9 )
    v4 = (const wchar_t *)*((_QWORD *)v9 + 1);
  else
    v4 = L"NULL";
  v5 = L"\b";
  if ( v9 )
    v5 = v9;
  ndisWppFastTraceMessage(
    &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids,
    0x8Du,
    &v6,
    4LL,
    va,
    8LL,
    v5,
    2LL,
    v4,
    v3,
    0LL);
}
