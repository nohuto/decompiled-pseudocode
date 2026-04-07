/*
 * XREFs of ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008E680
 * Callers:
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180003560 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000D3E0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800936F4 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 * Callees:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800059BC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000B1C4 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18000B268 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000BBE0 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18000BCEC (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x18000BEB4 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002BDF8 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x180041CFC (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180041D38 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCCachedVisualImageBrushResource@@PEAVCResource@@@Z @ 0x18008C274 (-SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCCachedVisualImageBrushResource@@PEAVCResource@.c)
 *     Template_pddddddd @ 0x18008F558 (Template_pddddddd.c)
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@1AEBUtagRECT@@@Z @ 0x180096B50 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x180097050 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800970C8 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800978B8 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CTransitionVisualController::CreateDesktopAnimationComponent(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        int a3,
        const struct tagRECT *a4,
        bool a5,
        bool a6,
        struct CStoryboard *a7,
        struct CAnimationComponent **a8)
{
  unsigned int v10; // r14d
  CDesktopThumbnailCVI *v11; // rbx
  struct CAnimatedTransitionVisual *v12; // rsi
  __int64 v15; // rax
  int v16; // eax
  RECT v17; // xmm0
  unsigned int v18; // edi
  int v19; // eax
  HWND ShellWindowForDesktop; // rdi
  __int64 v21; // rax
  __int64 v22; // r14
  int DesktopThumbnail; // eax
  struct CVisual *v24; // r15
  struct CVisual *v25; // rcx
  int updated; // eax
  int PerMonitorDesktopThumbnail; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  struct CStoryboard *v32; // r15
  RECT v33; // xmm0
  int v34; // ecx
  bool v35; // sf
  int v36; // r9d
  __m128i v37; // xmm1
  int v38; // ebx
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  int v44; // edx
  int v45; // edx
  __int128 v46; // xmm0
  unsigned int v48; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v50; // [rsp+50h] [rbp-B0h]
  CDesktopThumbnailCVI *v51; // [rsp+58h] [rbp-A8h] BYREF
  struct CAnimatedTransitionVisual *v52; // [rsp+60h] [rbp-A0h] BYREF
  struct CStoryboard *v53; // [rsp+68h] [rbp-98h]
  struct CVisual *v54; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v55; // [rsp+80h] [rbp-80h] BYREF
  int v56; // [rsp+90h] [rbp-70h]
  unsigned __int64 v57; // [rsp+98h] [rbp-68h] BYREF
  CBaseObject *v58; // [rsp+A0h] [rbp-60h] BYREF
  CBaseObject *v59; // [rsp+A8h] [rbp-58h] BYREF
  struct CAnimationComponent **v60; // [rsp+B0h] [rbp-50h]
  const struct tagRECT *v61; // [rsp+B8h] [rbp-48h]
  struct tagRECT v62; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v63; // [rsp+D0h] [rbp-30h] BYREF
  RECT rc2; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v65; // [rsp+F0h] [rbp-10h]

  v10 = *((_DWORD *)a2 + 146) & 0xFFF;
  v60 = a8;
  v61 = a4;
  v54 = 0LL;
  v11 = 0LL;
  v51 = 0LL;
  v12 = 0LL;
  v52 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v15 = *(_QWORD *)a7;
  v53 = a7;
  v16 = (*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(v15 + 96))(a7, v10);
  v17 = *a4;
  LOBYTE(v16) = (v16 & 0x10) != 0;
  v56 = v16;
  rc2 = v17;
  if ( (_BYTE)v16 )
    CTransitionVisualController::GetMonitorRectFromRectImpl(a4, &rc2);
  if ( !(unsigned int)GetDesktopID(1LL, &v57) )
  {
    v48 = 1415;
LABEL_5:
    v18 = -2147467259;
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, -2147467259, v48);
    return v18;
  }
  v19 = CTransitionVisualController::_SetDesktopId(this, v57);
  v18 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v19, 0x58Bu);
    return v18;
  }
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                            v57);
  if ( !ShellWindowForDesktop )
  {
    v48 = 1424;
    goto LABEL_5;
  }
  v21 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v21 )
    v22 = CAnimationComponent::CAnimationComponent(v21, (__int64)ShellWindowForDesktop, v10, a3, (__int64)v53);
  else
    v22 = 0LL;
  if ( !v22 )
  {
    v18 = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x594u);
    return v18;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v54);
  v18 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      DesktopThumbnail,
      0x596u);
LABEL_77:
    v24 = v54;
    goto LABEL_78;
  }
  v24 = v54;
  v25 = v54;
  *((_QWORD *)v54 + 37) = v57;
  updated = CDesktopThumbnailBase::UpdateWindowClones(v25);
  v18 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, updated, 0x597u);
    goto LABEL_78;
  }
  v63 = rc2;
  PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v24, &v63, &v51);
  v18 = PerMonitorDesktopThumbnail;
  if ( PerMonitorDesktopThumbnail >= 0 )
  {
    v28 = CAnimatedTransitionVisual::Create(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            &v52);
    v18 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v28, 0x59Au);
      v11 = v51;
LABEL_26:
      v12 = v52;
      goto LABEL_78;
    }
    if ( a5 )
      *(_BYTE *)(v22 + 67) = 1;
    v11 = v51;
    if ( !a6 || CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
    {
      v30 = CDesktopThumbnailCVI::CreateBrush(v11, &v58, &v59, 0LL, &rc2);
      v18 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v30, 0x5A7u);
        goto LABEL_26;
      }
      v12 = v52;
      v31 = CAnimatedTransitionVisual::SetCVIBrush(v52, v58, v59);
      v18 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v31, 0x5A8u);
        goto LABEL_78;
      }
    }
    else
    {
      v12 = v52;
      v29 = CAnimatedTransitionVisual::SetVisual((struct CResource **)v52, v24, 1, &rc2);
      v18 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v29, 0x5A3u);
        goto LABEL_23;
      }
    }
    v32 = v53;
    *((_DWORD *)v12 + 180) = *((_DWORD *)v53 + 18);
    *((_DWORD *)v12 + 181) = a3;
    *((_BYTE *)v12 + 956) = CStoryboard::IsRTL();
    CAnimationComponent::SetTransitionVisual((CAnimationComponent *)v22, v12);
    *(_QWORD *)(v22 + 48) = v11;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
      v11 = v51;
      v12 = v52;
    }
    if ( (*((_DWORD *)a2 + 146) & 0x1000000) != 0 && EqualRect((const RECT *)((char *)a2 + 588), &rc2)
      || (*((_DWORD *)a2 + 146) & 0x800000) != 0 && EqualRect((const RECT *)((char *)a2 + 620), &rc2) )
    {
      v33 = rc2;
      v55 = rc2;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, &v55);
      v33 = v55;
    }
    *(RECT *)(v22 + 88) = v33;
    if ( a6 )
    {
      v34 = rc2.right - rc2.left;
      if ( rc2.right - rc2.left < 0 )
        v34 = 0;
      v53 = 0LL;
      v36 = rc2.bottom - rc2.top;
      v35 = rc2.bottom - rc2.top < 0;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, &v62);
      LODWORD(v53) = v55.left - v62.left;
      v34 = v55.right - v55.left;
      HIDWORD(v53) = v55.top - v62.top;
      if ( v55.right - v55.left < 0 )
        v34 = 0;
      v36 = v55.bottom - v55.top;
      v35 = v55.bottom - v55.top < 0;
    }
    v37 = *(__m128i *)((char *)v11 + 40);
    if ( v35 )
      v36 = 0;
    v50 = __PAIR64__(v36, v34);
    v65 = *(_OWORD *)((char *)v11 + 40);
    v38 = _mm_cvtsi128_si32(_mm_srli_si128(v37, 8)) - _mm_cvtsi128_si32(v37);
    v39 = v38;
    if ( v38 < 0 )
      v39 = 0;
    if ( v34 > v39 )
    {
      v40 = v38;
      if ( v38 < 0 )
        v40 = 0;
      v41 = MulDiv(v36, v40, v34);
      v34 = v38;
      v36 = v41;
      HIDWORD(v50) = v41;
      if ( v38 < 0 )
        v34 = 0;
      LODWORD(v50) = v34;
    }
    v42 = HIDWORD(v65) - DWORD1(v65);
    v43 = HIDWORD(v65) - DWORD1(v65);
    if ( HIDWORD(v65) - DWORD1(v65) < 0 )
      v43 = 0;
    if ( v36 > v43 )
    {
      v44 = HIDWORD(v65) - DWORD1(v65);
      if ( v42 < 0 )
        v44 = 0;
      LODWORD(v50) = MulDiv(v34, v44, v36);
      if ( v42 < 0 )
        v42 = 0;
      HIDWORD(v50) = v42;
    }
    *((_QWORD *)v12 + 116) = v53;
    *((_QWORD *)v12 + 117) = v50;
    if ( (_BYTE)v56 )
    {
      *(_OWORD *)((char *)v12 + 872) = *(_OWORD *)((char *)a2 + 588);
      *(_OWORD *)((char *)v12 + 808) = *(_OWORD *)((char *)a2 + 588);
      CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v12 + 8), 4096);
      *(_OWORD *)((char *)v12 + 888) = *(_OWORD *)((char *)a2 + 620);
      CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v12 + 8), 4096);
      *((_BYTE *)v12 + 970) = 1;
    }
    if ( !IsRectEmpty((const RECT *)((char *)a2 + 652)) )
    {
      v46 = *(_OWORD *)((char *)a2 + 652);
      *(_DWORD *)(v22 + 68) = 2;
      *(_OWORD *)(v22 + 104) = v46;
    }
    *v60 = (struct CAnimationComponent *)v22;
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_pddddddd(
        (_DWORD)v61,
        v45,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)v32 + 18),
        *((_DWORD *)a2 + 146),
        1,
        v61->left,
        v61->top,
        v61->bottom,
        v61->right);
    v12 = v52;
    v11 = v51;
    goto LABEL_77;
  }
  MilInstrumentationCheckHR(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2LL,
    PerMonitorDesktopThumbnail,
    0x598u);
LABEL_23:
  v11 = v51;
LABEL_78:
  CBaseObject::Release((CBaseObject *)v22);
  if ( v24 )
    CBaseObject::Release(v24);
  if ( v11 )
    CBaseObject::Release(v11);
  if ( v12 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v12 + 8));
  if ( v58 )
    CBaseObject::Release(v58);
  if ( v59 )
    CBaseObject::Release(v59);
  return v18;
}
