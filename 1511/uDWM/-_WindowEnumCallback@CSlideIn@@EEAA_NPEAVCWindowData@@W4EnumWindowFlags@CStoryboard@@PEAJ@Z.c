/*
 * XREFs of ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800014A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x180001764 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x180003868 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180003B74 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x180003BC4 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180006E50 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800133C8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800136E4 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z @ 0x18008D278 (-SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800942E8 (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x180095E1C (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18009601C (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 */

char __fastcall CSlideIn::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v6; // ebx
  struct CAnimationComponent *v7; // rsi
  unsigned int v8; // r12d
  CDesktopManager *v9; // r14
  struct tagRECT v10; // xmm0
  HWND v11; // rdx
  CWindowPropertyTracker *v12; // rcx
  int v13; // eax
  struct CAnimationComponent *v14; // r14
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  CAnimatedTransitionVisual *v18; // rcx
  __int128 v19; // xmm6
  __int64 v20; // rcx
  char result; // al
  int v22; // eax
  int v23; // eax
  int v24; // r14d
  int v25; // eax
  struct CAnimationComponent *v26; // r14
  double v27; // xmm6_8
  __int64 v28; // rax
  RECT v29; // xmm1
  LONG *TaggedWindow; // rax
  unsigned int v31; // r9d
  LONG bottom; // edi
  int v33; // ecx
  int v34; // eax
  __m128i v35; // xmm0
  int v36; // eax
  struct CAnimationComponent **v37; // r8
  tagSIZE *v38; // rdx
  int v39; // eax
  int v40; // eax
  struct CAnimationComponent *v41; // [rsp+38h] [rbp-79h] BYREF
  tagSIZE v42; // [rsp+40h] [rbp-71h] BYREF
  struct CAnimationComponent *v43; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v44; // [rsp+50h] [rbp-61h] BYREF
  int *v45; // [rsp+60h] [rbp-51h]
  struct tagRECT rc; // [rsp+68h] [rbp-49h] BYREF
  RECT rcSrc2; // [rsp+78h] [rbp-39h] BYREF
  RECT rcSrc1; // [rsp+88h] [rbp-29h] BYREF
  RECT v49; // [rsp+98h] [rbp-19h] BYREF

  v45 = a4;
  v41 = 0LL;
  *(double *)&v43 = 0.0;
  v6 = 0;
  v7 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_22;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v44);
  v8 = *(_DWORD *)(a2 + 576) & 0xFFF;
  if ( v8 )
  {
    switch ( *(_DWORD *)(a2 + 576) & 0xFFF )
    {
      case 8:
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
                *(HWND *)(a2 + 40),
                0) )
          goto LABEL_22;
        *(_DWORD *)(a2 + 576) |= 0x200000u;
        v39 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v44, 1, &v41);
        v6 = v39;
        if ( v39 < 0 )
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v39, 0x2A0u);
        else
          *(_BYTE *)(*((_QWORD *)v41 + 5) + 960LL) = 1;
        goto LABEL_18;
      case 11:
        *(_DWORD *)(a2 + 576) |= 0x200000u;
        break;
      case 24:
      case 42:
LABEL_7:
        v9 = CDesktopManager::s_pDesktopManagerInstance;
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
                *(HWND *)(a2 + 40),
                0) )
        {
          if ( v8 != 42 && v8 != 87 || !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
            goto LABEL_22;
          v9 = CDesktopManager::s_pDesktopManagerInstance;
        }
        v10 = *(struct tagRECT *)(a2 + 48);
        v11 = *(HWND *)(a2 + 40);
        v12 = (CWindowPropertyTracker *)(*((_QWORD *)v9 + 24) + 48LL);
        *(_QWORD *)&rcSrc2.left = 0LL;
        rc = v10;
        *(double *)&v42 = 0.0;
        if ( (int)CWindowPropertyTracker::GetWindowEndPosition(v12, v11, (struct tagPOINT *)&rcSrc2) >= 0 )
        {
          OffsetRect(&rc, rcSrc2.left - rc.left, rcSrc2.top - rc.top);
          v9 = CDesktopManager::s_pDesktopManagerInstance;
        }
        if ( (int)CWindowPropertyTracker::GetWindowEndSize(
                    (CWindowPropertyTracker *)(*((_QWORD *)v9 + 24) + 48LL),
                    *(HWND *)(a2 + 40),
                    &v42) >= 0 )
        {
          rc.right = v42.cx + rc.left;
          rc.bottom = v42.cy + rc.top;
        }
        CTransitionVisualController::GetMonitorRectFromRectImpl(&rc, &v44);
        v13 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v44, 1, &rc, &v41);
        v6 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v13, 0x27Bu);
        }
        else
        {
          v14 = v41;
          *(_BYTE *)(*((_QWORD *)v41 + 5) + 960LL) = 1;
          v15 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v8);
          v16 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v15, &v43);
          v6 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v16, 0x27Eu);
            v7 = v43;
          }
          else
          {
            v7 = v43;
            if ( *(double *)&v43 != 0.0 )
            {
              v17 = *((_QWORD *)v14 + 5);
              v18 = (CAnimatedTransitionVisual *)*((_QWORD *)v43 + 5);
              v19 = *(_OWORD *)(v17 + 856);
              v49 = *(RECT *)(v17 + 840);
              CAnimatedTransitionVisual::SetBeginRect(v18, &v49);
              v20 = *((_QWORD *)v7 + 5);
              *(_OWORD *)(v20 + 856) = v19;
              CVisual::SetDirtyFlags((CVisual *)(v20 + 8), 0x1000u);
              *(_BYTE *)(*((_QWORD *)v7 + 5) + 971LL) = 1;
              *((_BYTE *)v7 + 74) = 1;
              if ( *((_DWORD *)v7 + 17) != 2 )
                *((_DWORD *)v7 + 17) = 1;
              *((_DWORD *)v41 + 14) = *((_DWORD *)v7 + 14) + 1;
            }
          }
        }
        goto LABEL_18;
      case 60:
        break;
      default:
        switch ( *(_DWORD *)(a2 + 576) & 0xFFF )
        {
          case 'E':
            v23 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v44, 1, &v41);
            v6 = v23;
            if ( v23 < 0 )
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v23, 0x296u);
            break;
          case 'F':
            v22 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v41);
            v6 = v22;
            if ( v22 < 0 )
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v22, 0x292u);
            break;
          case 'W':
            goto LABEL_7;
          default:
            goto LABEL_22;
        }
