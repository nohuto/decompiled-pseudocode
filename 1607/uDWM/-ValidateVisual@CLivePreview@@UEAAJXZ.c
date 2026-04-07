/*
 * XREFs of ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180073170
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x18001F024 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003DC64 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x180073720 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x1800737E0 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800738A0 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x1800745A0 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x180075AE0 (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 */

__int64 __fastcall CLivePreview::ValidateVisual(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  CBaseObject *v6; // rcx
  int v7; // eax
  double CurrentOpacity; // xmm0_8
  int v9; // eax
  unsigned int i; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax

  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x695u);
    return v3;
  }
  if ( (*((_DWORD *)this + 20) & 0x2000) != 0 )
  {
    if ( !*((_DWORD *)this + 137)
      && *((_DWORD *)this + 142) == 3
      && (unsigned __int8)EtwEventEnabled(
                            Microsoft_Windows_Dwm_UdwmHandle,
                            &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info)
      && !GetSystemMetrics(8193) )
    {
      CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 141);
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 56) + 72LL) )
    {
      if ( *((_DWORD *)this + 78)
        && (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_UdwmHandle, &UdwmLivePreviewAnimation_Stop) )
      {
        CDesktopManager::SendRoundTripRequest(CDesktopManager::s_pDesktopManagerInstance, (unsigned int *)this + 140);
      }
      if ( *((_DWORD *)this + 142) == 4 )
      {
        CLivePreview::_ClearAnimatedVisuals(this);
        v4 = CLivePreview::_CleanupClonedVisualTree(this);
        v3 = v4;
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x6ACu);
          return v3;
        }
        v5 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
        v3 = v5;
        if ( v5 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x6ADu);
          return v3;
        }
        CLivePreview::_ReleasePerMonitorResources(this);
        v6 = (CBaseObject *)*((_QWORD *)this + 67);
        if ( v6 )
        {
          CBaseObject::Release(v6);
          *((_QWORD *)this + 67) = 0LL;
        }
        v7 = CVisual::ClearInstructions(this);
        v3 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x6B2u);
          return v3;
        }
      }
      *((_DWORD *)this + 137) = 0;
      CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    }
    else
    {
      ++*((_DWORD *)this + 137);
    }
    CurrentOpacity = CLivePreviewTimeline::GetCurrentOpacity(*((CLivePreviewTimeline **)this + 56));
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 57) + 16LL) + 280LL))(
           *(_QWORD *)(*((_QWORD *)this + 57) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 57) + 24LL));
    v3 = v9;
    if ( v9 >= 0 )
    {
      if ( *((_BYTE *)this + 265) )
      {
        for ( i = 0; i < *((_DWORD *)this + 110); ++i )
        {
          v11 = *((_QWORD *)this + 52);
          v12 = 32LL * i;
          if ( *(_BYTE *)(v12 + v11 + 24) )
            CVisual::SetOpacity(*(CVisual **)(v12 + v11), 1.0 - CurrentOpacity);
        }
        CVisual::SetOpacity(*((CVisual **)this + 63), CurrentOpacity);
        CVisual::RenderRecursive(*((CVisual **)this + 61));
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 58) + 16LL) + 280LL))(
              *(_QWORD *)(*((_QWORD *)this + 58) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 58) + 24LL));
      v3 = v13;
      if ( v13 >= 0 )
        *((_DWORD *)this + 20) &= ~0x2000u;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x6D6u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x6C1u);
    }
  }
  return v3;
}
