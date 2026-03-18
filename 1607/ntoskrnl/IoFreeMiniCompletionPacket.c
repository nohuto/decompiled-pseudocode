/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x14051BA5C
 * Callers:
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400F86C0 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x1400F8700 (ExpDeleteWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400F8900 (ExpWorkerFactoryCompletionPacketRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoFreeMiniCompletionPacket(_QWORD *a1)
{
  a1[7] = 0LL;
  return IopFreeMiniCompletionPacket(a1);
}
