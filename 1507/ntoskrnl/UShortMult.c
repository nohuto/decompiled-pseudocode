/*
 * XREFs of UShortMult @ 0x1401DFE10
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x140407BD4 (CmRealKCBToVirtualPath.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UShortMult(USHORT usMultiplicand, USHORT usMultiplier, USHORT *pusResult)
{
  unsigned int v3; // eax

  v3 = 2 * usMultiplicand;
  if ( v3 > 0xFFFF )
  {
    *pusResult = -1;
    return -2147024362;
  }
  else
  {
    *pusResult = v3;
    return 0;
  }
}
