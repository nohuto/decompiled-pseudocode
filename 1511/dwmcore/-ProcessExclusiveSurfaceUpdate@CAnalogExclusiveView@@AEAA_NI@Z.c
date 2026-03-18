/*
 * XREFs of ?ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z @ 0x18013B60C
 * Callers:
 *     ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x18013B2A8 (-ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x18013BB54 (-WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ.c)
 * Callees:
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18002F478 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetFrameStatistics@CAnalogCompositorClient@@QEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x18013B4E0 (-GetFrameStatistics@CAnalogCompositorClient@@QEAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?UpdateFrameStatistics@CAnalogExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x18013BA0C (-UpdateFrameStatistics@CAnalogExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z.c)
 */

bool __fastcall CAnalogExclusiveView::ProcessExclusiveSurfaceUpdate(CAnalogExclusiveView *this, int a2)
{
  int AnalogExclusiveSurfaceUpdates; // eax
  __int64 v5; // rax
  CCompositionSurfaceInfo *v6; // rcx
  int v8; // [rsp+30h] [rbp-158h] BYREF
  _DWORD v9[3]; // [rsp+34h] [rbp-154h] BYREF
  _BYTE v10[216]; // [rsp+40h] [rbp-148h] BYREF
  HGDIOBJ ho; // [rsp+118h] [rbp-70h]
  struct DXGI_FRAME_STATISTICS v12; // [rsp+150h] [rbp-38h] BYREF

  v8 = 0;
  v9[0] = 0;
  CAnalogCompositorClient::GetFrameStatistics(this, &v12);
  *((_BYTE *)this + 59) = 0;
  AnalogExclusiveSurfaceUpdates = NtTokenManagerGetAnalogExclusiveSurfaceUpdates(
                                    (unsigned int)(a2 + 1),
                                    v10,
                                    1LL,
                                    &v8,
                                    v9);
  if ( AnalogExclusiveSurfaceUpdates >= 0 )
  {
    if ( v8 )
    {
      v5 = *((_QWORD *)this + 8);
      if ( v5 )
        v6 = *(CCompositionSurfaceInfo **)(v5 + 440);
      else
        v6 = 0LL;
      CCompositionSurfaceInfo::ProcessSurfaceUpdate(v6, (const struct CSM_SURFACE_UPDATE *)v10);
      if ( (unsigned __int64)ho >= 2 )
        DeleteObject(ho);
      if ( !*((_BYTE *)this + 59) )
      {
        CAnalogExclusiveView::UpdateFrameStatistics(this, &v12);
        NtTokenManagerConfirmOutstandingAnalogToken();
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AnalogExclusiveSurfaceUpdates | 0x10000000, 0x29Eu);
  }
  return *((_BYTE *)this + 59);
}
