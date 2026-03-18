/*
 * XREFs of UShortAdd @ 0x1401DFDF0
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x140407BD4 (CmRealKCBToVirtualPath.c)
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
