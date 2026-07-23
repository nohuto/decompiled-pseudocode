/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x140171580
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_14017158D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
