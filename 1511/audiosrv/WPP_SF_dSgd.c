/*
 * XREFs of WPP_SF_dSgd @ 0x18009D84C
 * Callers:
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18009CCB4 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_dSgd(TRACEHANDLE LoggerHandle, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  const wchar_t *v6; // rcx
  __int64 v8; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  const wchar_t *v10; // [rsp+A0h] [rbp+28h]
  __int64 v11; // [rsp+A8h] [rbp+30h] BYREF
  va_list va1; // [rsp+A8h] [rbp+30h]
  va_list va2; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, const wchar_t *);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  if ( v10 )
  {
    if ( *v10 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( v10[v5] );
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
  if ( v10 )
  {
    v6 = L"<NULL>";
    if ( *v10 )
      v6 = v10;
  }
  else
  {
    v6 = L"NULL";
  }
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_a039a10251cf52648c3361a61631dc40_Traceguids,
           0x25u,
           va,
           4LL,
           v6,
           v4,
           va1,
           8LL,
           va2,
           4LL,
           0LL);
}
