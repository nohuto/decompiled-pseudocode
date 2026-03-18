/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1401C89D4
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x14062200C (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x14062DA98 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1406593A0 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x140661520 (MiBadMemoryLogger.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
