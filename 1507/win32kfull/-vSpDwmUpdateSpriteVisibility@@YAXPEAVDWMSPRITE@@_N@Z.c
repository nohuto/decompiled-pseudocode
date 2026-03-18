/*
 * XREFs of ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C0261EC0
 * Callers:
 *     GreUpdateSprite @ 0x1C001B070 (GreUpdateSprite.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0260028 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C026056C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0260AEC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C02611B8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     DwmAsyncShowSprite @ 0x1C00F62A4 (DwmAsyncShowSprite.c)
 */

void __fastcall vSpDwmUpdateSpriteVisibility(struct DWMSPRITE *a1, unsigned __int8 a2)
{
  int v2; // edi
  __int64 v3; // rbx
  void *v4; // rax

  v2 = a2;
  if ( a2 != (*((_DWORD *)a1 + 34) & 1) )
  {
    *((_DWORD *)a1 + 34) ^= ((unsigned __int8)*((_DWORD *)a1 + 34) ^ a2) & 1;
    v3 = *(_QWORD *)a1;
    v4 = (void *)UserReferenceDwmApiPort(a1);
    DwmAsyncShowSprite(v4, v3, v2);
  }
}
