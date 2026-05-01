/*
 * XREFs of RmpClientRegisterHostJobObject @ 0x18000E4D8
 * Callers:
 *     RmRegisterActivityHost @ 0x18000E040 (RmRegisterActivityHost.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall RmpClientRegisterHostJobObject(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  int v6; // [rsp+20h] [rbp-48h]

  v6 = *(_DWORD *)(a2 + 4);
  return NdrClientCall3(
           (MIDL_STUBLESS_PROXY_INFO *)&stru_180016C30,
           3u,
           0LL,
           *(_QWORD *)(a1 + 16),
           v6,
           *(_QWORD *)(a2 + 8),
           a3,
           a4,
           a5);
}
