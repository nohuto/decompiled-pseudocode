/*
 * XREFs of ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180001980
 * Callers:
 *     <none>
 * Callees:
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x180001764 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x180003868 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180006DB0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180006E50 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18000AE24 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18000DCC0 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800133C8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800136E4 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18002C444 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x180095E1C (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18009601C (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 */

char __fastcall CSlideOut::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  struct CAnimationComponent *v5; // r14
  struct CAnimationComponent *v6; // rdi
  int v9; // r13d
  int v10; // r12d
  CDesktopManager *v11; // r13
  __int64 v12; // rdx
  int v13; // eax
  struct CAnimationComponent *v14; // rbx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  struct tagRECT v18; // xmm0
  __int128 v19; // xmm6
  CAnimatedTransitionVisual *v20; // rcx
  __int64 v21; // rcx
  char result; // al
  int v23; // eax
  int v24; // eax
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v26; // r13
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  struct CAnimationComponent *v35; // [rsp+30h] [rbp-40h] BYREF
  struct CAnimationComponent *v36; // [rsp+38h] [rbp-38h] BYREF
  struct CAnimationComponent *v37; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v38; // [rsp+48h] [rbp-28h] BYREF

  v4 = 0;
  v35 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_27;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v38);
  v9 = *(_DWORD *)(a2 + 576);
  v10 = v9 & 0xFFF;
  if ( (v9 & 0xFFF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 576) & 0xFFF) == 8 )
    {
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
              *(HWND *)(a2 + 40),
              1) )
        goto LABEL_27;
      *(_DWORD *)(a2 + 576) |= 0x200000u;
      v33 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v38, 0, &v35);
      v4 = v33;
      if ( v33 >= 0 )
        *(_BYTE *)(*((_QWORD *)v35 + 5) + 960LL) = 1;
      else
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v33, 0x3BFu);
      goto LABEL_21;
    }
    if ( (*(_DWORD *)(a2 + 576) & 0xFFF) == 0xB )
    {
      *(_DWORD *)(a2 + 576) |= 0x200000u;
      v32 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
      v4 = v32;
      if ( v32 >= 0 )
        *(_DWORD *)(a2 + 576) = v9;
      else
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v32, 0x3CAu);
      goto LABEL_27;
    }
    if ( (*(_DWORD *)(a2 + 576) & 0xFFF) != 0x18 && (*(_DWORD *)(a2 + 576) & 0xFFF) != 0x2A )
    {
      if ( (*(_DWORD *)(a2 + 576) & 0xFFF) == 0x45 )
      {
        v24 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v38, 0, &v35);
        v4 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v24, 0x3D8u);
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(a2 + 576) & 0xFFF) == 0x46 )
      {
        if ( (v9 & 0x1800000) == 0 )
          goto LABEL_27;
        v23 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v35);
        v4 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v23, 0x3D3u);
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(a2 + 576) & 0xFFF) != 0x57 )
      {
LABEL_25:
        if ( v6 )
          CBaseObject::Release(v6);
        goto LABEL_27;
      }
    }
    v11 = CDesktopManager::s_pDesktopManagerInstance;
    if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
           (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
           *(HWND *)(a2 + 40),
           1) )
    {
LABEL_8:
      v12 = *((_QWORD *)a1 + 16);
      if ( !v12 )
        goto LABEL_9;
      if ( *(_QWORD *)(v12 + 16) == *(_QWORD *)(a2 + 40) )
        goto LABEL_27;
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(*((CWindowList **)v11 + 167), *(HWND *)(v12 + 16));
      v26 = WindowDataByHwnd;
      if ( !WindowDataByHwnd )
      {
LABEL_9:
        v13 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v38, 0, 0LL, &v35);
        v4 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v13, 0x38Fu);
          goto LABEL_21;
        }
        v14 = v35;
        CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v35 + 5), 1.0);
        *(_BYTE *)(*((_QWORD *)v14 + 5) + 953LL) = 1;
        if ( (*(_DWORD *)(a2 + 576) & 0xFFF) == 0x18 )
          *(_BYTE *)(*((_QWORD *)v14 + 5) + 960LL) = 1;
        goto LABEL_12;
      }
      *((_DWORD *)WindowDataByHwnd + 144) = *(_DWORD *)(a2 + 576) & 0xEBFFF000 | 0x1400002A;
      if ( *(float *)(*(_QWORD *)(*((_QWORD *)a1 + 16) + 40LL) + 728LL) == 1.0 )
      {
        v27 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, *(unsigned int *)(a2 + 576));
        v28 = CStoryboard::_CreateAndAddNullComponentWithWindow(a1, (struct CWindowData *)a2, v27, &v35);
        v4 = v28;
        if ( v28 >= 0 )
        {
          v29 = CSlide::_SlideWindowHorizontally(a1, v26, &v38, 0, 0LL, &v36);
          v4 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v29, 0x37Cu);
