/*
 * XREFs of PopCheckSkipTick @ 0x140530B7C
 * Callers:
 *     PopNewProcessorCallback @ 0x1406323A4 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 */

bool PopCheckSkipTick()
{
  return PopApicMode == 2
      || (HvlEnlightenments & 0x4000) != 0 && (HvlpFlags & 4) == 0
      || PopApicMode == 3 && KeQueryActiveProcessorCountEx(0xFFFFu) <= 0x20;
}
