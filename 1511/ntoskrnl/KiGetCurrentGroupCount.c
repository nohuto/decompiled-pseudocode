/*
 * XREFs of KiGetCurrentGroupCount @ 0x1400F4648
 * Callers:
 *     KiUpdateProcessorCount @ 0x1403A903C (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140305F08;
}
