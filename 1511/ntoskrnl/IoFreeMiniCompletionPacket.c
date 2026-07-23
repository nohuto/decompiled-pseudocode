/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x140487948
 * Callers:
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400C4F48 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x1400C4F88 (ExpDeleteWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400C5340 (ExpWorkerFactoryCompletionPacketRoutine.c)
 * Callees:
 *     <none>
 */

void __fastcall IoFreeMiniCompletionPacket(_SLIST_ENTRY *P)
{
  *((_QWORD *)&P[3].Next + 1) = 0LL;
  IopFreeMiniCompletionPacket(P);
}
