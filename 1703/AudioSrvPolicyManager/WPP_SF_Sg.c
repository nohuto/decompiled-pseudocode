/*
 * XREFs of WPP_SF_Sg @ 0x1800107B4
 * Callers:
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800144B0 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_Sg(TRACEHANDLE LoggerHandle, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  const wchar_t *v7; // rax
  __int64 v8; // rcx
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = v5 + 1;
  }
  else
  {
    v6 = 5LL;
  }
  v7 = L"NULL";
  v8 = 2 * v6;
  if ( a4 )
    v7 = a4;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids,
           0x3Du,
           v7,
           v8,
           va,
           8LL,
           0LL);
}