LABEL_53:
            v5 = v36;
            goto LABEL_21;
          }
          v5 = v36;
          goto LABEL_12;
        }
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v28, 0x37Bu);
      }
      else
      {
        v30 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v38, 0, 0LL, &v35);
        v4 = v30;
        if ( v30 >= 0 )
        {
          v31 = CSlide::_SlideWindowHorizontally(a1, v26, &v38, 0, 0LL, &v36);
          v4 = v31;
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v31, 0x385u);
            goto LABEL_53;
          }
          v5 = v36;
          *((_DWORD *)v36 + 14) = *((_DWORD *)v35 + 14) + 1;
LABEL_12:
          if ( v35 && *((_DWORD *)v35 + 17) != 2 )
            *((_DWORD *)v35 + 17) = 3;
          if ( v5 && *((_DWORD *)v5 + 17) != 2 )
            *((_DWORD *)v5 + 17) = 3;
          v15 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, *(_DWORD *)(a2 + 576) & 0xFFF);
          v16 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v15, &v37);
          v4 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v16, 0x3A5u);
            v6 = v37;
          }
          else
          {
            v6 = v37;
            if ( v37 )
            {
              v17 = *((_QWORD *)v35 + 5);
              v18 = *(struct tagRECT *)(v17 + 840);
              v19 = *(_OWORD *)(v17 + 856);
              v20 = (CAnimatedTransitionVisual *)*((_QWORD *)v37 + 5);
              v38 = v18;
              CAnimatedTransitionVisual::SetBeginRect(v20, &v38);
              v21 = *((_QWORD *)v6 + 5);
              *(_OWORD *)(v21 + 856) = v19;
              CVisual::SetDirtyFlags((CVisual *)(v21 + 8), 0x1000u);
              *(_BYTE *)(*((_QWORD *)v6 + 5) + 971LL) = 1;
              *((_BYTE *)v6 + 74) = 1;
              if ( *((_DWORD *)v6 + 17) != 2 )
                *((_DWORD *)v6 + 17) = 1;
              *((_DWORD *)v35 + 14) = *((_DWORD *)v6 + 14) + 1;
            }
          }
          goto LABEL_21;
        }
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v30, 0x384u);
      }
LABEL_21:
      if ( v35 )
        CBaseObject::Release(v35);
      if ( v5 )
        CBaseObject::Release(v5);
      goto LABEL_25;
    }
    if ( (v10 == 42 || v10 == 87) && !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
    {
      v11 = CDesktopManager::s_pDesktopManagerInstance;
      goto LABEL_8;
    }
  }
  else if ( v9 < 0 )
  {
    CTransitionVisualController::RemoveTLWClone(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
      *(const struct CTopLevelWindow **)(a2 + 384),
      1,
      1);
    v34 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v4 = v34;
    if ( v34 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v34, 0x3E1u);
  }
LABEL_27:
  result = 1;
  *a4 = v4;
  return result;
}
