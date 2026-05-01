/*
 * XREFs of RmtSrv_RM_SetKillableProcessEvent @ 0x180031530
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     ?Handle_RM_SetKillableProcessEvent@ResourceManagerServerProxy@@QEAAJKPEAX@Z @ 0x1800327C8 (-Handle_RM_SetKillableProcessEvent@ResourceManagerServerProxy@@QEAAJKPEAX@Z.c)
 */

int __fastcall RmtSrv_RM_SetKillableProcessEvent(RPC_BINDING_HANDLE ClientBinding, void *a2)
{
  unsigned int v2; // edi
  _DWORD RpcCallAttributes[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v6[56]; // [rsp+28h] [rbp-80h] BYREF
  unsigned int v7; // [rsp+60h] [rbp-48h]

  v2 = (unsigned int)a2;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v6, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  return ResourceManagerServerProxy::Handle_RM_SetKillableProcessEvent(g_pProxy, v7, (void *)v2);
}
