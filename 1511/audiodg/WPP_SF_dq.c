/*
 * XREFs of WPP_SF_dq @ 0x14003ABC8
 * Callers:
 *     ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140014D80 (-ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_dq(TRACEHANDLE a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return TraceMessage(a1, 0x2Bu, &WPP_69a2f442a7c70e07fee70227292c43c2_Traceguids, 0x15u, &v5, 4LL, va, 8LL, 0LL);
}
