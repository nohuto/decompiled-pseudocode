/*
 * XREFs of ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008FB04
 * Callers:
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800046A0 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180009690 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800952CC (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 * Callees:
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180007E64 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000BE78 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18000BF84 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18000C06C (-Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000D970 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800131DC (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800133C8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002C6B8 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x18003F9C0 (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCCachedVisualImageBrushResource@@PEAVCResource@@@Z @ 0x18008D204 (-SetCVIBrush@CAnimatedTransitionVisual@@QEAAJPEAVCCachedVisualImageBrushResource@@PEAVCResource@.c)
 *     Template_pddddddd @ 0x180090AA0 (Template_pddddddd.c)
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@1AEBUtagRECT@@@Z @ 0x180099D90 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x18009A2BC (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x18009A334 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x18009AAAC (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
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
  int v10; // r12d
  unsigned int v12; // r12d
  __int64 v13; // rax
  CBaseObject *v14; // r14
  struct CAnimatedTransitionVisual *v15; // rsi
  __int64 (__fastcall *v16)(struct CStoryboard *, _QWORD); // rbx
  int v17; // eax
  RECT v18; // xmm0
  unsigned int v19; // edi
  int v20; // eax
  HWND ShellWindowForDesktop; // r15
  __int64 v22; // rax
  __int64 v23; // r15
  int DesktopThumbnail; // eax
  struct CVisual *v25; // rbx
  struct CVisual *v26; // rcx
  int updated; // eax
  int PerMonitorDesktopThumbnail; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
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
  CBaseObject *v51; // [rsp+58h] [rbp-A8h] BYREF
  struct CAnimatedTransitionVisual *v52; // [rsp+60h] [rbp-A0h] BYREF
  struct CVisual *v53; // [rsp+68h] [rbp-98h] BYREF
  struct CStoryboard *v54; // [rsp+70h] [rbp-90h]
  __int64 v55; // [rsp+78h] [rbp-88h]
  struct tagRECT v56; // [rsp+80h] [rbp-80h] BYREF
  CBaseObject *v57; // [rsp+90h] [rbp-70h] BYREF
  CBaseObject *v58; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v59; // [rsp+A0h] [rbp-60h] BYREF
  int v60; // [rsp+A8h] [rbp-58h]
  const struct tagRECT *v61; // [rsp+B0h] [rbp-50h]
  struct CAnimationComponent **v62; // [rsp+B8h] [rbp-48h]
  struct tagRECT v63; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v64; // [rsp+D0h] [rbp-30h] BYREF
  RECT rc2; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v66; // [rsp+F0h] [rbp-10h]

  v10 = *((_DWORD *)a2 + 144);
  v62 = a8;
  v12 = v10 & 0xFFF;
  v54 = a7;
  v13 = *(_QWORD *)a7;
  v14 = 0LL;
  v53 = 0LL;
  v15 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v16 = *(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(v13 + 96);
  v57 = 0LL;
  v58 = 0LL;
  v61 = a4;
  v17 = v16(a7, v12);
  v18 = *a4;
  LOBYTE(v17) = (v17 & 0x10) != 0;
  v60 = v17;
  rc2 = v18;
  if ( (_BYTE)v17 )
    CTransitionVisualController::GetMonitorRectFromRectImpl(a4, &rc2);
  if ( !(unsigned int)GetDesktopID(1LL, &v59) )
  {
    v48 = 1410;
LABEL_5:
    v19 = -2147467259;
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, -2147467259, v48);
    return v19;
  }
  v20 = CTransitionVisualController::_SetDesktopId(this, v59);
  v19 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v20, 0x586u);
    return v19;
  }
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                            v59);
  if ( !ShellWindowForDesktop )
  {
    v48 = 1419;
    goto LABEL_5;
  }
  v22 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v22 )
    v23 = CAnimationComponent::CAnimationComponent(v22, (__int64)ShellWindowForDesktop, v12, a3, (__int64)v54);
  else
    v23 = 0LL;
  if ( !v23 )
  {
    v19 = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x58Fu);
    return v19;
  }
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v53);
  v19 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      DesktopThumbnail,
      0x591u);
LABEL_77:
    v25 = v53;
    goto LABEL_78;
  }
  v25 = v53;
  v26 = v53;
  *((_QWORD *)v53 + 37) = v59;
  updated = CDesktopThumbnailBase::UpdateWindowClones(v26);
  v19 = updated;
  if ( updated >= 0 )
  {
    v64 = rc2;
    PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v25, &v64, &v51);
    v19 = PerMonitorDesktopThumbnail;
    if ( PerMonitorDesktopThumbnail < 0 )
    {
      MilInstrumentationCheckHR(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        PerMonitorDesktopThumbnail,
        0x593u);
LABEL_30:
      v14 = v51;
      goto LABEL_78;
    }
    v29 = CAnimatedTransitionVisual::Create(
            *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
            &v52);
    v19 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v29, 0x595u);
      v14 = v51;
LABEL_33:
      v15 = v52;
      goto LABEL_78;
    }
    if ( a5 )
      *(_BYTE *)(v23 + 67) = 1;
    v14 = v51;
    if ( !a6 || CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
    {
      v31 = CDesktopThumbnailCVI::CreateBrush(v14, &v57, &v58, 0LL, &rc2);
      v19 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v31, 0x5A2u);
        goto LABEL_33;
      }
      v15 = v52;
      v32 = CAnimatedTransitionVisual::SetCVIBrush(v52, v57, v58);
      v19 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v32, 0x5A3u);
        goto LABEL_78;
      }
    }
    else
    {
      v15 = v52;
      v30 = CAnimatedTransitionVisual::SetVisual((struct CResource **)v52, v25, 1, &rc2);
      v19 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v30, 0x59Eu);
        goto LABEL_30;
      }
    }
    *((_DWORD *)v15 + 180) = *((_DWORD *)v54 + 18);
    *((_DWORD *)v15 + 181) = a3;
    *((_BYTE *)v15 + 956) = CStoryboard::IsRTL();
    CAnimationComponent::SetTransitionVisual((CAnimationComponent *)v23, v15);
    *(_QWORD *)(v23 + 48) = v14;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
      v14 = v51;
      v15 = v52;
    }
    if ( (*((_DWORD *)a2 + 144) & 0x1000000) != 0 && EqualRect((const RECT *)((char *)a2 + 580), &rc2)
      || (*((_DWORD *)a2 + 144) & 0x800000) != 0 && EqualRect((const RECT *)((char *)a2 + 612), &rc2) )
    {
      v33 = rc2;
      v56 = rc2;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, &v56);
      v33 = v56;
    }
    *(RECT *)(v23 + 88) = v33;
    if ( a6 )
    {
      v34 = rc2.right - rc2.left;
      if ( rc2.right - rc2.left < 0 )
        v34 = 0;
      v55 = 0LL;
      v36 = rc2.bottom - rc2.top;
      v35 = rc2.bottom - rc2.top < 0;
    }
    else
    {
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rc2, &v63);
      LODWORD(v55) = v56.left - v63.left;
      v34 = v56.right - v56.left;
      HIDWORD(v55) = v56.top - v63.top;
      if ( v56.right - v56.left < 0 )
        v34 = 0;
      v36 = v56.bottom - v56.top;
      v35 = v56.bottom - v56.top < 0;
    }
    v37 = *(__m128i *)((char *)v14 + 40);
    if ( v35 )
      v36 = 0;
    v50 = __PAIR64__(v36, v34);
    v66 = *(_OWORD *)((char *)v14 + 40);
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
    v42 = HIDWORD(v66) - DWORD1(v66);
    v43 = HIDWORD(v66) - DWORD1(v66);
    if ( HIDWORD(v66) - DWORD1(v66) < 0 )
      v43 = 0;
    if ( v36 > v43 )
    {
      v44 = HIDWORD(v66) - DWORD1(v66);
      if ( v42 < 0 )
        v44 = 0;
      LODWORD(v50) = MulDiv(v34, v44, v36);
      if ( v42 < 0 )
        v42 = 0;
      HIDWORD(v50) = v42;
    }
    *((_QWORD *)v15 + 116) = v55;
    *((_QWORD *)v15 + 117) = v50;
    if ( (_BYTE)v60 )
    {
      *(_OWORD *)((char *)v15 + 872) = *(_OWORD *)((char *)a2 + 580);
      *(_OWORD *)((char *)v15 + 808) = *(_OWORD *)((char *)a2 + 580);
      CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v15 + 8), 4096);
      *(_OWORD *)((char *)v15 + 888) = *(_OWORD *)((char *)a2 + 612);
      CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v15 + 8), 4096);
      *((_BYTE *)v15 + 970) = 1;
    }
    if ( !IsRectEmpty((const RECT *)((char *)a2 + 644)) )
    {
      v46 = *(_OWORD *)((char *)a2 + 644);
      *(_DWORD *)(v23 + 68) = 2;
      *(_OWORD *)(v23 + 104) = v46;
    }
    *v62 = (struct CAnimationComponent *)v23;
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_pddddddd(
        (_DWORD)v61,
        v45,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)v54 + 18),
        *((_DWORD *)a2 + 144),
        1,
        v61->left,
        v61->top,
        v61->bottom,
        v61->right);
    v15 = v52;
    v14 = v51;
    goto LABEL_77;
  }
  MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, updated, 0x592u);
LABEL_78:
  CBaseObject::Release((CBaseObject *)v23);
  if ( v25 )
    CBaseObject::Release(v25);
  if ( v14 )
    CBaseObject::Release(v14);
  if ( v15 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v15 + 8));
  if ( v57 )
    CBaseObject::Release(v57);
  if ( v58 )
    CBaseObject::Release(v58);
  return v19;
}
