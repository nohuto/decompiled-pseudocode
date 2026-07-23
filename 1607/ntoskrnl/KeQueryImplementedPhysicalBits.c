/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x140171D0C
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x140650010 (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
