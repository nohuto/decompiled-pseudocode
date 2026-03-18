/*
 * XREFs of MagpRevokeInputTransfrom @ 0x14023BF80
 * Callers:
 *     MagSetLensContextInformation @ 0x1401EB08C (MagSetLensContextInformation.c)
 *     MagpDecomposeDesktop @ 0x14023BE54 (MagpDecomposeDesktop.c)
 * Callees:
 *     _CancelMagnificationInputTransform @ 0x14023BFA0 (_CancelMagnificationInputTransform.c)
 */

__int64 MagpRevokeInputTransfrom()
{
  return (unsigned int)CancelMagnificationInputTransform() == 0 ? 0xC0000001 : 0;
}
