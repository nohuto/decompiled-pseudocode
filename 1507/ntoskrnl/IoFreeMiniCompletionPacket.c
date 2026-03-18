/*
 * XREFs of IoFreeMiniCompletionPacket @ 0x1404A4E9C
 * Callers:
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14006BD28 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x14006BD68 (ExpDeleteWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14009C480 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoFreeMiniCompletionPacket(__int64 a1)
{
  *(_QWORD *)(a1 + 56) = 0LL;
  return IopFreeMiniCompletionPacket((PSLIST_ENTRY)a1);
}
