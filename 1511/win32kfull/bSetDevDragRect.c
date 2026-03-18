/*
 * XREFs of bSetDevDragRect @ 0x1C00D56E0
 * Callers:
 *     xxxReleaseCapture @ 0x1C0091ED0 (xxxReleaseCapture.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     zzzDwmStartRedirection @ 0x1C00D24EC (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C00D3E60 (xxxDwmStopRedirection.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C020AD20 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020B08C (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C020BCE0 (xxxCancelTrackingForThread.c)
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C003BB38 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C003BB68 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     GreCreateSprite @ 0x1C007DE98 (GreCreateSprite.c)
 *     GreDeleteSprite @ 0x1C007FE74 (GreDeleteSprite.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C00D580C (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C010A07C (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C025F21C (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevDragRect @ 0x1C027A420 (bMoveDevDragRect.c)
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
  char v22[8]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v23; // [rsp+68h] [rbp-51h] BYREF
  char v24[8]; // [rsp+70h] [rbp-49h] BYREF
  HDEV v25; // [rsp+78h] [rbp-41h] BYREF
  _OWORD *v26; // [rsp+80h] [rbp-39h]
  __int64 v27; // [rsp+88h] [rbp-31h]
  __int64 v28; // [rsp+90h] [rbp-29h]
  _DWORD v29[14]; // [rsp+98h] [rbp-21h] BYREF

  v4 = a1 + 24;
  v25 = a1;
  v26 = a3;
  v27 = 0LL;
  v7 = 1;
  v28 = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v24, ghsemDynamicModeChange);
  v23 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v22, (struct PDEVOBJ *)&v25);
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
      v19 = v26;
      *((_DWORD *)a1 + 303) = 1;
      *(_OWORD *)(a1 + 319) = *v19;
      if ( (a4 & 4) == 0 )
        bMoveDevDragRect(a1, a2, a4 & 1);
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
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v22);
  SEMOBJ::vUnlock((SEMOBJ *)&v23);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v24);
  return v7;
}
