/*
 * XREFs of KiGetCurrentGroupCount @ 0x1400B3D88
 * Callers:
 *     KiUpdateProcessorCount @ 0x1403D3BD4 (KiUpdateProcessorCount.c)
 * Callees:
 *     <none>
 */

__int64 KiGetCurrentGroupCount()
{
  return (unsigned __int16)word_140328F18;
}
