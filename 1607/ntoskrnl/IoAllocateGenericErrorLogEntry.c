/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1401C8874
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x1406220C0 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x14062DB4C (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x140659484 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x140661604 (MiBadMemoryLogger.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
