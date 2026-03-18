/*
 * XREFs of IoAllocateGenericErrorLogEntry @ 0x1401BAB90
 * Callers:
 *     IopLogBlockedDriverEvent @ 0x1405F8184 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x14060369C (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1406216B4 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x14062AA40 (MiBadMemoryLogger.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall IoAllocateGenericErrorLogEntry(char a1)
{
  return IopAllocateErrorLogEntry(0LL, 0LL, a1);
}
