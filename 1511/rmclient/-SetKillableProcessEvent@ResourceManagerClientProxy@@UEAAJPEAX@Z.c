/*
 * XREFs of ?SetKillableProcessEvent@ResourceManagerClientProxy@@UEAAJPEAX@Z @ 0x180014C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerClientProxy::SetKillableProcessEvent(
        ResourceManagerClientProxy *this,
        void *a2)
{
  int v3; // [rsp+20h] [rbp-28h]

  v3 = (int)a2;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800176B0, 0xDu, 0LL, *((_QWORD *)this + 2567), v3);
}
