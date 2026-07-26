/*
 * XREFs of WPP_SF_Sx @ 0x1C005B9A8
 * Callers:
 *     ndisQueryDeviceFlags @ 0x1C009C954 (ndisQueryDeviceFlags.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C0049CC0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_Sx(__int64 a1, __int64 a2, const wchar_t *a3, ...)
{
  __int64 v3; // r9
  __int64 v4; // rax
  const wchar_t *v5; // rax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( a3 )
  {
    if ( *a3 )
    {
      v4 = -1LL;
      do
        ++v4;
      while ( a3[v4] );
      v3 = 2 * v4 + 2;
    }
    else
    {
      v3 = 14LL;
    }
  }
  else
  {
    v3 = 10LL;
  }
  if ( a3 )
  {
    v5 = L"<NULL>";
    if ( *a3 )
      v5 = a3;
  }
  else
  {
    v5 = L"NULL";
  }
  ndisWppFastTraceMessage(&WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, 0x6Du, v5, v3, va, 8LL, 0LL);
}
