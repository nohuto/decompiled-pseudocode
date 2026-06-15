/*
 * XREFs of WPP_SF_SD @ 0x14003AB08
 * Callers:
 *     ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x14003A6E0 (-SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_SD(TRACEHANDLE a1, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  const wchar_t *v6; // rax
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    if ( *a4 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( a4[v5] );
      v4 = 2 * v5 + 2;
    }
    else
    {
      v4 = 14LL;
    }
  }
  else
  {
    v4 = 10LL;
  }
  if ( a4 )
  {
    v6 = L"<NULL>";
    if ( *a4 )
      v6 = a4;
  }
  else
  {
    v6 = L"NULL";
  }
  return TraceMessage(a1, 0x2Bu, &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids, 0xEu, v6, v4, va, 4LL, 0LL);
}
