/*
 * XREFs of WPP_SF_sd @ 0x18001A4B4
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18001DE90 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_sd(TRACEHANDLE a1, USHORT a2, __int64 a3, const char *a4, ...)
{
  __int64 v4; // r8
  __int64 v5; // r8
  const char *v6; // rax
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = "NULL";
  if ( a4 )
    v6 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids, a2, v6, v5, va, 4LL, 0LL);
}
