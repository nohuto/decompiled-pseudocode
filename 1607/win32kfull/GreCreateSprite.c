/*
 * XREFs of GreCreateSprite @ 0x1C0065AC4
 * Callers:
 *     CreateSprite @ 0x1C0065B68 (CreateSprite.c)
 *     bSetDevDragRect @ 0x1C00940E0 (bSetDevDragRect.c)
 *     CreateFade @ 0x1C013FE3C (CreateFade.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025D0AC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     bSetDevPreviewRect @ 0x1C0278E04 (bSetDevPreviewRect.c)
 * Callees:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C0065674 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
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
