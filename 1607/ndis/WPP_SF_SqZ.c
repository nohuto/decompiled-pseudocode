/*
 * XREFs of WPP_SF_SqZ @ 0x1C0048A54
 * Callers:
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C0049568 (ndisMUpdateNameOnPMWakePacket.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_SqZ(__int64 a1, __int64 a2, const wchar_t *a3, ...)
{
  int v3; // r10d
  const wchar_t *v4; // rcx
  const wchar_t *v5; // r11
  const wchar_t *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  unsigned __int16 *v11; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, unsigned __int16 *);
  if ( v11 )
    v3 = *v11;
  else
    v3 = 8;
  v4 = L"NULL";
  if ( v11 )
    v5 = (const wchar_t *)*((_QWORD *)v11 + 1);
  else
    v5 = L"NULL";
  v6 = L"\b";
  if ( v11 )
    v6 = v11;
  if ( a3 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v8 = 5LL;
  }
  if ( a3 )
    v4 = a3;
  ndisWppFastTraceMessage(
    &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids,
    0x7Fu,
    v4,
    2 * v8,
    va,
    8LL,
    v6,
    2LL,
    v5,
    v3,
    0LL);
}
