/*
 * XREFs of MagpRevokeInputTransfrom @ 0x1C00D3DA0
 * Callers:
 *     MagpDecomposeDesktop @ 0x1C00D3D34 (MagpDecomposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01FE00C (MagSetLensContextInformation.c)
 * Callees:
 *     _SetMagnificationInputTransform @ 0x1C00D3DDC (_SetMagnificationInputTransform.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 MagpRevokeInputTransfrom()
{
  _DWORD v1[14]; // [rsp+20h] [rbp-38h] BYREF

  memset(v1, 0, 36);
  v1[8] = 3;
  return (unsigned int)SetMagnificationInputTransform(v1) == 0 ? 0xC0000001 : 0;
}
