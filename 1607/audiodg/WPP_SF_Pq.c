/*
 * XREFs of WPP_SF_Pq @ 0x1400331D4
 * Callers:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012A20 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140014D40 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_Pq(TRACEHANDLE a1, USHORT a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return TraceMessage(a1, 0x2Bu, &WPP_ae0e5f86dcf339e9416e2a34673eb067_Traceguids, a2, va, 8LL, va1, 8LL, 0LL);
}
