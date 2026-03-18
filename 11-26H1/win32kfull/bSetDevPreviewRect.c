/*
 * XREFs of bSetDevPreviewRect @ 0x14009B814
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x14009C698 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     GreDeleteSprite @ 0x14009CAE8 (GreDeleteSprite.c)
 *     GreCreateSprite @ 0x1400A33C0 (GreCreateSprite.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1401EEA24 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     bMoveDevPreviewRect @ 0x140219C58 (bMoveDevPreviewRect.c)
 *     DwmAsyncSendWindowArrangingData @ 0x140219EA8 (DwmAsyncSendWindowArrangingData.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bSetDevPreviewRect(HDEV a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  char v6; // bp
  unsigned int v8; // esi
  struct Gre::Base::SESSION_GLOBALS *v9; // rbx
  HSEMAPHORE v10; // r12
  HDEV v11; // rbx
  bool v12; // r15
  int v13; // ebp
  __int64 Sprite; // rax
  bool v15; // zf
  void *v16; // rax
  void *v17; // r8
  _BYTE v19[8]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-D0h] BYREF
  _BYTE v21[200]; // [rsp+70h] [rbp-C8h] BYREF
  HDEV v22; // [rsp+140h] [rbp+8h] BYREF
  __int64 v23; // [rsp+148h] [rbp+10h]
  int v24; // [rsp+150h] [rbp+18h]

  v24 = a3;
  v23 = a2;
  v22 = a1;
  v6 = a3;
  v8 = 1;
  v9 = Gre::Base::Globals((Gre::Base *)a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v20, v9);
  v10 = (HSEMAPHORE)(*(_QWORD *)v9 + 1144LL);
  GreAcquireSemaphoreInternal(v10);
  GrepAcquireLockValidate<2>();
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v19, (struct PDEVOBJ *)&v22);
  v11 = a1 + 299;
  v12 = *((_DWORD *)a1 + 298) && *(_DWORD *)v11;
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)(a1 + 20));
  v13 = v6 & 1;
  if ( v23 )
  {
    *(_DWORD *)v11 = v13;
    memset_0(v21, 0, 0x88uLL);
    vSpDwmGetMiniWinInfoForNonWindowSprite(v21, 0LL);
    Sprite = GreCreateSprite(a1, 0LL, 0LL, (struct tagMINIWINDOWINFO *)v21, 0x9900u, v13, 1, 0, 0, 0, 0, 0LL);
    *((_QWORD *)a1 + 156) = Sprite;
    if ( Sprite )
    {
      v15 = (v24 & 4) == 0;
      *((_DWORD *)a1 + 298) = 1;
      *(_DWORD *)v11 = v13;
      if ( v15 )
        bMoveDevPreviewRect(a1, v23, 1LL, a4, a5);
    }
    else
    {
      v8 = 0;
    }
  }
  else if ( v12 )
  {
    v16 = (void *)UserReferenceDwmApiPort();
    DwmAsyncSendWindowArrangingData(v16, a5);
  }
  if ( !*((_DWORD *)a1 + 298) )
  {
    v17 = (void *)*((_QWORD *)a1 + 156);
    if ( v17 )
    {
      GreDeleteSprite(a1, 0LL, v17, *((_DWORD *)a1 + 299));
      *((_QWORD *)a1 + 156) = 0LL;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v19);
  if ( v10 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v10);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v20);
  return v8;
}
