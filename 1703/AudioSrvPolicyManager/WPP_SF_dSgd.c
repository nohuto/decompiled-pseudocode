/*
 * XREFs of WPP_SF_dSgd @ 0x1800183E8
 * Callers:
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z @ 0x18001B5E4 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGMHPEAH1PEAM11@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_dSgd(TRACEHANDLE LoggerHandle, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  const wchar_t *v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  const wchar_t *v11; // [rsp+A0h] [rbp+28h]
  __int64 v12; // [rsp+A8h] [rbp+30h] BYREF
  va_list va1; // [rsp+A8h] [rbp+30h]
  va_list va2; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, const wchar_t *);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  if ( v11 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v11[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = L"NULL";
  v7 = 2 * v5;
  if ( v11 )
    v6 = v11;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids,
           0x25u,
           va,
           4LL,
           v6,
           v7,
           va1,
           8LL,
           va2,
           4LL,
           0LL);
}
