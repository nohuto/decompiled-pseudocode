/*
 * XREFs of ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18003C590
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180009228 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x180009CC0 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180009EAC (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x180009F00 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x18000F470 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000FEB8 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180038C34 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x18003C0B4 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z @ 0x1800897A8 (-SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800915B8 (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x180093A84 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180093C94 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 */

char __fastcall CSlideIn::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v6; // ebx
  struct CAnimationComponent *v7; // rsi
  unsigned int v8; // r14d
  struct tagRECT v9; // xmm0
  HWND v10; // rdx
  CWindowPropertyTracker *v11; // rcx
  int v12; // eax
  CBaseObject *v13; // r13
  unsigned int v14; // eax
  int v15; // eax
  char result; // al
  __int64 v17; // rax
  struct tagPOINT *v18; // rcx
  __int128 v19; // xmm6
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // r14d
  int v24; // eax
  CBaseObject *v25; // r14
  double v26; // xmm6_8
  __int64 v27; // rax
  RECT v28; // xmm1
  LONG *TaggedWindow; // rax
  unsigned int v30; // r9d
  LONG bottom; // edi
  int v32; // ecx
  int v33; // eax
  __m128i v34; // xmm0
  int v35; // eax
  struct CAnimationComponent **v36; // r8
  tagSIZE *v37; // rdx
  int v38; // eax
  int v39; // eax
  CBaseObject *v40; // [rsp+38h] [rbp-79h] BYREF
  tagSIZE v41; // [rsp+40h] [rbp-71h] BYREF
  struct CAnimationComponent *v42; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v43; // [rsp+50h] [rbp-61h] BYREF
  int *v44; // [rsp+60h] [rbp-51h]
  struct tagRECT rc; // [rsp+68h] [rbp-49h] BYREF
  RECT rcSrc2; // [rsp+78h] [rbp-39h] BYREF
  RECT rcSrc1; // [rsp+88h] [rbp-29h] BYREF
  RECT v48; // [rsp+98h] [rbp-19h] BYREF

  v44 = a4;
  v40 = 0LL;
  *(double *)&v42 = 0.0;
  v6 = 0;
  v7 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_19;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v43);
  v8 = *(_DWORD *)(a2 + 568) & 0xFFF;
  if ( v8 )
  {
    if ( (*(_DWORD *)(a2 + 568) & 0xFFF) == 8 )
    {
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
              *(HWND *)(a2 + 40),
              0) )
        goto LABEL_19;
      *(_DWORD *)(a2 + 568) |= 0x200000u;
      v38 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v43, 1, &v40);
      v6 = v38;
      if ( v38 < 0 )
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v38, 0x29Au);
      else
        *(_BYTE *)(*((_QWORD *)v40 + 5) + 960LL) = 1;
      goto LABEL_15;
    }
    if ( (*(_DWORD *)(a2 + 568) & 0xFFF) == 0xB )
    {
      *(_DWORD *)(a2 + 568) |= 0x200000u;
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 568) & 0xFFF) == 0x18 || (*(_DWORD *)(a2 + 568) & 0xFFF) == 0x2A )
      {
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
                *(HWND *)(a2 + 40),
                0)
          && ((*(_DWORD *)(a2 + 568) & 0xFFF) != 0x2A
           || !(unsigned __int8)CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40))) )
        {
          goto LABEL_19;
        }
        v9 = *(struct tagRECT *)(a2 + 48);
        v10 = *(HWND *)(a2 + 40);
        *(_QWORD *)&rcSrc2.left = 0LL;
        v11 = (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL);
        *(double *)&v41 = 0.0;
        rc = v9;
        if ( (int)CWindowPropertyTracker::GetWindowEndPosition(v11, v10, (struct tagPOINT *)&rcSrc2) >= 0 )
          OffsetRect(&rc, rcSrc2.left - rc.left, rcSrc2.top - rc.top);
        if ( (int)CWindowPropertyTracker::GetWindowEndSize(
                    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
                    *(HWND *)(a2 + 40),
                    &v41) >= 0 )
        {
          rc.right = rc.left + v41.cx;
          rc.bottom = v41.cy + rc.top;
        }
        CTransitionVisualController::GetMonitorRectFromRectImpl(&rc, &v43);
        v12 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v43, 1, (__m128i *)&rc, &v40);
        v6 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x275u);
        }
        else
        {
          v13 = v40;
          *(_BYTE *)(*((_QWORD *)v40 + 5) + 960LL) = 1;
          v14 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v8);
          v15 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v14, &v42);
          v6 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x278u);
            v7 = v42;
          }
          else
          {
            v7 = v42;
            if ( *(double *)&v42 != 0.0 )
            {
              v17 = *((_QWORD *)v13 + 5);
              v18 = (struct tagPOINT *)*((_QWORD *)v42 + 5);
              v19 = *(_OWORD *)(v17 + 856);
              v48 = *(RECT *)(v17 + 840);
              CAnimatedTransitionVisual::SetBeginRect(v18, &v48);
              v20 = *((_QWORD *)v7 + 5);
              *(_OWORD *)(v20 + 856) = v19;
              CVisual::SetDirtyFlags((CVisual *)(v20 + 8), 4096);
              *(_BYTE *)(*((_QWORD *)v7 + 5) + 971LL) = 1;
              *((_BYTE *)v7 + 74) = 1;
              if ( *((_DWORD *)v7 + 17) != 2 )
                *((_DWORD *)v7 + 17) = 1;
              *((_DWORD *)v40 + 14) = *((_DWORD *)v7 + 14) + 1;
            }
          }
        }
        goto LABEL_15;
      }
      if ( (*(_DWORD *)(a2 + 568) & 0xFFF) != 0x3C )
      {
        if ( (*(_DWORD *)(a2 + 568) & 0xFFF) == 0x45 )
        {
          v22 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v43, 1, &v40);
          v6 = v22;
          if ( v22 < 0 )
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v22, 0x290u);
        }
        else
        {
          if ( (*(_DWORD *)(a2 + 568) & 0xFFF) != 0x46 )
            goto LABEL_19;
          v21 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v40);
          v6 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v21, 0x28Cu);
        }
        goto LABEL_15;
      }
    }
    v23 = *(_DWORD *)(a2 + 568);
    v24 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v40);
    v6 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v24, 0x2A8u);
