/*
 * XREFs of ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800967D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x180009CC0 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000F528 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180038BC4 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180038C34 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180090CB0 (-GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z @ 0x180093A50 (-_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x180093A84 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CGrowPanel::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  struct tagPOINT **v4; // rbx
  int v8; // r14d
  int v9; // eax
  int v10; // eax
  CPanelAnimation *v11; // rcx
  int v12; // eax
  LONG v13; // ecx
  int v14; // eax
  int v15; // ecx
  struct tagPOINT *v16; // rcx
  int v17; // eax
  int PVLTarget; // eax
  int v19; // eax
  struct tagRECT v20; // xmm6
  struct tagPOINT *v21; // rcx
  struct tagPOINT *v22; // rcx
  __int128 v23; // xmm0
  char result; // al
  struct tagRECT v25; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v26; // [rsp+60h] [rbp-20h] BYREF
  struct CAnimationComponent *v27; // [rsp+C8h] [rbp+48h] BYREF

  v4 = 0LL;
  v27 = 0LL;
  v8 = 0;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 568) & 0xFFF) != 0x28 )
      goto LABEL_31;
    v23 = *(_OWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 128) = 1;
    *(_OWORD *)(a1 + 132) = v23;
    goto LABEL_29;
  }
  if ( (*(_DWORD *)(a2 + 568) & 0xFFF) == 0x28 )
  {
    if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
            (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
            *(HWND *)(a2 + 40),
            1) )
      goto LABEL_31;
    PVLTarget = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 568));
    v19 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            PVLTarget,
            0LL,
            0LL,
            -1,
            1,
            &v27);
    v8 = v19;
    if ( v19 >= 0 )
    {
      v4 = (struct tagPOINT **)v27;
      if ( *(_BYTE *)(a1 + 128) )
        v20 = *(struct tagRECT *)(a1 + 132);
      else
        v20 = *(struct tagRECT *)((char *)v27 + 88);
      v21 = (struct tagPOINT *)*((_QWORD *)v27 + 5);
      v26 = v20;
      CAnimatedTransitionVisual::SetBeginRect(v21, &v26);
      v22 = v4[5];
      *(struct tagRECT *)&v22[107].x = v20;
      CVisual::SetDirtyFlags((CVisual *)&v22[1], 4096);
      goto LABEL_29;
    }
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v19, 0x558u);
LABEL_21:
    v4 = (struct tagPOINT **)v27;
LABEL_29:
    if ( v4 )
      CBaseObject::Release((CBaseObject *)v4);
    goto LABEL_31;
  }
  if ( (*(_DWORD *)(a2 + 568) & 0xFFF) != 0x29
    || !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
          (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
          *(HWND *)(a2 + 40),
          0) )
  {
    goto LABEL_31;
  }
  if ( *(_BYTE *)(a1 + 128) )
  {
    v9 = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 568));
    v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            v9,
            0LL,
            0LL,
            -1,
            1,
            &v27);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v4 = (struct tagPOINT **)v27;
      v26 = *(struct tagRECT *)((char *)v27 + 88);
      v25 = v26;
      if ( CPanelAnimation::_ShouldSlideBasedOnLeft(v11, &v25, (const struct tagRECT *)(a1 + 132)) )
      {
        v12 = v25.right - v25.left;
        v13 = *(_DWORD *)(a1 + 132);
        if ( v25.right - v25.left < 0 )
          v12 = 0;
        v26.right = v13 + v12;
      }
      else
      {
        v14 = v25.right - v25.left;
        v15 = *(_DWORD *)(a1 + 140);
        if ( v25.right - v25.left < 0 )
          v14 = 0;
        v26.right = *(_DWORD *)(a1 + 140);
        v13 = v15 - v14;
      }
      v26.left = v13;
      CAnimatedTransitionVisual::SetBeginRect(v4[5], &v26);
      v16 = v4[5];
      *(struct tagRECT *)&v16[107].x = v25;
      CVisual::SetDirtyFlags((CVisual *)&v16[1], 4096);
      CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)v4[5], 0.0);
      goto LABEL_29;
    }
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x539u);
    goto LABEL_21;
  }
  v17 = CSlide::_SlideWindow((CSlide *)a1, (struct CWindowData *)a2, 0.0, 0LL);
  v8 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x550u);
LABEL_31:
  result = 1;
  *a4 = v8;
  return result;
}
