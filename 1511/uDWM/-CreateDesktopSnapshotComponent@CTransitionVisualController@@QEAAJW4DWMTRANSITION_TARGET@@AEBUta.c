/*
 * XREFs of ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800093FC
 * Callers:
 *     ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x180001E60 (-OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ.c)
 * Callees:
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180007E64 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000BE78 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18000BF84 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18000C06C (-Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18000D8A4 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000D970 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800131DC (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021ED8 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002CCCC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateDesktopSnapshotComponent(
        CTransitionVisualController *a1,
        __int64 a2,
        const struct tagRECT *a3,
        _DWORD *a4,
        __int64 *a5)
{
  LONG right; // eax
  __int64 v6; // r12
  int v7; // eax
  struct CAnimatedTransitionVisual *v10; // r13
  int v11; // eax
  __int64 v12; // rsi
  unsigned int v13; // eax
  struct CVisual *RootVisualForDesktop; // rbx
  int v15; // eax
  unsigned int v16; // r15d
  int v17; // eax
  __int64 v18; // rbx
  int v19; // r14d
  bool v20; // zf
  unsigned int v22; // [rsp+20h] [rbp-30h]
  struct CAnimatedTransitionVisual *v23; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-10h] BYREF

  right = a3->right;
  v6 = 0LL;
  v23 = 0LL;
  v7 = right - a3->left;
  v25[1] = 0LL;
  if ( v7 < 0 )
    v7 = 0;
  v24 = 0LL;
  LODWORD(v25[0]) = v7;
  v10 = 0LL;
  v11 = a3->bottom - a3->top;
  if ( v11 < 0 )
    v11 = 0;
  HIDWORD(v25[0]) = v11;
  v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v12 )
  {
    v13 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 88LL))(a4, 10LL);
    v6 = CAnimationComponent::CAnimationComponent(v12, -1LL, 10LL, v13, a4);
  }
  if ( !v6 )
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x537u);
    return v16;
  }
  *(_DWORD *)(v6 + 60) = 0x7FFFFFFF;
  GetDesktopID(1LL, &v24);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                           v24);
  if ( !RootVisualForDesktop )
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x53Du);
    goto LABEL_18;
  }
  v15 = CTransitionVisualController::_SetDesktopId(a1, v24);
  v16 = v15;
  if ( v15 < 0 )
  {
    v22 = 1344;
  }
  else
  {
    v17 = CAnimatedTransitionVisual::Create(
            *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
            &v23);
    v16 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v17, 0x543u);
LABEL_17:
      v10 = v23;
      goto LABEL_18;
    }
    v10 = v23;
    if ( !v23 )
    {
      v16 = -2147024882;
      MilInstrumentationCheckHR(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        -2147024882,
        0x544u);
      goto LABEL_18;
    }
    v15 = CAnimatedTransitionVisual::SetVisual(v23, RootVisualForDesktop, 1, a3);
    v16 = v15;
    if ( v15 < 0 )
    {
      v22 = 1351;
    }
    else
    {
      v15 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(v10, RootVisualForDesktop, a3);
      v16 = v15;
      if ( v15 >= 0 )
      {
        CAnimatedTransitionVisual::SetBeginRect(v10, a3);
        *(struct tagRECT *)((char *)v10 + 856) = *a3;
        CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v10 + 8), 0x1000u);
        v18 = v25[0];
        (*(void (__fastcall **)(__int64, _QWORD *))(*((_QWORD *)v10 + 1) + 80LL))((__int64)v10 + 8, v25);
        *((_QWORD *)v10 + 117) = v18;
        CVisual::SetInterpolationMode((char *)v10 + 8, 1LL);
        v19 = a4[18];
        *((_DWORD *)v10 + 181) = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 88LL))(a4, 10LL);
        *((_DWORD *)v10 + 180) = v19;
        *((_BYTE *)v10 + 956) = CStoryboard::IsRTL();
        CAnimationComponent::SetTransitionVisual((CAnimationComponent *)v6, v10);
        v20 = *(_DWORD *)(v6 + 68) == 2;
        *(struct tagRECT *)(v6 + 88) = *a3;
        if ( !v20 )
          *(_DWORD *)(v6 + 68) = 1;
        *((_QWORD *)v10 + 116) = 0LL;
        *((_QWORD *)v10 + 117) = v18;
        *a5 = v6;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
        goto LABEL_17;
      }
      v22 = 1352;
    }
  }
  MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v15, v22);
LABEL_18:
  CBaseObject::Release((CBaseObject *)v6);
  if ( v10 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v10 + 8));
  return v16;
}
