/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x140171080
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_14017108D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
