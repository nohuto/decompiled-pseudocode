/*
 * XREFs of ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C003DA74
 * Callers:
 *     GreGetClipBox @ 0x1C0026E80 (GreGetClipBox.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CC70 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreSetDCOrg @ 0x1C00547B0 (GreSetDCOrg.c)
 *     GreGetDCPoint @ 0x1C0054BF0 (GreGetDCPoint.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B3F60 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
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
