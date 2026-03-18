/*
 * XREFs of ?ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z @ 0x1801657E8
 * Callers:
 *     ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x180165444 (-ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x180165D2C (-WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180099454 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x1801656F4 (-GetExclusiveSurfaceInfo@CAnalogExclusiveView@@AEAAPEAVCCompositionSurfaceInfo@@XZ.c)
 *     ?UpdateFrameStatistics@CAnalogExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x180165B94 (-UpdateFrameStatistics@CAnalogExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z.c)
 */

bool __fastcall CAnalogExclusiveView::ProcessExclusiveSurfaceUpdate(CAnalogExclusiveView *this, int a2)
{
  int AnalogExclusiveSurfaceUpdates; // eax
  CCompositionSurfaceInfo *ExclusiveSurfaceInfo; // rax
  int v7; // [rsp+30h] [rbp-118h] BYREF
  _DWORD v8[3]; // [rsp+34h] [rbp-114h] BYREF
  _BYTE v9[32]; // [rsp+40h] [rbp-108h] BYREF
  HGDIOBJ ho; // [rsp+60h] [rbp-E8h]
  DXGI_FRAME_STATISTICS v11; // [rsp+110h] [rbp-38h] BYREF

  v7 = 0;
  v8[0] = 0;
  (*(void (__fastcall **)(_QWORD, DXGI_FRAME_STATISTICS *))(*(_QWORD *)xmmword_1801F03A0 + 88LL))(
    xmmword_1801F03A0,
    &v11);
  *((_BYTE *)this + 131) = 0;
  AnalogExclusiveSurfaceUpdates = NtTokenManagerGetAnalogExclusiveSurfaceUpdates(
                                    (unsigned int)(a2 + 1),
                                    v9,
                                    1LL,
                                    &v7,
                                    v8);
  if ( AnalogExclusiveSurfaceUpdates >= 0 )
  {
    if ( v7 )
    {
      ExclusiveSurfaceInfo = CAnalogExclusiveView::GetExclusiveSurfaceInfo(this);
      CCompositionSurfaceInfo::ProcessSurfaceUpdate(ExclusiveSurfaceInfo, (const struct CSM_SURFACE_UPDATE *)v9);
      if ( (unsigned __int64)ho >= 2 )
        DeleteObject(ho);
      if ( !*((_BYTE *)this + 131) )
      {
        CAnalogExclusiveView::UpdateFrameStatistics(this, &v11);
        NtTokenManagerConfirmOutstandingAnalogToken();
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AnalogExclusiveSurfaceUpdates | 0x10000000, 0x2A0u);
  }
  return *((_BYTE *)this + 131);
}
