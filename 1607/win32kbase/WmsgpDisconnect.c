/*
 * XREFs of WmsgpDisconnect @ 0x1C01422C8
 * Callers:
 *     CleanupLogonProcess @ 0x1C006D120 (CleanupLogonProcess.c)
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