LABEL_18:
        if ( v41 )
          CBaseObject::Release(v41);
        if ( v7 )
          CBaseObject::Release(v7);
        goto LABEL_22;
    }
    v24 = *(_DWORD *)(a2 + 576);
    v25 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v41);
    v6 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v25, 0x2AEu);
      goto LABEL_18;
    }
    *(_DWORD *)(a2 + 576) = v24;
    if ( (v24 & 0xFFF) != 0x3C )
      goto LABEL_18;
    v26 = v41;
    *(double *)&v43 = 0.0;
    v27 = 0.0;
    *(double *)&v42 = 0.0;
    *(_QWORD *)&rcSrc2.left = 0LL;
    v28 = *((_QWORD *)v41 + 5);
    *(_QWORD *)&rcSrc2.right = 0LL;
    *(_BYTE *)(v28 + 960) = 1;
    v49 = *(RECT *)(*((_QWORD *)v26 + 5) + 840LL);
    v29 = *(RECT *)(*((_QWORD *)v26 + 5) + 856LL);
    *(_QWORD *)&rc.left = 0LL;
    rcSrc1 = v29;
    *(_QWORD *)&rc.right = 0LL;
    TaggedWindow = (LONG *)CStoryboard::GetTaggedWindow();
    bottom = v44.bottom;
    if ( TaggedWindow )
    {
      rcSrc2.left = TaggedWindow[12];
      v33 = TaggedWindow[15] - TaggedWindow[13];
      if ( v33 < 0 )
        v33 = 0;
      rcSrc2.top = v44.bottom - v33;
      rcSrc2.right = TaggedWindow[14];
      rcSrc2.bottom = v44.bottom;
    }
    if ( v49.bottom <= rcSrc1.bottom )
    {
      if ( v49.bottom >= rcSrc1.bottom )
        goto LABEL_62;
      if ( IntersectRect(&rc, &v49, &rcSrc2) && !IsRectEmpty(&rc) )
      {
        v36 = rc.bottom - rc.top;
        if ( rc.bottom - rc.top < 0 )
          v36 = 0;
        v27 = (double)-v36;
        *(double *)&v42 = v27;
      }
      v35 = _mm_cvtsi32_si128(bottom - rcSrc1.bottom);
    }
    else
    {
      v27 = (double)(v44.bottom - v49.bottom);
      *(double *)&v42 = v27;
      if ( !IntersectRect(&rc, &rcSrc1, &rcSrc2) || IsRectEmpty(&rc) )
        goto LABEL_62;
      v34 = rc.bottom - rc.top;
      if ( rc.bottom - rc.top < 0 )
        v34 = 0;
      v35 = _mm_cvtsi32_si128(-v34);
    }
    COERCE_DOUBLE(v43 = *(struct CAnimationComponent **)&_mm_cvtepi32_pd(v35).m128d_f64[0]);
    if ( *(double *)&v43 != 0.0 )
    {
      v37 = &v43;
LABEL_63:
      v38 = 0LL;
      if ( v27 != 0.0 )
        v38 = &v42;
      CAnimatedTransitionVisual::SetChopPosition(
        *((CAnimatedTransitionVisual **)v26 + 5),
        (const double *)v38,
        (const double *)v37,
        v31);
      goto LABEL_18;
    }
LABEL_62:
    v37 = 0LL;
    goto LABEL_63;
  }
  if ( *(int *)(a2 + 576) < 0 )
  {
    v40 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v6 = v40;
    if ( v40 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v40, 0x2F1u);
  }
LABEL_22:
  result = 1;
  *v45 = v6;
  return result;
}
