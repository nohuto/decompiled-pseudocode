/*
 * XREFs of AlpcpDispatchMessage @ 0x1404B55A8
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1404B4A28 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpDispatchMessage(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v1 + 24) )
    return AlpcpDispatchNewMessage((__int64 *)a1);
  if ( *(_QWORD *)(v1 + 32) )
    return AlpcpDispatchReplyToWaitingThread((__int64 *)a1);
  return AlpcpDispatchReplyToPort(a1);
}
