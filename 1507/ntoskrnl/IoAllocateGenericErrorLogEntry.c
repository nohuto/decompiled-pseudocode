/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1401F5DC4
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x14067211C (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x14067E508 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1406A0D4C (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x1406A8608 (MiBadMemoryLogger.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
