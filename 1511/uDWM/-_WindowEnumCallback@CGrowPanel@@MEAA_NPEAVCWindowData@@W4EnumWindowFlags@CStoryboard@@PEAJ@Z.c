/*
 * XREFs of ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800980D0
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

char __fastcall CGrowPanel::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  struct tagPOINT **v4; // rbx
  int v8; // esi
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  CPanelAnimation *v12; // rcx
  int v13; // eax
  LONG v14; // ecx
  int v15; // eax
  int v16; // ecx
  struct tagPOINT *v17; // rcx
  int v18; // eax
  int PVLTarget; // eax
  int v20; // eax
  struct tagRECT v21; // xmm6
  struct tagPOINT *v22; // rcx
  struct tagPOINT *v23; // rcx
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
    if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 576) & 0xFFF) != 0x28 )
      goto LABEL_31;
    v24 = *(_OWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 128) = 1;
    *(_OWORD *)(a1 + 132) = v24;
    goto LABEL_29;
  }
  v9 = *(_DWORD *)(a2 + 576);
  if ( (v9 & 0xFFF) == 0x28 )
  {
    if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
            (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
            *(HWND *)(a2 + 40),
            1) )
      goto LABEL_31;
    PVLTarget = CShrinkPanel::GetPVLTarget(a1, v9);
    v20 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            PVLTarget,
            0LL,
            0LL,
            -1,
            1,
            &v28);
    v8 = v20;
    if ( v20 >= 0 )
    {
      v4 = (struct tagPOINT **)v28;
      if ( *(_BYTE *)(a1 + 128) )
        v21 = *(struct tagRECT *)(a1 + 132);
      else
        v21 = *(struct tagRECT *)((char *)v28 + 88);
      v22 = (struct tagPOINT *)*((_QWORD *)v28 + 5);
      v27 = v21;
      CAnimatedTransitionVisual::SetBeginRect(v22, &v27);
      v23 = v4[5];
      *(struct tagRECT *)&v23[107].x = v21;
      CVisual::SetDirtyFlags((CVisual *)&v23[1], 4096);
      goto LABEL_29;
    }
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v20, 0x578u);
LABEL_21:
    v4 = (struct tagPOINT **)v28;
LABEL_29:
    if ( v4 )
      CBaseObject::Release((CBaseObject *)v4);
    goto LABEL_31;
  }
  if ( (*(_DWORD *)(a2 + 576) & 0xFFF) != 0x29
    || !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
          (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
          *(HWND *)(a2 + 40),
          0) )
  {
    goto LABEL_31;
  }
  if ( *(_BYTE *)(a1 + 128) )
  {
    v10 = CShrinkPanel::GetPVLTarget(a1, v9);
    v11 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            v10,
            0LL,
            0LL,
            -1,
            1,
            &v28);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v4 = (struct tagPOINT **)v28;
      v27 = *(struct tagRECT *)((char *)v28 + 88);
      v26 = v27;
      if ( CPanelAnimation::_ShouldSlideBasedOnLeft(v12, &v26, (const struct tagRECT *)(a1 + 132)) )
      {
        v13 = v26.right - v26.left;
        v14 = *(_DWORD *)(a1 + 132);
        if ( v26.right - v26.left < 0 )
          v13 = 0;
        v27.right = v14 + v13;
      }
      else
      {
        v15 = v26.right - v26.left;
        v16 = *(_DWORD *)(a1 + 140);
        if ( v26.right - v26.left < 0 )
          v15 = 0;
        v27.right = *(_DWORD *)(a1 + 140);
        v14 = v16 - v15;
      }
      v27.left = v14;
      CAnimatedTransitionVisual::SetBeginRect(v4[5], &v27);
      v17 = v4[5];
      *(struct tagRECT *)&v17[107].x = v26;
      CVisual::SetDirtyFlags((CVisual *)&v17[1], 4096);
      CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)v4[5], 0.0);
      goto LABEL_29;
    }
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0x559u);
    goto LABEL_21;
  }
  v18 = CSlide::_SlideWindow((CSlide *)a1, (struct CWindowData *)a2, 0.0, 0LL);
  v8 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v18, 0x570u);
LABEL_31:
  result = 1;
  *a4 = v8;
  return result;
}
