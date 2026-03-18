/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x14044B960
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x140447F40 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchReplyToPort @ 0x140448450 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchNewMessage @ 0x14044B560 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404B2B84 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404B3C60 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404B436C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x1404C2E00 (AlpcpDispatchCloseMessage.c)
 * Callees:
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerPortMessage(__int64 a1, void *a2)
{
  LONG_PTR result; // rax

  result = ObfReferenceObject(a2);
  *(_DWORD *)(a1 + 40) |= 0x1000u;
  *(_QWORD *)(a1 + 24) = a2;
  return result;
}
