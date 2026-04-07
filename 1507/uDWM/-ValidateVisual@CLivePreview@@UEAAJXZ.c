/*
 * XREFs of ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180068310
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18001281C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x18001C7E4 (-SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001D130 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x180068BB4 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x180068C74 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180068D34 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x180069FFC (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x18006B8B0 (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 */

__int64 __fastcall CLivePreview::ValidateVisual(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  CBaseObject *v6; // rcx
  int v7; // eax
  CLivePreviewTimeline *v8; // rcx
  double CurrentOpacity; // xmm0_8
  CResource *v10; // rcx
  int v11; // eax
  unsigned int i; // edi
  __int64 v13; // rax
  __int64 v14; // rcx
  CResource *v15; // rcx
  int v16; // eax
  __m128i si128; // [rsp+30h] [rbp-38h] BYREF

  v2 = CVisual::ValidateVisual(this);
  v3 = v2;
  if ( v2 >= 0 )
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
          v4 = CLivePreview::_CleanupClonedVisualTree(this);
          v3 = v4;
          if ( v4 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x68Bu);
            return v3;
          }
          v5 = CLivePreview::_ClearAnimationOpaqueVisuals(this);
          v3 = v5;
          if ( v5 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x68Cu);
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
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x691u);
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
      v8 = (CLivePreviewTimeline *)*((_QWORD *)this + 56);
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      CurrentOpacity = CLivePreviewTimeline::GetCurrentOpacity(v8);
      v10 = (CResource *)*((_QWORD *)this + 57);
      *(double *)&si128.m128i_i64[1] = CurrentOpacity;
      v11 = CResource::Send(v10, &si128, 0x10u);
      v3 = v11;
      if ( v11 >= 0 )
      {
        if ( *((_BYTE *)this + 265) )
        {
          for ( i = 0; i < *((_DWORD *)this + 110); ++i )
          {
            v13 = *((_QWORD *)this + 52);
            v14 = 32LL * i;
            if ( *(_BYTE *)(v14 + v13 + 24) )
              CVisual::SetOpacity(*(CVisual **)(v14 + v13), 1.0 - *(double *)&si128.m128i_i64[1]);
          }
          CVisual::SetOpacity(*((CVisual **)this + 63), *(double *)&si128.m128i_i64[1]);
          CVisual::RenderRecursive(*((CVisual **)this + 61));
        }
        v15 = (CResource *)*((_QWORD *)this + 58);
        *(double *)&si128.m128i_i64[1] = 1.0 - *(double *)&si128.m128i_i64[1];
        v16 = CResource::Send(v15, &si128, 0x10u);
        v3 = v16;
        if ( v16 >= 0 )
          *((_DWORD *)this + 20) &= ~0x2000u;
        else
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x6B3u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x69Fu);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x674u);
  }
  return v3;
}
