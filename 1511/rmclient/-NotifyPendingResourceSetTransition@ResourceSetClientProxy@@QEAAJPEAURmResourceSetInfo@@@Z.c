/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@QEAAJPEAURmResourceSetInfo@@@Z @ 0x1800143B4
 * Callers:
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180014420 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionM.c)
 *     ?NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@ExecutionModel@@@Z @ 0x180014480 (-NotifyPendingResourceSetTransition@ResourceSetClientProxy@@UEAAJW4Enum@ResourceSetType@Executio.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceSetClientProxy::NotifyPendingResourceSetTransition(
        ResourceSetClientProxy *this,
        struct RmResourceSetInfo *a2)
{
  int v3; // [rsp+20h] [rbp-28h]

  v3 = *((_DWORD *)this + 6);
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800176B0, 0x1Au, 0LL, *((_QWORD *)this + 2), v3, a2);
}
