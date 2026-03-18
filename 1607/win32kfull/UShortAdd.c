/*
 * XREFs of UShortAdd @ 0x1C001D458
 * Callers:
 *     bValidRangeGSUB @ 0x1C0158050 (bValidRangeGSUB.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UShortAdd(USHORT usAugend, USHORT usAddend, USHORT *pusResult)
{
  if ( (unsigned __int16)(usAddend + usAugend) < usAugend )
  {
    *pusResult = -1;
    return -2147024362;
  }
  else
  {
    *pusResult = usAddend + usAugend;
    return 0;
  }
}
