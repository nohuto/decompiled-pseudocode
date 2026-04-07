/*
 * XREFs of ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18003C2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180009228 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x180009CC0 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18000F128 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x18000F470 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000FEB8 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029434 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180038BC4 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180038C34 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x18003C0B4 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180092CA0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x180093A84 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180093C94 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 */

char __fastcall CSlideOut::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  struct CAnimationComponent *v5; // r14
  struct CAnimationComponent *v6; // rdi
  int *v7; // r13
  int v10; // r12d
  __int64 v11; // rdx
  int v12; // eax
  CBaseObject *v13; // rbx
  unsigned int v14; // eax
  int v15; // eax
  char result; // al
  __int64 v17; // rcx
  struct tagRECT v18; // xmm0
  __int128 v19; // xmm6
  struct tagPOINT *v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v25; // r13
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  CBaseObject *v34; // [rsp+30h] [rbp-40h] BYREF
  struct CAnimationComponent *v35; // [rsp+38h] [rbp-38h] BYREF
  struct CAnimationComponent *v36; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v37; // [rsp+48h] [rbp-28h] BYREF

  v4 = 0;
  v34 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v7 = a4;
  if ( (a3 & 1) == 0 )
    goto LABEL_25;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v37);
  v10 = *(_DWORD *)(a2 + 568);
  if ( (v10 & 0xFFF) != 0 )
  {
    switch ( *(_DWORD *)(a2 + 568) & 0xFFF )
    {
      case 8:
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
                *(HWND *)(a2 + 40),
                1) )
          goto LABEL_25;
        *(_DWORD *)(a2 + 568) |= 0x200000u;
        v32 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v37, 0, &v34);
        v4 = v32;
        if ( v32 >= 0 )
          *(_BYTE *)(*((_QWORD *)v34 + 5) + 960LL) = 1;
        else
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v32, 0x3B7u);
        break;
      case 11:
        *(_DWORD *)(a2 + 568) |= 0x200000u;
        v31 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
        v4 = v31;
        if ( v31 >= 0 )
          *(_DWORD *)(a2 + 568) = v10;
        else
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v31, 0x3C2u);
        goto LABEL_25;
      case 24:
      case 42:
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
                *(HWND *)(a2 + 40),
                1)
          && ((*(_DWORD *)(a2 + 568) & 0xFFF) != 0x2A
           || (unsigned __int8)CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40))) )
        {
          goto LABEL_25;
        }
        v11 = *((_QWORD *)a1 + 16);
        if ( !v11 )
          goto LABEL_9;
        if ( *(_QWORD *)(v11 + 16) == *(_QWORD *)(a2 + 40) )
          goto LABEL_25;
        WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                             *(HWND *)(v11 + 16));
        v25 = WindowDataByHwnd;
        if ( !WindowDataByHwnd )
        {
LABEL_9:
          v12 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v37, 0, 0LL, &v34);
          v4 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x387u);
            break;
          }
          v13 = v34;
          CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v34 + 5), 1.0);
          *(_BYTE *)(*((_QWORD *)v13 + 5) + 953LL) = 1;
          if ( (*(_DWORD *)(a2 + 568) & 0xFFF) == 0x18 )
            *(_BYTE *)(*((_QWORD *)v13 + 5) + 960LL) = 1;
          goto LABEL_12;
        }
        *((_DWORD *)WindowDataByHwnd + 142) = *(_DWORD *)(a2 + 568) & 0xEBFFF000 | 0x1400002A;
        if ( *(float *)(*(_QWORD *)(*((_QWORD *)a1 + 16) + 40LL) + 728LL) == 1.0 )
        {
          v26 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, *(unsigned int *)(a2 + 568));
          v27 = CStoryboard::_CreateAndAddNullComponentWithWindow(a1, (struct CWindowData *)a2, v26, &v34);
          v4 = v27;
          if ( v27 >= 0 )
          {
            v28 = CSlide::_SlideWindowHorizontally(a1, v25, &v37, 0, 0LL, &v35);
            v4 = v28;
            if ( v28 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v28, 0x374u);
LABEL_51:
              v5 = v35;
              break;
            }
            v5 = v35;
            goto LABEL_12;
          }
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v27, 0x373u);
        }
        else
        {
          v29 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v37, 0, 0LL, &v34);
          v4 = v29;
          if ( v29 >= 0 )
          {
            v30 = CSlide::_SlideWindowHorizontally(a1, v25, &v37, 0, 0LL, &v35);
            v4 = v30;
            if ( v30 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v30, 0x37Du);
              goto LABEL_51;
            }
            v5 = v35;
            *((_DWORD *)v35 + 14) = *((_DWORD *)v34 + 14) + 1;
LABEL_12:
            if ( v34 && *((_DWORD *)v34 + 17) != 2 )
              *((_DWORD *)v34 + 17) = 3;
            if ( v5 && *((_DWORD *)v5 + 17) != 2 )
              *((_DWORD *)v5 + 17) = 3;
            v14 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 88LL))(
                    a1,
                    *(_DWORD *)(a2 + 568) & 0xFFF);
            v15 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v14, &v36);
            v4 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x39Du);
              v6 = v36;
            }
            else
            {
              v6 = v36;
              if ( v36 )
              {
                v17 = *((_QWORD *)v34 + 5);
                v18 = *(struct tagRECT *)(v17 + 840);
                v19 = *(_OWORD *)(v17 + 856);
                v20 = (struct tagPOINT *)*((_QWORD *)v36 + 5);
                v37 = v18;
                CAnimatedTransitionVisual::SetBeginRect(v20, &v37);
                v21 = *((_QWORD *)v6 + 5);
                *(_OWORD *)(v21 + 856) = v19;
                CVisual::SetDirtyFlags((CVisual *)(v21 + 8), 4096);
                *(_BYTE *)(*((_QWORD *)v6 + 5) + 971LL) = 1;
                *((_BYTE *)v6 + 74) = 1;
                if ( *((_DWORD *)v6 + 17) != 2 )
                  *((_DWORD *)v6 + 17) = 1;
                *((_DWORD *)v34 + 14) = *((_DWORD *)v6 + 14) + 1;
              }
            }
            break;
          }
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v29, 0x37Cu);
        }
        break;
      case 69:
        v23 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v37, 0, &v34);
        v4 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v23, 0x3D0u);
        break;
      case 70:
        if ( (v10 & 0x1800000) == 0 )
          goto LABEL_25;
        v22 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v34);
        v4 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v22, 0x3CBu);
        break;
      default:
LABEL_23:
        if ( v6 )
          CBaseObject::Release(v6);
        goto LABEL_25;
    }
    if ( v34 )
      CBaseObject::Release(v34);
    if ( v5 )
      CBaseObject::Release(v5);
    v7 = a4;
    goto LABEL_23;
  }
  if ( v10 < 0 )
  {
    CTransitionVisualController::RemoveTLWClone(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
      *(const struct CTopLevelWindow **)(a2 + 368),
      1,
      1);
    v33 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v4 = v33;
    if ( v33 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v33, 0x3D9u);
  }
LABEL_25:
  result = 1;
  *v7 = v4;
  return result;
}
