/*
 * XREFs of ?SetKillableProcessEvent@ResourceManagerClientProxy@@UEAAJPEAX@Z @ 0x180013F30
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
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016730, 0xDu, 0LL, *((_QWORD *)this + 2510), v3);
}
