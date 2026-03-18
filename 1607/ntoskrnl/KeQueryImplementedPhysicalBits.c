/*
 * XREFs of KeQueryImplementedPhysicalBits @ 0x140171810
 * Callers:
 *     KeQueryKvaShadowInformation @ 0x14064FF2C (KeQueryKvaShadowInformation.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryImplementedPhysicalBits()
{
  return (unsigned int)KiImplementedPhysicalBits;
}
