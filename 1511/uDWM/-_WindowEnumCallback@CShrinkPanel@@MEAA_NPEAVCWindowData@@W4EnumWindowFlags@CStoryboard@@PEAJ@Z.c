/*
 * XREFs of ?_WindowEnumCallback@CShrinkPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098A20
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x180003868 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180006F08 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000DCC0 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800939E0 (-GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z @ 0x180095DE8 (-_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x180095E1C (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CShrinkPanel::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  struct CAnimationComponent *v4; // rbx
  int v8; // esi
  int v9; // ebx
  int PVLTarget; // eax
  int v11; // eax
  struct tagRECT v12; // xmm6
  struct tagPOINT *v13; // rcx
  struct tagRECT v14; // xmm0
  int v15; // eax
  int v16; // eax
  CPanelAnimation *v17; // rcx
  int v18; // eax
  LONG v19; // ecx
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rcx
  int v23; // eax
  __int128 v24; // xmm0
  char result; // al
  struct tagRECT v26; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v27; // [rsp+60h] [rbp-20h] BYREF
  struct CAnimationComponent *v28; // [rsp+C8h] [rbp+48h] BYREF

  v4 = 0LL;
  v28 = 0LL;
  v8 = 0;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 576) & 0xFFF) != 0x29 )
      goto LABEL_29;
    v24 = *(_OWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 128) = 1;
    *(_OWORD *)(a1 + 132) = v24;
    goto LABEL_27;
  }
  v9 = *(_DWORD *)(a2 + 576);
  if ( (v9 & 0xFFF) != 0x28 )
  {
    if ( (*(_DWORD *)(a2 + 576) & 0xFFF) != 0x29
      || !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
            (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
            *(HWND *)(a2 + 40),
            0) )
    {
      goto LABEL_29;
    }
    PVLTarget = CShrinkPanel::GetPVLTarget(a1, v9);
    v11 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            PVLTarget,
            0LL,
            0LL,
            -1,
            1,
            &v28);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0x5F1u);
LABEL_7:
      v4 = v28;
      goto LABEL_27;
    }
    v4 = v28;
    CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v28 + 5), 1.0);
    v13 = (struct tagPOINT *)*((_QWORD *)v4 + 5);
    v27 = *(struct tagRECT *)((char *)v4 + 88);
    v12 = v27;
    CAnimatedTransitionVisual::SetBeginRect(v13, &v27);
    v14 = v12;
    goto LABEL_21;
  }
  if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
          (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
          *(HWND *)(a2 + 40),
          1) )
    goto LABEL_29;
  if ( *(_BYTE *)(a1 + 128) )
  {
    v15 = CShrinkPanel::GetPVLTarget(a1, v9);
    v16 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            v15,
            0LL,
            0LL,
            -1,
            1,
            &v28);
    v8 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x5D3u);
      goto LABEL_7;
    }
    v4 = v28;
    v26 = *(struct tagRECT *)((char *)v28 + 88);
    v27 = v26;
    if ( CPanelAnimation::_ShouldSlideBasedOnLeft(v17, &v26, (const struct tagRECT *)(a1 + 132)) )
    {
      v18 = v27.right - v27.left;
      v19 = *(_DWORD *)(a1 + 132);
      if ( v27.right - v27.left < 0 )
        v18 = 0;
      v26.right = v19 + v18;
    }
    else
    {
      v20 = v27.right - v27.left;
      v21 = *(_DWORD *)(a1 + 140);
      if ( v27.right - v27.left < 0 )
        v20 = 0;
      v26.right = *(_DWORD *)(a1 + 140);
      v19 = v21 - v20;
    }
    v26.left = v19;
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v4 + 5), &v27);
    v14 = v26;
LABEL_21:
    v22 = *((_QWORD *)v4 + 5);
    *(struct tagRECT *)(v22 + 856) = v14;
    CVisual::SetDirtyFlags((CVisual *)(v22 + 8), 4096);
LABEL_27:
    if ( v4 )
      CBaseObject::Release(v4);
    goto LABEL_29;
  }
  v23 = CSlide::_SlideWindow((CSlide *)a1, (struct CWindowData *)a2, 1.0, 0LL);
  v8 = v23;
  if ( v23 < 0 )
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v23, 0x5E9u);
LABEL_29:
  result = 1;
  *a4 = v8;
  return result;
}
