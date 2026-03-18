/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400F86C0
 * Callers:
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400F7BB4 (AlpcpFreeCompletionPacketLookaside.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400F87A0 (AlpcpLookasidePacketCallbackRoutine.c)
 * Callees:
 *     IoFreeMiniCompletionPacket @ 0x14051BA5C (IoFreeMiniCompletionPacket.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_DWORD *a1)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < a1[2]; i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(*(_QWORD *)&a1[6 * i + 16]);
  ExFreePoolWithTag(a1, 0);
}
