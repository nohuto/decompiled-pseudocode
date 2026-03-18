/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400C4F48
 * Callers:
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140083BF0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400C4EF8 (AlpcpFreeCompletionPacketLookaside.c)
 * Callees:
 *     IoFreeMiniCompletionPacket @ 0x140487948 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_DWORD *a1)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < a1[2]; i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(*(_QWORD *)&a1[6 * i + 16]);
  ExFreePoolWithTag(a1, 0);
}
