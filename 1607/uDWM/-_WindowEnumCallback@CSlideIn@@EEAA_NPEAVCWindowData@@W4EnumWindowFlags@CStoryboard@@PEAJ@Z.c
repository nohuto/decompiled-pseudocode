/*
 * XREFs of ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180040730
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18000AED8 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18000B0C4 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x18000B118 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x18000EEFC (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180014AD4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x180040CB4 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180041D38 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180042168 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z @ 0x18008C2E8 (-SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180092938 (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800941D4 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800943DC (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 */

char __fastcall CSlideIn::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v6; // edi
  struct CAnimationComponent *v7; // rsi
  unsigned int v8; // r14d
  struct tagRECT v9; // xmm0
  HWND v10; // rdx
  int v11; // eax
  CBaseObject *v12; // r13
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  struct tagPOINT *v16; // rcx
  __int128 v17; // xmm6
  __int64 v18; // rcx
  char result; // al
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // r14d
  int v24; // eax
  CBaseObject *v25; // r14
  double v26; // xmm6_8
  RECT v27; // xmm1
  LONG *TaggedWindow; // rax
  unsigned int v29; // r9d
  LONG bottom; // ebx
  int v31; // ecx
  int v32; // eax
  __m128i v33; // xmm0
  int v34; // eax
  struct CAnimationComponent **v35; // r8
  struct tagSIZE *v36; // rdx
  int v37; // eax
  int v38; // eax
  CBaseObject *v39; // [rsp+38h] [rbp-79h] BYREF
  struct tagSIZE v40; // [rsp+40h] [rbp-71h] BYREF
  struct CAnimationComponent *v41; // [rsp+48h] [rbp-69h] BYREF
  struct tagRECT v42; // [rsp+50h] [rbp-61h] BYREF
  int *v43; // [rsp+60h] [rbp-51h]
  struct tagRECT rc; // [rsp+68h] [rbp-49h] BYREF
  RECT rcSrc2; // [rsp+78h] [rbp-39h] BYREF
  RECT rcSrc1; // [rsp+88h] [rbp-29h] BYREF
  RECT v47; // [rsp+98h] [rbp-19h] BYREF

  v43 = a4;
  v39 = 0LL;
  *(double *)&v41 = 0.0;
  v6 = 0;
  v7 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_22;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v42);
  v8 = *(_DWORD *)(a2 + 584) & 0xFFF;
  if ( v8 )
  {
    switch ( *(_DWORD *)(a2 + 584) & 0xFFF )
    {
      case 8:
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                *(HWND *)(a2 + 40),
                0) )
          goto LABEL_22;
        *(_DWORD *)(a2 + 584) |= 0x200000u;
        v37 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v42, 1, &v39);
        v6 = v37;
        if ( v37 >= 0 )
          *(_BYTE *)(*((_QWORD *)v39 + 5) + 960LL) = 1;
        else
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v37, 0x2A4u);
        goto LABEL_18;
      case 11:
        *(_DWORD *)(a2 + 584) |= 0x200000u;
        break;
      case 24:
      case 42:
LABEL_7:
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                *(HWND *)(a2 + 40),
                0) )
        {
          v22 = *(_DWORD *)(a2 + 584) & 0xFFF;
          if ( v22 != 42 && v22 != 87 )
            goto LABEL_22;
          if ( !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
            goto LABEL_22;
        }
        v9 = *(struct tagRECT *)(a2 + 48);
        v10 = *(HWND *)(a2 + 40);
        *(_QWORD *)&rcSrc2.left = 0LL;
        *(double *)&v40 = 0.0;
        rc = v9;
        if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
                    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                    v10,
                    (struct tagPOINT *)&rcSrc2) >= 0 )
          OffsetRect(&rc, rcSrc2.left - rc.left, rcSrc2.top - rc.top);
        if ( (int)CWindowPropertyTracker::GetWindowEndSize(
                    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                    *(HWND *)(a2 + 40),
                    &v40) >= 0 )
        {
          rc.right = rc.left + v40.cx;
          rc.bottom = v40.cy + rc.top;
        }
        CTransitionVisualController::GetMonitorRectFromRectImpl(&rc, &v42);
        v11 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v42, 1, &rc, &v39);
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v11, 0x27Fu);
        }
        else
        {
          v12 = v39;
          *(_BYTE *)(*((_QWORD *)v39 + 5) + 960LL) = 1;
          v13 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v8);
          v14 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v13, &v41);
          v6 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v14, 0x282u);
            v7 = v41;
          }
          else
          {
            v7 = v41;
            if ( *(double *)&v41 != 0.0 )
            {
              v15 = *((_QWORD *)v12 + 5);
              v16 = (struct tagPOINT *)*((_QWORD *)v41 + 5);
              v17 = *(_OWORD *)(v15 + 856);
              v47 = *(RECT *)(v15 + 840);
              CAnimatedTransitionVisual::SetBeginRect(v16, &v47);
              v18 = *((_QWORD *)v7 + 5);
              *(_OWORD *)(v18 + 856) = v17;
              CVisual::SetDirtyFlags((CVisual *)(v18 + 8), 4096);
              *(_BYTE *)(*((_QWORD *)v7 + 5) + 971LL) = 1;
              *((_BYTE *)v7 + 74) = 1;
              if ( *((_DWORD *)v7 + 17) != 2 )
                *((_DWORD *)v7 + 17) = 1;
              *((_DWORD *)v39 + 14) = *((_DWORD *)v7 + 14) + 1;
            }
          }
        }
        goto LABEL_18;
      case 60:
        break;
      default:
        switch ( *(_DWORD *)(a2 + 584) & 0xFFF )
        {
          case 'E':
            v21 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v42, 1, &v39);
            v6 = v21;
            if ( v21 < 0 )
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v21, 0x29Au);
            break;
          case 'F':
            v20 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v39);
            v6 = v20;
            if ( v20 < 0 )
              MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v20, 0x296u);
            break;
          case 'W':
            goto LABEL_7;
          default:
            goto LABEL_22;
        }
