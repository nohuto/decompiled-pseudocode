/*
 * XREFs of WPP_SF_Sx @ 0x1C005F7BC
 * Callers:
 *     ndisQueryDeviceFlags @ 0x1C00AADD0 (ndisQueryDeviceFlags.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004E510 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_Sx(__int64 a1, __int64 a2, const wchar_t *a3, ...)
{
  __int64 v4; // r9
  __int64 v5; // r9
  const wchar_t *v6; // r8
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( a3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a3[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = L"NULL";
  if ( a3 )
    v6 = a3;
  ndisWppFastTraceMessage(&WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, 0x6Du, v6, 2 * v5, va, 8LL, 0LL);
}
