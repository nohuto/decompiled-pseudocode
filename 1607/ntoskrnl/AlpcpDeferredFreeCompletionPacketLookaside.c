/*
 * XREFs of AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400F6500
 * Callers:
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400F59F4 (AlpcpFreeCompletionPacketLookaside.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400F65E0 (AlpcpLookasidePacketCallbackRoutine.c)
 * Callees:
 *     IoFreeMiniCompletionPacket @ 0x1404FEE4C (IoFreeMiniCompletionPacket.c)
 */

void __fastcall AlpcpDeferredFreeCompletionPacketLookaside(_DWORD *a1)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < a1[2]; i = (unsigned int)(i + 1) )
    IoFreeMiniCompletionPacket(*(_QWORD *)&a1[6 * i + 16]);
  ExFreePoolWithTag(a1, 0);
}
