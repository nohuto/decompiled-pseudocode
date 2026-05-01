/*
 * XREFs of RmpClientUnregisterActivityHost @ 0x18000E644
 * Callers:
 *     RmUnregisterActivityHost @ 0x18000E150 (RmUnregisterActivityHost.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall RmpClientUnregisterActivityHost(__int64 a1, __int64 a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016C30, 4u, 0LL, *(_QWORD *)(a1 + 16), a2);
}