LABEL_15:
      if ( v40 )
        CBaseObject::Release(v40);
      if ( v7 )
        CBaseObject::Release(v7);
      goto LABEL_19;
    }
    *(_DWORD *)(a2 + 568) = v23;
    if ( (v23 & 0xFFF) != 0x3C )
      goto LABEL_15;
    v25 = v40;
    *(double *)&v42 = 0.0;
    v26 = 0.0;
    *(double *)&v41 = 0.0;
    *(_QWORD *)&rcSrc2.left = 0LL;
    v27 = *((_QWORD *)v40 + 5);
    *(_QWORD *)&rcSrc2.right = 0LL;
    *(_BYTE *)(v27 + 960) = 1;
    v48 = *(RECT *)(*((_QWORD *)v25 + 5) + 840LL);
    v28 = *(RECT *)(*((_QWORD *)v25 + 5) + 856LL);
    *(_QWORD *)&rc.left = 0LL;
    rcSrc1 = v28;
    *(_QWORD *)&rc.right = 0LL;
    TaggedWindow = (LONG *)CStoryboard::GetTaggedWindow();
    bottom = v43.bottom;
    if ( TaggedWindow )
    {
      rcSrc2.left = TaggedWindow[12];
      v32 = TaggedWindow[15] - TaggedWindow[13];
      if ( v32 < 0 )
        v32 = 0;
      rcSrc2.top = v43.bottom - v32;
      rcSrc2.right = TaggedWindow[14];
      rcSrc2.bottom = v43.bottom;
    }
    if ( v48.bottom <= rcSrc1.bottom )
    {
      if ( v48.bottom >= rcSrc1.bottom )
        goto LABEL_59;
      if ( IntersectRect(&rc, &v48, &rcSrc2) && !IsRectEmpty(&rc) )
      {
        v35 = rc.bottom - rc.top;
        if ( rc.bottom - rc.top < 0 )
          v35 = 0;
        v26 = (double)-v35;
        *(double *)&v41 = v26;
      }
      v34 = _mm_cvtsi32_si128(bottom - rcSrc1.bottom);
    }
    else
    {
      v26 = (double)(v43.bottom - v48.bottom);
      *(double *)&v41 = v26;
      if ( !IntersectRect(&rc, &rcSrc1, &rcSrc2) || IsRectEmpty(&rc) )
        goto LABEL_59;
      v33 = rc.bottom - rc.top;
      if ( rc.bottom - rc.top < 0 )
        v33 = 0;
      v34 = _mm_cvtsi32_si128(-v33);
    }
    COERCE_DOUBLE(v42 = *(struct CAnimationComponent **)&_mm_cvtepi32_pd(v34).m128d_f64[0]);
    if ( *(double *)&v42 != 0.0 )
    {
      v36 = &v42;
LABEL_60:
      v37 = 0LL;
      if ( v26 != 0.0 )
        v37 = &v41;
      CAnimatedTransitionVisual::SetChopPosition(
        *((CAnimatedTransitionVisual **)v25 + 5),
        (const double *)v37,
        (const double *)v36,
        v30);
      goto LABEL_15;
    }
LABEL_59:
    v36 = 0LL;
    goto LABEL_60;
  }
  if ( *(int *)(a2 + 568) < 0 )
  {
    v39 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v6 = v39;
    if ( v39 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v39, 0x2EBu);
  }
LABEL_19:
  result = 1;
  *v44 = v6;
  return result;
}
