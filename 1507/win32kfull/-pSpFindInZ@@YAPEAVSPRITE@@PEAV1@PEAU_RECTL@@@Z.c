/*
 * XREFs of ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C0154EE8
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00206C4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0020980 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02781FC (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0278854 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0278F68 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 * Callees:
 *     ?bIsCursorSprite@@YAHPEAVSPRITE@@@Z @ 0x1C026F3F0 (-bIsCursorSprite@@YAHPEAVSPRITE@@@Z.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0273A64 (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C027B164 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

struct SPRITE *__fastcall pSpFindInZ(struct SPRITE *a1, struct _RECTL *a2)
{
  LONG left; // esi
  struct SPRITE *v3; // rbx
  LONG top; // ebp
  LONG right; // r14d
  LONG i; // r15d
  int IsCursorSprite; // edi

  left = a2->left;
  v3 = a1;
  top = a2->top;
  right = a2->right;
  for ( i = a2->bottom; v3; v3 = (struct SPRITE *)*((_QWORD *)v3 + 3) )
  {
    IsCursorSprite = bIsCursorSprite(v3);
    if ( IsCursorSprite == 1 )
      SINGLEREADERLOCK::vLock((struct SPRITE *)((char *)v3 + 248));
    if ( (*(_DWORD *)v3 & 0x400) == 0
      && *((_DWORD *)v3 + 20) <= right
      && *((_DWORD *)v3 + 21) <= i
      && *((_DWORD *)v3 + 22) >= left
      && *((_DWORD *)v3 + 23) >= top )
    {
      break;
    }
    if ( IsCursorSprite == 1 )
      SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v3 + 248));
  }
  return v3;
}
