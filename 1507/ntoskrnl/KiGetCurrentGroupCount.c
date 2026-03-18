/*
 * XREFs of KiGetCurrentGroupCount @ 0x140131C20
 * Callers:
 *     KiUpdateProcessorCount @ 0x1403FA6B8 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140353C80;
}
