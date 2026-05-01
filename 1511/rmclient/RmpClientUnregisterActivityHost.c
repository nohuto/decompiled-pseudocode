/*
 * XREFs of RmpClientUnregisterActivityHost @ 0x18000F05C
 * Callers:
 *     RmUnregisterActivityHost @ 0x18000EB70 (RmUnregisterActivityHost.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall RmpClientUnregisterActivityHost(__int64 a1, __int64 a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180017D40, 4u, 0LL, *(_QWORD *)(a1 + 16), a2);
}
