/*
 * XREFs of ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180095708
 * Callers:
 *     ?OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180094870 (-OnTransitionWindow@CVirtualDesktopSwitch@@EEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098D70 (-_WindowEnumCallback@CVirtualDesktopSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard.c)
 * Callees:
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000BE78 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z @ 0x18000BF84 (-SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18000C06C (-Create@CAnimatedTransitionVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18000D8A4 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x18000D970 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002CCCC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CVirtualDesktopSwitch::_CreateMonitorSnapshot(
        CVirtualDesktopSwitch *this,
        struct CWindowData *a2,
        struct tagRECT *a3,
        char a4,
        struct CAnimationComponent **a5)
{
  int v5; // eax
  int v8; // eax
  unsigned int v10; // edi
  struct CVisual *RootVisualForDesktop; // r15
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  struct CAnimatedTransitionVisual *v15; // rbp
  int v16; // eax
  __int64 v17; // rax
  CResource **v18; // rcx
  int v19; // eax
  struct CAnimatedTransitionVisual *v22; // [rsp+38h] [rbp-60h] BYREF
  __int64 v23; // [rsp+40h] [rbp-58h]
  unsigned __int64 v24[10]; // [rsp+48h] [rbp-50h] BYREF

  v5 = a3->right - a3->left;
  if ( v5 < 0 )
    v5 = 0;
  v22 = 0LL;
  LODWORD(v23) = v5;
  v8 = a3->bottom - a3->top;
  v24[1] = 0LL;
  if ( v8 < 0 )
    v8 = 0;
  HIDWORD(v23) = v8;
  if ( !(unsigned int)GetDesktopID(1LL, v24) )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, -2147467259, 0x1427u);
    return v10;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                           v24[0]);
  v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v12 )
    v13 = CAnimationComponent::CAnimationComponent(v12, 0LL, *((_DWORD *)a2 + 144) & 0xFFF, 1, (__int64)this);
  else
    v13 = 0LL;
  if ( !v13 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, -2147024882, 0x142Fu);
    return v10;
  }
  v14 = CAnimatedTransitionVisual::Create(
          *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
          &v22);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x1431u);
LABEL_22:
    v15 = v22;
    goto LABEL_23;
  }
  v15 = v22;
  v16 = CAnimatedTransitionVisual::SetVisual((struct CResource **)v22, RootVisualForDesktop, 1, a3);
  v10 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x1432u);
    goto LABEL_23;
  }
  *((_DWORD *)v15 + 180) = *((_DWORD *)this + 18);
  v17 = v23;
  *((_DWORD *)v15 + 181) = 1;
  *((_QWORD *)v15 + 116) = 0LL;
  *((_QWORD *)v15 + 117) = v17;
  CAnimationComponent::SetTransitionVisual((CAnimationComponent *)v13, v15);
  *(struct tagRECT *)(v13 + 88) = *a3;
  if ( !a4
    || (v18 = *(CResource ***)(v13 + 40),
        *(_BYTE *)(v13 + 67) = 1,
        v19 = CAnimatedTransitionVisual::ProcessSnapshotOnVisual(v18, RootVisualForDesktop, a3),
        v10 = v19,
        v19 >= 0) )
  {
    *a5 = (struct CAnimationComponent *)v13;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    goto LABEL_22;
  }
  MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v19, 0x143Du);
LABEL_23:
  CBaseObject::Release((CBaseObject *)v13);
  if ( v15 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v15 + 8));
  return v10;
}
