/*
 * XREFs of ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C002D734
 * Callers:
 *     GreGetClipBox @ 0x1C0014B60 (GreGetClipBox.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002C950 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreGetDCPoint @ 0x1C00422D0 (GreGetDCPoint.c)
 *     GreSetDCOrg @ 0x1C0044280 (GreSetDCOrg.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B6550 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

struct EPOINTL *__fastcall DC::eptlOrigin(DC *this)
{
  struct EPOINTL *result; // rax

  result = (DC *)((char *)this + 1416);
  if ( (*((_DWORD *)this + 10) & 1) == 0 )
    return (DC *)((char *)this + 1408);
  return result;
}
