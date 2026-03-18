/*
 * XREFs of ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C0270484
 * Callers:
 *     ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x1C02694FC (-GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C02697A8 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     ?GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z @ 0x1C0269BC0 (-GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C0269CEC (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z @ 0x1C026A540 (-GdiPtInSprite@@YAHPEAUHDEV__@@PEAUHWND__@@HH@Z.c)
 *     ?GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@@Z @ 0x1C026A840 (-GdiUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_B.c)
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x1C026AD34 (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 *     ?bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C026FBB4 (-bSpUpdateSpriteDevLockEnd@@YAHPEAUHDEV__@@AEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     GreDisableMirrorRendering @ 0x1C0278780 (GreDisableMirrorRendering.c)
 *     GreEnableMirrorRendering @ 0x1C0278878 (GreEnableMirrorRendering.c)
 * Callees:
 *     <none>
 */

struct _METASPRITE *__fastcall pSpGetMetaSprite(const struct _SPRITESTATE *a1, HWND a2, _QWORD *i)
{
  if ( !i && a2 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a1 + 10); i && ((HWND)i[1] != a2 || (*(_DWORD *)i & 0x400) != 0); i = (_QWORD *)i[2] )
      ;
  }
  return (struct _METASPRITE *)i;
}
