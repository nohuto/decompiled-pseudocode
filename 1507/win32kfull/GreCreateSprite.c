/*
 * XREFs of GreCreateSprite @ 0x1C000D128
 * Callers:
 *     CreateSprite @ 0x1C000CFD8 (CreateSprite.c)
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     CreateFade @ 0x1C010E24C (CreateFade.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0260AEC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     bSetDevPreviewRect @ 0x1C027B8BC (bSetDevPreviewRect.c)
 * Callees:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHH@Z @ 0x1C000D1CC (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHH.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void *__fastcall GreCreateSprite(
        HDEV a1,
        HWND a2,
        struct tagRECT *a3,
        struct tagMINIWINDOWINFO *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  void *SpriteInternal; // rbx
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF

  v15 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SpriteInternal = GreCreateSpriteInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  return SpriteInternal;
}
