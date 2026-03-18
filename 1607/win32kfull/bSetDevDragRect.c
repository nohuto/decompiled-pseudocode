/*
 * XREFs of bSetDevDragRect @ 0x1C00940E0
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0093AE4 (zzzDwmStartRedirection.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 *     xxxDwmStopRedirection @ 0x1C00EFE10 (xxxDwmStopRedirection.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C0201E1C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0202188 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0202E30 (xxxCancelTrackingForThread.c)
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C005DCD4 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     GreCreateSprite @ 0x1C0065AC4 (GreCreateSprite.c)
 *     GreDeleteSprite @ 0x1C00660AC (GreDeleteSprite.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C009420C (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C012845C (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C025C99C (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevDragRect @ 0x1C0278970 (bMoveDevDragRect.c)
 */

__int64 __fastcall bSetDevDragRect(HDEV a1, __int64 a2, _OWORD *a3, char a4)
{
  HDEV v4; // rbx
  unsigned int v7; // r12d
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // edi
  HSPRITE *v12; // rdi
  HSPRITE *v14; // r14
  __int64 v15; // rbx
  struct PDEVOBJ *v16; // rdx
  HSPRITE Sprite; // rax
  unsigned int v18; // eax
  _OWORD *v19; // rax
  void *v20; // rax
  HDEV v22; // [rsp+60h] [rbp-59h] BYREF
  _OWORD *v23; // [rsp+68h] [rbp-51h]
  char v24[8]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v25; // [rsp+78h] [rbp-41h] BYREF
  char v26[8]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v27; // [rsp+88h] [rbp-31h]
  __int64 v28; // [rsp+90h] [rbp-29h]
  _BYTE v29[56]; // [rsp+98h] [rbp-21h] BYREF

  v4 = a1 + 24;
  v22 = a1;
  v23 = a3;
  v27 = 0LL;
  v7 = 1;
  v28 = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v26, ghsemDynamicModeChange);
  v25 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v24, (struct PDEVOBJ *)&v22);
  if ( !*((_DWORD *)v4 + 281) || (v8 = 1, !*((_DWORD *)v4 + 282)) )
    v8 = 0;
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)v4);
  v10 = 4LL;
  v11 = a4 & 1;
  if ( a2 )
  {
    *((_DWORD *)v4 + 280) = v11;
    v14 = (HSPRITE *)(v4 + 284);
    v15 = 4LL;
    do
    {
      memset(v29, 0, sizeof(v29));
      vSpDwmGetMiniWinInfoForNonWindowSprite(v29, 0LL);
      Sprite = GreCreateSprite(a1, v16, 0LL, (struct tagMINIWINDOWINFO *)v29, v11, 1, 0, 0, 0);
      *v14++ = Sprite;
      v18 = Sprite != 0LL ? v7 : 0;
      v7 = v18;
      --v15;
    }
    while ( v15 );
    v4 = a1 + 24;
    if ( v18 )
    {
      v19 = v23;
      *((_DWORD *)a1 + 303) = 1;
      *(_OWORD *)(a1 + 319) = *v19;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect((int)a1);
    }
  }
  else if ( v8 )
  {
    v20 = (void *)UserReferenceDwmApiPort(v9);
    DwmAsyncSendWindowArrangingData(v20, 0LL);
  }
  if ( !*((_DWORD *)v4 + 279) )
  {
    v12 = (HSPRITE *)(v4 + 284);
    do
    {
      if ( *v12 )
      {
        GreDeleteSprite(a1, 0LL, *v12, *((_DWORD *)v4 + 280));
        *v12 = 0LL;
      }
      ++v12;
      --v10;
    }
    while ( v10 );
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v24);
  SEMOBJ::vUnlock((SEMOBJ *)&v25);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v26);
  return v7;
}
