/*
 * XREFs of ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180093B24
 * Callers:
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180092D90 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180095AC0 (-_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard.c)
 * Callees:
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180005904 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x1800059BC (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000B1C4 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000BBE0 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18000BCEC (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180030424 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::_CreateMonitorSnapshot(
        CVirtualDesktopSwitch *this,
        struct CWindowData *a2,
        struct tagRECT *a3,
        char a4,
        struct CAnimationComponent **a5)
{
  __int64 v5; // rsi
  int v6; // eax
  int v9; // eax
  unsigned int v11; // edi
  struct CVisual *RootVisualForDesktop; // r15
  __int64 v13; // rax
  int v14; // eax
  struct CAnimatedTransitionVisual *v15; // rbp
  int v16; // eax
  __int64 v17; // rax
  CAnimatedTransitionVisual *v18; // rcx
  int v19; // eax
  struct CAnimatedTransitionVisual *v22; // [rsp+38h] [rbp-60h] BYREF
  __int64 v23; // [rsp+40h] [rbp-58h]
  unsigned __int64 v24[10]; // [rsp+48h] [rbp-50h] BYREF

  v5 = 0LL;
  v6 = a3->right - a3->left;
  if ( v6 < 0 )
    v6 = 0;
  v22 = 0LL;
  LODWORD(v23) = v6;
  v9 = a3->bottom - a3->top;
  v24[1] = 0LL;
  if ( v9 < 0 )
    v9 = 0;
  HIDWORD(v23) = v9;
  if ( !(unsigned int)GetDesktopID(1LL, v24) )
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, -2147467259, 0x1291u);
    return v11;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                           v24[0]);
  v13 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v13 )
    v5 = CAnimationComponent::CAnimationComponent(v13, 0LL, *((_DWORD *)a2 + 146) & 0xFFF, 1, (__int64)this);
  if ( !v5 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, -2147024882, 0x1299u);
    return v11;
  }
  v14 = CAnimatedTransitionVisual::Create(
          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
          &v22);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x129Bu);
LABEL_21:
    v15 = v22;
    goto LABEL_22;
  }
  v15 = v22;
  v16 = CAnimatedTransitionVisual::SetVisual((struct CResource **)v22, RootVisualForDesktop, 1, a3);
  v11 = v16;
  if ( v16 >= 0 )
  {
    *((_DWORD *)v15 + 180) = *((_DWORD *)this + 18);
    v17 = v23;
    *((_DWORD *)v15 + 181) = 1;
    *((_QWORD *)v15 + 116) = 0LL;
    *((_QWORD *)v15 + 117) = v17;
    CAnimationComponent::SetTransitionVisual((CAnimationComponent *)v5, v15);
    *(struct tagRECT *)(v5 + 88) = *a3;
    if ( a4 )
    {
      v18 = *(CAnimatedTransitionVisual **)(v5 + 40);
      *(_BYTE *)(v5 + 67) = 1;
      v19 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(v18, RootVisualForDesktop, a3);
      v11 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v19, 0x12A7u);
        goto LABEL_22;
      }
    }
    *a5 = (struct CAnimationComponent *)v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    goto LABEL_21;
  }
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x129Cu);
LABEL_22:
  CBaseObject::Release((CBaseObject *)v5);
  if ( v15 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v15 + 8));
  return v11;
}
