/*
 * XREFs of BvgaIndicateProgress @ 0x1407CE408
 * Callers:
 *     <none>
 * Callees:
 *     BvgaUpdateProgressBar @ 0x1401C428C (BvgaUpdateProgressBar.c)
 */

void BvgaIndicateProgress()
{
  unsigned int v0; // eax

  ++BvgaProgressIndicator;
  v0 = 100 * BvgaProgressIndicator / (unsigned int)dword_140760164;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_140760168 )
  {
    dword_140760168 = v0;
    BvgaUpdateProgressBar(v0);
  }
}
