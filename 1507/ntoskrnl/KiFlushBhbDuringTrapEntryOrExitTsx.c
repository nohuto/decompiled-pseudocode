/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x140195540
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_14019554D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
