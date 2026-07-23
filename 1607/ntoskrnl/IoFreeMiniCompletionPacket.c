/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x1404FEE4C
 * Callers:
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400F6500 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x1400F6540 (ExpDeleteWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400F6740 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoFreeMiniCompletionPacket(_QWORD *a1)
{
  a1[7] = 0LL;
  return IopFreeMiniCompletionPacket(a1);
}
