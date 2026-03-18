/*
 * XREFs of BreakPoint @ 0x1C0046CE0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDebugger @ 0x1C0043278 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 */

__int64 BreakPoint()
{
  ConPrintf("\nHit a code breakpoint.\n");
  AMLIDebugger();
  return 0LL;
}
