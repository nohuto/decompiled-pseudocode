/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x140480024
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x14042B610 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchReplyToPort @ 0x14042C0B0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchCloseMessage @ 0x14047FA24 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14047FE08 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140480230 (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 */

__int64 __fastcall AlpcpSetOwnerPortMessage(__int64 a1, void *a2, unsigned __int8 a3)
{
  __int64 result; // rax

  if ( a3 )
    ObfReferenceObject(a2);
  result = (*(_DWORD *)(a1 + 40) ^ (a3 << 12)) & 0x1000;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 40) ^= result;
  return result;
}
