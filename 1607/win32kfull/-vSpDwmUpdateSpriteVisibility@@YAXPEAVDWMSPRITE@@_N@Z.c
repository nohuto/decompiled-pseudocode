/*
 * XREFs of ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00D79D0
 * Callers:
 *     GreUpdateSprite @ 0x1C00503E0 (GreUpdateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00D6E48 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00D748C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025D0AC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025D778 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     DwmAsyncShowSprite @ 0x1C011E1A4 (DwmAsyncShowSprite.c)
 */

void __fastcall vSpDwmUpdateSpriteVisibility(struct DWMSPRITE *a1, unsigned __int8 a2)
{
  void *v2; // rax

  if ( a2 != (*((_DWORD *)a1 + 34) & 1) )
  {
    *((_DWORD *)a1 + 34) ^= ((unsigned __int8)*((_DWORD *)a1 + 34) ^ a2) & 1;
    v2 = (void *)UserReferenceDwmApiPort(a1);
    DwmAsyncShowSprite(v2);
  }
}
