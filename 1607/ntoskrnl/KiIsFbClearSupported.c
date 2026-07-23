/*
 * XREFs of KiIsFbClearSupported @ 0x1401D8C98
 * Callers:
 *     KiDetectKvaLeakage @ 0x1403DDD24 (KiDetectKvaLeakage.c)
 *     KeQuerySpeculationControlInformation @ 0x140650154 (KeQuerySpeculationControlInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
