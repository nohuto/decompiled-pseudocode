/*
 * XREFs of ?SetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJKQEAU_ResourceInfo@ExecutionModel@@@Z @ 0x180014C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceSetClientProxy::SetExternalResourcePriorities(
        ResourceSetClientProxy *this,
        int a2,
        struct ExecutionModel::_ResourceInfo *const a3)
{
  int v4; // [rsp+20h] [rbp-38h]

  v4 = *((_DWORD *)this + 6);
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800176B0, 0x18u, 0LL, *((_QWORD *)this + 2), v4, a2, a3);
}
