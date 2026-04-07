/*
 * XREFs of ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180071390
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x180021D30 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003D030 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x180071930 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x1800719F0 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180071AB0 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x180072788 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x180073C50 (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 */

__int64 __fastcall CLivePreview::ValidateVisual(CLivePreview *this, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  int v6; // eax
  CBaseObject *v7; // rcx
  int v8; // eax
  CLivePreviewTimeline *v9; // rcx
  double CurrentOpacity; // xmm0_8
  CResource *v11; // rcx
  int v12; // eax
  unsigned int i; // edi
  __int64 v14; // rax
  __int64 v15; // rcx
  CResource *v16; // rcx
  int v17; // eax
  __m128i si128; // [rsp+30h] [rbp-38h] BYREF

  v3 = CVisual::ValidateVisual(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
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
          v5 = CLivePreview::_CleanupClonedVisualTree(this);
          v4 = v5;
          if ( v5 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x689u);
            return v4;
          }
          v6 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
          v4 = v6;
          if ( v6 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x68Au);
            return v4;
          }
          CLivePreview::_ReleasePerMonitorResources(this);
          v7 = (CBaseObject *)*((_QWORD *)this + 67);
          if ( v7 )
          {
            CBaseObject::Release(v7);
            *((_QWORD *)this + 67) = 0LL;
          }
          v8 = CVisual::ClearInstructions(this);
          v4 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x68Fu);
            return v4;
          }
        }
        *((_DWORD *)this + 137) = 0;
        CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
      }
      else
      {
        ++*((_DWORD *)this + 137);
      }
      v9 = (CLivePreviewTimeline *)*((_QWORD *)this + 56);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      CurrentOpacity = CLivePreviewTimeline::GetCurrentOpacity(v9);
      v11 = (CResource *)*((_QWORD *)this + 57);
      *(double *)&si128.m128i_i64[1] = CurrentOpacity;
      v12 = CResource::Send(v11, &si128, 0x10u);
      v4 = v12;
      if ( v12 >= 0 )
      {
        if ( *((_BYTE *)this + 265) )
        {
          for ( i = 0; i < *((_DWORD *)this + 110); ++i )
          {
            v14 = *((_QWORD *)this + 52);
            v15 = 32LL * i;
            if ( *(_BYTE *)(v15 + v14 + 24) )
              CVisual::SetOpacity(*(CVisual **)(v15 + v14), 1.0 - *(double *)&si128.m128i_i64[1]);
          }
          CVisual::SetOpacity(*((CVisual **)this + 63), *(double *)&si128.m128i_i64[1]);
          CVisual::RenderRecursive(*((CVisual **)this + 61));
        }
        v16 = (CResource *)*((_QWORD *)this + 58);
        *(double *)&si128.m128i_i64[1] = 1.0 - *(double *)&si128.m128i_i64[1];
        v17 = CResource::Send(v16, &si128, 0x10u);
        v4 = v17;
        if ( v17 >= 0 )
          *((_DWORD *)this + 20) &= ~0x2000u;
        else
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x6B1u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x69Du);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x672u);
  }
  return v4;
}
