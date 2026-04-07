/*
 * XREFs of ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800048A8
 * Callers:
 *     ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ @ 0x180004EF0 (-OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ.c)
 * Callees:
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180005904 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800059BC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000B1C4 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x18000B268 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000BBE0 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18000BCEC (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x18000BEB4 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180014AD4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001F154 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180030424 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::CreateDesktopSnapshotComponent(
        CTransitionVisualController *a1,
        __int64 a2,
        const struct tagRECT *a3,
        _DWORD *a4,
        __int64 *a5)
{
  LONG right; // eax
  __int64 v6; // r13
  int v7; // eax
  struct CAnimatedTransitionVisual *v11; // r15
  int v12; // eax
  __int64 v13; // rsi
  unsigned int v14; // eax
  struct CVisual *RootVisualForDesktop; // rbx
  int v16; // eax
  unsigned int v17; // r14d
  int v18; // eax
  __int64 v19; // rbx
  int v20; // esi
  bool v21; // zf
  __int64 *v22; // rax
  int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-30h]
  unsigned __int64 v26; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v27[3]; // [rsp+38h] [rbp-18h] BYREF
  struct CAnimatedTransitionVisual *v28; // [rsp+A0h] [rbp+50h] BYREF
  _DWORD *v29; // [rsp+A8h] [rbp+58h]

  v29 = a4;
  right = a3->right;
  v6 = 0LL;
  v28 = 0LL;
  v7 = right - a3->left;
  v27[1] = 0LL;
  if ( v7 < 0 )
    v7 = 0;
  v26 = 0LL;
  LODWORD(v27[0]) = v7;
  v11 = 0LL;
  v12 = a3->bottom - a3->top;
  if ( v12 < 0 )
    v12 = 0;
  HIDWORD(v27[0]) = v12;
  v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v13 )
  {
    v14 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a4 + 88LL))(a4, 10LL);
    v6 = CAnimationComponent::CAnimationComponent(v13, -1LL, 10LL, v14, a4);
  }
  if ( !v6 )
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x53Cu);
    return v17;
  }
  *(_DWORD *)(v6 + 60) = 0x7FFFFFFF;
  GetDesktopID(1LL, &v26);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                           v26);
  if ( RootVisualForDesktop )
  {
    v16 = CTransitionVisualController::_SetDesktopId(a1, v26);
    v17 = v16;
    if ( v16 < 0 )
    {
      v25 = 1349;
LABEL_26:
      v24 = v16;
      goto LABEL_27;
    }
    v18 = CAnimatedTransitionVisual::Create(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            &v28);
    v17 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v18, 0x548u);
LABEL_17:
      v11 = v28;
      goto LABEL_18;
    }
    v11 = v28;
    if ( v28 )
    {
      v16 = CAnimatedTransitionVisual::SetVisual(v28, RootVisualForDesktop, 1, a3);
      v17 = v16;
      if ( v16 < 0 )
      {
        v25 = 1356;
      }
      else
      {
        v16 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(v11, RootVisualForDesktop, a3);
        v17 = v16;
        if ( v16 >= 0 )
        {
          CAnimatedTransitionVisual::SetBeginRect(v11, a3);
          *(struct tagRECT *)((char *)v11 + 856) = *a3;
          CVisual::SetDirtyFlags((struct CAnimatedTransitionVisual *)((char *)v11 + 8), 0x1000u);
          v19 = v27[0];
          (*(void (__fastcall **)(__int64, _QWORD *))(*((_QWORD *)v11 + 1) + 80LL))((__int64)v11 + 8, v27);
          *((_QWORD *)v11 + 117) = v19;
          CVisual::SetInterpolationMode((char *)v11 + 8, 1LL);
          v20 = v29[18];
          *((_DWORD *)v11 + 181) = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v29 + 88LL))(v29, 10LL);
          *((_DWORD *)v11 + 180) = v20;
          *((_BYTE *)v11 + 956) = CStoryboard::IsRTL();
          CAnimationComponent::SetTransitionVisual((CAnimationComponent *)v6, v11);
          v21 = *(_DWORD *)(v6 + 68) == 2;
          *(struct tagRECT *)(v6 + 88) = *a3;
          if ( !v21 )
            *(_DWORD *)(v6 + 68) = 1;
          v22 = a5;
          *((_QWORD *)v11 + 116) = 0LL;
          *((_QWORD *)v11 + 117) = v19;
          *v22 = v6;
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
          goto LABEL_17;
        }
        v25 = 1357;
      }
      goto LABEL_26;
    }
    v25 = 1353;
  }
  else
  {
    v25 = 1346;
  }
  v24 = -2147024882;
  v17 = -2147024882;
LABEL_27:
  MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v24, v25);
LABEL_18:
  CBaseObject::Release((CBaseObject *)v6);
  if ( v11 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v11 + 8));
  return v17;
}
