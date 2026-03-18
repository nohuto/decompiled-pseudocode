/*
 * XREFs of UIntAdd @ 0x1C00B49D4
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C002AE80 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall UIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  if ( uAugend + 1 < uAugend )
  {
    *puResult = -1;
    return -2147024362;
  }
  else
  {
    *puResult = uAugend + 1;
    return 0;
  }
}
