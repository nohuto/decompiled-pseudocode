/*
 * XREFs of ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180005904
 * Callers:
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180003560 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800048A8 (-CreateDesktopSnapshotComponent@CTransitionVisualController@@QEAAJW4DWMTRANSITION_TARGET@@AEBUta.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003A2FC (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180093B24 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 * Callees:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180014640 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::ProcessSnapshotOnVisual(
        CAnimatedTransitionVisual *this,
        struct CVisual *a2,
        const struct tagRECT *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx

  v6 = CAnimatedTransitionVisual::EnsureResources(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x312u);
  }
  else
  {
    v8 = CVisual::RenderRecursive(a2);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x316u);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
      v7 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x317u);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct tagRECT *))(**(_QWORD **)(*((_QWORD *)this + 71)
                                                                                              + 16LL)
                                                                                + 968LL))(
                *(_QWORD *)(*((_QWORD *)this + 71) + 16LL),
                *(unsigned int *)(*((_QWORD *)this + 71) + 24LL),
                a3);
        v7 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x31Cu);
        }
        else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        {
          TemplateEventDescriptor(v11, &UdwmTransitionProcessSnapshotOnVisual_Info);
        }
      }
    }
  }
  return v7;
}
