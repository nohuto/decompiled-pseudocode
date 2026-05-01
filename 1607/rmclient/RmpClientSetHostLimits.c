/*
 * XREFs of RmpClientSetHostLimits @ 0x180009CE4
 * Callers:
 *     RmSetHostLimit @ 0x1800099D0 (RmSetHostLimit.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall RmpClientSetHostLimits(__int64 a1, __int64 a2, __int64 a3)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18000EAC0, 5u, 0LL, *(_QWORD *)(a1 + 16), a2, a3);
}
