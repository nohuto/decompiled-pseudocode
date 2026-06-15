/*
 * XREFs of ?AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z @ 0x1400031A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x1400032E0 (-AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiProc(HandleSendReceiveServer *Parameter)
{
  HandleSendReceiveServer::AeServerApiLoop(Parameter);
  return 0LL;
}
