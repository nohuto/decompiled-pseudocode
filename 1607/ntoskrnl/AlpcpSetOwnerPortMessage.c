/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x14044A830
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x140446E10 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchReplyToPort @ 0x140447320 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchNewMessage @ 0x14044A430 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x14049CF64 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14049E040 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14049E74C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x1404AEB14 (AlpcpDispatchCloseMessage.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerPortMessage(__int64 a1, void *a2)
{
  LONG_PTR result; // rax

  result = ObfReferenceObject(a2);
  *(_DWORD *)(a1 + 40) |= 0x1000u;
  *(_QWORD *)(a1 + 24) = a2;
  return result;
}
