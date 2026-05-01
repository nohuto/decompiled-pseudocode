/*
 * XREFs of ?FreePolicyEngineRPCBindingHandle@@YAXXZ @ 0x1800072C8
 * Callers:
 *     DllMain @ 0x18000C8A8 (DllMain.c)
 * Callees:
 *     <none>
 */

void FreePolicyEngineRPCBindingHandle(void)
{
  if ( ExecutionModel::Internal::rpc_handle )
  {
    RpcBindingFree(&ExecutionModel::Internal::rpc_handle);
    ExecutionModel::Internal::rpc_handle = 0LL;
  }
}
