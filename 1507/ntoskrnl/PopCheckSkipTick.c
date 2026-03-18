/*
 * XREFs of PopCheckSkipTick @ 0x1405C27F4
 * Callers:
 *     PopNewProcessorCallback @ 0x1406B09CC (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

bool PopCheckSkipTick()
{
  return PopApicMode == 2
      || (HvlEnlightenments & 0x8000) != 0 && (HvlpFlags & 4) == 0
      || PopApicMode == 3 && (unsigned int)KeNumberProcessors_0 <= 0x20;
}
