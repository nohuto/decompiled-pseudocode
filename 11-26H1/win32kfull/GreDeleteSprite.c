/*
 * XREFs of GreDeleteSprite @ 0x14009CAE8
 * Callers:
 *     DeleteFadeSprite @ 0x14009B6F0 (DeleteFadeSprite.c)
 *     bSetDevPreviewRect @ 0x14009B814 (bSetDevPreviewRect.c)
 *     bSetDevDragRect @ 0x14009C3F0 (bSetDevDragRect.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x14009C698 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     UnsetLayeredWindow @ 0x1400A2F94 (UnsetLayeredWindow.c)
 *     vCleanupUMWindowlessSprite @ 0x1400A4F50 (vCleanupUMWindowlessSprite.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x14028A2CC (GreTransferDwmStateToSpriteState.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x1403442D4 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x140344860 (-SpDdDestroyFullscreenSprite@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14009CB84 (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreDeleteSprite(Gre::Base *a1, HWND a2, void *a3, int a4)
{
  HSEMAPHORE v8; // r14
  unsigned int v9; // ebx

  v8 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(a1) + 1144LL);
  GreAcquireSemaphoreInternal(v8);
  GrepAcquireLockValidate<2>();
  v9 = GreDeleteSpriteInternal((HDEV)a1, a2, a3, a4);
  if ( v8 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v8);
  return v9;
}
