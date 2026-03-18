/*
 * XREFs of BvgaIndicateProgress @ 0x140782C3C
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x1401B68D0 (BvgaUpdateProgressBar.c)
 */

void BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_14071716C;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_140717170 )
  {
    dword_140717170 = v0;
    BvgaUpdateProgressBar(v0);
  }
}
