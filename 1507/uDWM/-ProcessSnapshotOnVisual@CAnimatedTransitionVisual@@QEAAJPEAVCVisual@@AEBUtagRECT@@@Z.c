/*
 * XREFs of ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x180004080
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003CA5C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x180091D60 (-OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180092EE4 (-_CreateMonitorSnapshot@CVirtualDesktopSwitch@@AEAAJPEAVCWindowData@@UtagRECT@@_NPEAPEAVCAnimati.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800387B4 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::ProcessSnapshotOnVisual(
        CResource **this,
        struct CVisual *a2,
        const struct tagRECT *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int128 v10; // xmm0
  CResource *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _DWORD v15[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+38h] [rbp-30h]

  v6 = CAnimatedTransitionVisual::EnsureResources((CAnimatedTransitionVisual *)this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x30Eu);
  }
  else
  {
    v8 = CVisual::RenderRecursive(a2);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x312u);
    }
    else
    {
      v9 = MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
      v7 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x313u);
      }
      else
      {
        v10 = (__int128)*a3;
        v11 = this[71];
        v15[0] = 154;
        v15[1] = 0;
        v16 = v10;
        v12 = CResource::Send(v11, v15, 0x18u);
        v7 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x319u);
        }
        else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        {
          TemplateEventDescriptor(v13, &UdwmTransitionProcessSnapshotOnVisual_Info);
        }
      }
    }
  }
  return v7;
}
