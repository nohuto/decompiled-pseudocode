/*
 * XREFs of RM_PROXY_CONTEXT_HANDLE_TYPE_rundown @ 0x180037040
 * Callers:
 *     <none>
 * Callees:
 *     ?Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z @ 0x1800398A0 (-Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z.c)
 */

__int64 __fastcall RM_PROXY_CONTEXT_HANDLE_TYPE_rundown(void *a1)
{
  void *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  return ResourceManagerServerProxy::Handle_RM_DisconnectFromServer(g_pProxy, &v2);
}
