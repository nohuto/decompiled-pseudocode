/*
 * XREFs of WmsgpDisconnect @ 0x1C0128088
 * Callers:
 *     CleanupLogonProcess @ 0x1C0063480 (CleanupLogonProcess.c)
 * Callees:
 *     <none>
 */

RPC_STATUS WmsgpDisconnect()
{
  RPC_STATUS result; // eax

  result = RpcBindingUnbind(gWinLogonRpcHandle);
  if ( !result )
  {
    result = RpcBindingFree(&gWinLogonRpcHandle);
    if ( !result )
      gWinLogonRpcHandle = 0LL;
  }
  return result;
}
