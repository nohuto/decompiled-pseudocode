/*
 * XREFs of KiIsFbClearSupported @ 0x140209FA8
 * Callers:
 *     KiDetectKvaLeakage @ 0x1404026D0 (KiDetectKvaLeakage.c)
 *     KeQuerySpeculationControlInformation @ 0x140699748 (KeQuerySpeculationControlInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsFbClearSupported()
{
  return (KeFeatureBits2 & 0x400000) != 0 || (KeFeatureBits2 & 0x29) == 9;
}
