/*
 * XREFs of ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800409D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180004280 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18000AED8 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18000EB20 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x18000EEFC (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180014A64 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180014AD4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800303B4 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x180040CB4 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180041D38 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180042168 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800941D4 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800943DC (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 */

char __fastcall CSlideOut::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  struct CAnimationComponent *v5; // r14
  struct CAnimationComponent *v6; // rsi
  int *v7; // r13
  int v10; // r12d
  __int64 v11; // rdx
  int v12; // eax
  struct CAnimationComponent *v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  struct tagRECT v17; // xmm0
  __int128 v18; // xmm6
  struct tagPOINT *v19; // rcx
  __int64 v20; // rcx
  char result; // al
  int v22; // eax
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
  v7 = a4;
  if ( (a3 & 1) == 0 )
    goto LABEL_28;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v38);
  v10 = *(_DWORD *)(a2 + 584);
  if ( (v10 & 0xFFF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 584) & 0xFFF) == 8 )
    {
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
              *(HWND *)(a2 + 40),
              1) )
        goto LABEL_28;
      *(_DWORD *)(a2 + 584) |= 0x200000u;
      v33 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v38, 0, &v35);
      v4 = v33;
      if ( v33 < 0 )
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v33, 0x3C3u);
      else
        *(_BYTE *)(*((_QWORD *)v35 + 5) + 960LL) = 1;
      goto LABEL_21;
    }
    if ( (*(_DWORD *)(a2 + 584) & 0xFFF) == 0xB )
    {
      *(_DWORD *)(a2 + 584) |= 0x200000u;
      v32 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
      v4 = v32;
      if ( v32 >= 0 )
        *(_DWORD *)(a2 + 584) = v10;
      else
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v32, 0x3CEu);
      goto LABEL_28;
    }
    if ( (*(_DWORD *)(a2 + 584) & 0xFFF) != 0x18 && (*(_DWORD *)(a2 + 584) & 0xFFF) != 0x2A )
    {
      if ( (*(_DWORD *)(a2 + 584) & 0xFFF) == 0x45 )
      {
        v23 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v38, 0, &v35);
        v4 = v23;
        if ( v23 < 0 )
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v23, 0x3DCu);
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(a2 + 584) & 0xFFF) == 0x46 )
      {
        if ( (v10 & 0x1800000) == 0 )
          goto LABEL_28;
        v22 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v35);
        v4 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v22, 0x3D7u);
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(a2 + 584) & 0xFFF) != 0x57 )
      {
LABEL_26:
        if ( v6 )
          CBaseObject::Release(v6);
        goto LABEL_28;
      }
    }
    if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
           (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
           *(HWND *)(a2 + 40),
           1)
      || ((v24 = *(_DWORD *)(a2 + 584) & 0xFFF, v24 == 42) || v24 == 87)
      && !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
    {
      v11 = *((_QWORD *)a1 + 16);
      if ( !v11 )
        goto LABEL_9;
      if ( *(_QWORD *)(v11 + 16) == *(_QWORD *)(a2 + 40) )
        goto LABEL_28;
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                           *(HWND *)(v11 + 16));
      v26 = WindowDataByHwnd;
      if ( WindowDataByHwnd )
      {
        *((_DWORD *)WindowDataByHwnd + 146) = *(_DWORD *)(a2 + 584) & 0xEBFFF000 | 0x1400002A;
        if ( *(float *)(*(_QWORD *)(*((_QWORD *)a1 + 16) + 40LL) + 728LL) == 1.0 )
        {
          v27 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, *(unsigned int *)(a2 + 584));
          v28 = CStoryboard::_CreateAndAddNullComponentWithWindow(a1, (struct CWindowData *)a2, v27, &v35);
          v4 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v28, 0x37Fu);
LABEL_21:
            if ( v35 )
              CBaseObject::Release(v35);
            if ( v5 )
              CBaseObject::Release(v5);
            v7 = a4;
            goto LABEL_26;
          }
          v29 = CSlide::_SlideWindowHorizontally(a1, v26, &v38, 0, 0LL, &v36);
          v4 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v29, 0x380u);
LABEL_51:
            v5 = v36;
            goto LABEL_21;
          }
          v5 = v36;
        }
        else
        {
          v30 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v38, 0, 0LL, &v35);
          v4 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v30, 0x388u);
            goto LABEL_21;
          }
          v31 = CSlide::_SlideWindowHorizontally(a1, v26, &v38, 0, 0LL, &v36);
          v4 = v31;
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v31, 0x389u);
            goto LABEL_51;
          }
          v5 = v36;
          *((_DWORD *)v36 + 14) = *((_DWORD *)v35 + 14) + 1;
        }
      }
      else
      {
LABEL_9:
        v12 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v38, 0, 0LL, &v35);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v12, 0x393u);
          goto LABEL_21;
        }
        v13 = v35;
        CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v35 + 5), 1.0);
        *(_BYTE *)(*((_QWORD *)v13 + 5) + 953LL) = 1;
        if ( (*(_DWORD *)(a2 + 584) & 0xFFF) == 0x18 )
          *(_BYTE *)(*((_QWORD *)v13 + 5) + 960LL) = 1;
      }
      if ( v35 && *((_DWORD *)v35 + 17) != 2 )
        *((_DWORD *)v35 + 17) = 3;
      if ( v5 && *((_DWORD *)v5 + 17) != 2 )
        *((_DWORD *)v5 + 17) = 3;
      v14 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, *(_DWORD *)(a2 + 584) & 0xFFF);
      v15 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v14, &v37);
      v4 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v15, 0x3A9u);
        v6 = v37;
      }
      else
      {
        v6 = v37;
        if ( v37 )
        {
          v16 = *((_QWORD *)v35 + 5);
          v17 = *(struct tagRECT *)(v16 + 840);
          v18 = *(_OWORD *)(v16 + 856);
          v19 = (struct tagPOINT *)*((_QWORD *)v37 + 5);
          v38 = v17;
          CAnimatedTransitionVisual::SetBeginRect(v19, &v38);
          v20 = *((_QWORD *)v6 + 5);
          *(_OWORD *)(v20 + 856) = v18;
          CVisual::SetDirtyFlags((CVisual *)(v20 + 8), 4096);
          *(_BYTE *)(*((_QWORD *)v6 + 5) + 971LL) = 1;
          *((_BYTE *)v6 + 74) = 1;
          if ( *((_DWORD *)v6 + 17) != 2 )
            *((_DWORD *)v6 + 17) = 1;
          *((_DWORD *)v35 + 14) = *((_DWORD *)v6 + 14) + 1;
        }
      }
      goto LABEL_21;
    }
  }
  else if ( v10 < 0 )
  {
    CTransitionVisualController::RemoveTLWClone(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
      *(const struct CTopLevelWindow **)(a2 + 384),
      1,
      1);
    v34 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v4 = v34;
    if ( v34 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v34, 0x3E5u);
  }
LABEL_28:
  result = 1;
  *v7 = v4;
  return result;
}
