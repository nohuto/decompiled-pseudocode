/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x14006BD28
 * Callers:
 *     AlpcpFreeCompletionPacketLookaside @ 0x14006BCD8 (AlpcpFreeCompletionPacketLookaside.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14009D7A0 (AlpcpLookasidePacketCallbackRoutine.c)
 * Callees:
 *     IoFreeMiniCompletionPacket @ 0x1404A4E9C (IoFreeMiniCompletionPacket.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_DWORD *a1)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < a1[2]; i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(*(_QWORD *)&a1[6 * i + 16]);
  ExFreePoolWithTag(a1, 0);
}
