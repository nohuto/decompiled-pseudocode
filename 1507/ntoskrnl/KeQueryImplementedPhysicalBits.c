/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x140195CA0
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x140699B5C (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