LABEL_18:
        if ( v39 )
          CBaseObject::Release(v39);
        if ( v7 )
          CBaseObject::Release(v7);
        goto LABEL_22;
    }
    v23 = *(_DWORD *)(a2 + 584);
    v24 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v39);
    v6 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v24, 0x2B2u);
      goto LABEL_18;
    }
    *(_DWORD *)(a2 + 584) = v23;
    if ( (v23 & 0xFFF) != 0x3C )
      goto LABEL_18;
    v25 = v39;
    *(double *)&v41 = 0.0;
    v26 = 0.0;
    *(double *)&v40 = 0.0;
    *(_BYTE *)(*((_QWORD *)v39 + 5) + 960LL) = 1;
    v47 = *(RECT *)(*((_QWORD *)v25 + 5) + 840LL);
    v27 = *(RECT *)(*((_QWORD *)v25 + 5) + 856LL);
    *(_QWORD *)&rc.left = 0LL;
    rcSrc1 = v27;
    *(_QWORD *)&rc.right = 0LL;
    *(_QWORD *)&rcSrc2.left = 0LL;
    *(_QWORD *)&rcSrc2.right = 0LL;
    TaggedWindow = (LONG *)CStoryboard::GetTaggedWindow();
    bottom = v42.bottom;
    if ( TaggedWindow )
    {
      rcSrc2.left = TaggedWindow[12];
      v31 = TaggedWindow[15] - TaggedWindow[13];
      if ( v31 < 0 )
        v31 = 0;
      rcSrc2.top = v42.bottom - v31;
      rcSrc2.right = TaggedWindow[14];
      rcSrc2.bottom = v42.bottom;
    }
    if ( v47.bottom <= rcSrc1.bottom )
    {
      if ( v47.bottom >= rcSrc1.bottom )
        goto LABEL_61;
      if ( IntersectRect(&rc, &v47, &rcSrc2) && !IsRectEmpty(&rc) )
      {
        v34 = rc.bottom - rc.top;
        if ( rc.bottom - rc.top < 0 )
          v34 = 0;
        v26 = (double)-v34;
        *(double *)&v40 = v26;
      }
      v33 = _mm_cvtsi32_si128(bottom - rcSrc1.bottom);
    }
    else
    {
      v26 = (double)(v42.bottom - v47.bottom);
      *(double *)&v40 = v26;
      if ( !IntersectRect(&rc, &rcSrc1, &rcSrc2) || IsRectEmpty(&rc) )
        goto LABEL_61;
      v32 = rc.bottom - rc.top;
      if ( rc.bottom - rc.top < 0 )
        v32 = 0;
      v33 = _mm_cvtsi32_si128(-v32);
    }
    COERCE_DOUBLE(v41 = *(struct CAnimationComponent **)&_mm_cvtepi32_pd(v33).m128d_f64[0]);
    if ( *(double *)&v41 != 0.0 )
    {
      v35 = &v41;
LABEL_62:
      v36 = 0LL;
      if ( v26 != 0.0 )
        v36 = &v40;
      CAnimatedTransitionVisual::SetChopPosition(
        *((CAnimatedTransitionVisual **)v25 + 5),
        (const double *)v36,
        (const double *)v35,
        v29);
      goto LABEL_18;
    }
LABEL_61:
    v35 = 0LL;
    goto LABEL_62;
  }
  if ( *(int *)(a2 + 584) < 0 )
  {
    v38 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v6 = v38;
    if ( v38 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v38, 0x2F5u);
  }
LABEL_22:
  result = 1;
  *v43 = v6;
  return result;
}
