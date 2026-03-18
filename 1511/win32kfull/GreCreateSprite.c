/*
 * XREFs of GreCreateSprite @ 0x1C007DE98
 * Callers:
 *     CreateSprite @ 0x1C007DF3C (CreateSprite.c)
 *     bSetDevDragRect @ 0x1C00D56E0 (bSetDevDragRect.c)
 *     CreateFade @ 0x1C0139CBC (CreateFade.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025F7D4 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     bSetDevPreviewRect @ 0x1C027A8AC (bSetDevPreviewRect.c)
 * Callees:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C007DA70 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

HSPRITE __fastcall GreCreateSprite(
        HDEV a1,
        struct PDEVOBJ *a2,
        struct tagRECT *a3,
        struct tagMINIWINDOWINFO *a4,
        int a5,
        int a6,
        int a7,
        char a8,
        int a9)
{
  HSPRITE SpriteInternal; // rbx
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF

  v15 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SpriteInternal = GreCreateSpriteInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  return SpriteInternal;
}
