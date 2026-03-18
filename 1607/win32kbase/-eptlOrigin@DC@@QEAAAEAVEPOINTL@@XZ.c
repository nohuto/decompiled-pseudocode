/*
 * XREFs of ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C002C700
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002BB60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreGetBounds @ 0x1C0039760 (GreGetBounds.c)
 *     GreGetClipBox @ 0x1C0045240 (GreGetClipBox.c)
 *     GreGetDCPoint @ 0x1C0075BA0 (GreGetDCPoint.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C1AE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
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
