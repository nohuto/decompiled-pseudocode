/*
 * XREFs of bSetDevDragRect @ 0x14009C3F0
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxReleaseCapture @ 0x14014AA5C (xxxReleaseCapture.c)
 *     ?ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ @ 0x14019DB1C (-ClearPreviewRect@MOVESIZEDATA@@QEAAXXZ.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x14026A3E8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14027B320 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     xxxCancelTrackingForThread @ 0x1402C88E0 (xxxCancelTrackingForThread.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402CF854 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402CFD60 (xxxDwmStopRedirection.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$01@@YAXXZ @ 0x14006BCF0 (--$GrepAcquireLockValidate@$01@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x14009C698 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     GreDeleteSprite @ 0x14009CAE8 (GreDeleteSprite.c)
 *     GreCreateSprite @ 0x1400A33C0 (GreCreateSprite.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     bMoveDevDragRect @ 0x14021935C (bMoveDevDragRect.c)
 *     DwmAsyncSendWindowArrangingData @ 0x140219EA8 (DwmAsyncSendWindowArrangingData.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall bSetDevDragRect(Gre::Base *a1, __int64 a2, __int64 a3, char a4)
{
  HDEV v4; // rdi
  unsigned int v7; // r15d
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  HSEMAPHORE v9; // r12
  char v10; // r14
  __int64 v11; // rsi
  int v12; // ebx
  __int64 *v14; // r14
  __int64 v15; // rdi
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 Sprite; // rax
  void **v20; // rbx
  void *v21; // rax
  Gre::Base *v22; // [rsp+60h] [rbp-F8h] BYREF
  HSEMAPHORE v23; // [rsp+68h] [rbp-F0h]
  _BYTE v24[8]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+78h] [rbp-E0h] BYREF
  __int128 v26; // [rsp+80h] [rbp-D8h]
  _BYTE v27[48]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-98h]

  v22 = a1;
  v4 = (HDEV)((char *)a1 + 80);
  v26 = 0LL;
  v7 = 1;
  v8 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v25, v8);
  v9 = (HSEMAPHORE)(*(_QWORD *)v8 + 1144LL);
  v23 = v9;
  GreAcquireSemaphoreInternal(v9);
  GrepAcquireLockValidate<2>();
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v24, (struct PDEVOBJ *)&v22);
  if ( !*((_DWORD *)v4 + 278) || (v10 = 1, !*((_DWORD *)v4 + 279)) )
    v10 = 0;
  bCleanupSpriteStateRects((HDEV)a1, (struct _SPRITESTATE *)v4);
  v11 = 4LL;
  v12 = a4 & 1;
  if ( a2 )
  {
    *((_DWORD *)v4 + 277) = v12;
    v14 = (__int64 *)(v4 + 284);
    v15 = 4LL;
    v16 = 1;
    do
    {
      memset_0(v27, 0, 0x88uLL);
      v28 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 18704);
      Sprite = GreCreateSprite((HDEV)a1, 0LL, 0LL, (struct tagMINIWINDOWINFO *)v27, 0x9900u, v12, 1, 0, 0, 0, 0, 0LL);
      *v14++ = Sprite;
      v7 = Sprite != 0 ? v16 : 0;
      v16 = v7;
      --v15;
    }
    while ( v15 );
    v9 = v23;
    v4 = (HDEV)((char *)a1 + 80);
    if ( v7 )
    {
      *((_DWORD *)a1 + 296) = 1;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect(a1, a2, a3, a4 & 1);
    }
  }
  else if ( v10 )
  {
    v21 = (void *)UserReferenceDwmApiPort();
    DwmAsyncSendWindowArrangingData(v21, 0LL);
  }
  if ( !*((_DWORD *)v4 + 276) )
  {
    v20 = (void **)(v4 + 284);
    do
    {
      if ( *v20 )
      {
        GreDeleteSprite((HDEV)a1, 0LL, *v20, *((_DWORD *)v4 + 277));
        *v20 = 0LL;
      }
      ++v20;
      --v11;
    }
    while ( v11 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v24);
  if ( v9 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v9);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v25);
  return v7;
}
