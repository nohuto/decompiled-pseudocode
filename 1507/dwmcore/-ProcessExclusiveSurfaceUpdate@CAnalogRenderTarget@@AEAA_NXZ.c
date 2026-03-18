/*
 * XREFs of ?ProcessExclusiveSurfaceUpdate@CAnalogRenderTarget@@AEAA_NXZ @ 0x180126970
 * Callers:
 *     ?RegisterSwapChain@CAnalogRenderTarget@@AEAAJXZ @ 0x180126D48 (-RegisterSwapChain@CAnalogRenderTarget@@AEAAJXZ.c)
 *     ?RenderExclusive@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x18012727C (-RenderExclusive@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180086B28 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RecordOutOfFrameDirectFlipStats@CCompositionSurfaceInfo@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x180119548 (-RecordOutOfFrameDirectFlipStats@CCompositionSurfaceInfo@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?GetExclusiveSurfaceInfo@CAnalogRenderTarget@@AEAAPEAVCCompositionSurfaceInfo@@XZ @ 0x180126514 (-GetExclusiveSurfaceInfo@CAnalogRenderTarget@@AEAAPEAVCCompositionSurfaceInfo@@XZ.c)
 */

bool __fastcall CAnalogRenderTarget::ProcessExclusiveSurfaceUpdate(CAnalogRenderTarget *this)
{
  int AnalogExclusiveSurfaceUpdates; // eax
  bool v3; // zf
  struct CCompositionSurfaceInfo *ExclusiveSurfaceInfo; // rbx
  int v6; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v7[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v8[216]; // [rsp+40h] [rbp-C0h] BYREF
  HGDIOBJ ho; // [rsp+118h] [rbp+18h]
  struct DXGI_FRAME_STATISTICS v10; // [rsp+150h] [rbp+50h] BYREF

  v6 = 0;
  v7[0] = 0;
  (*(void (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS *))(*(_QWORD *)qword_180195FD0 + 88LL))(
    qword_180195FD0,
    &v10);
  AnalogExclusiveSurfaceUpdates = NtTokenManagerGetAnalogExclusiveSurfaceUpdates(
                                    v10.SyncRefreshCount + 1,
                                    v8,
                                    1LL,
                                    &v6,
                                    v7);
  if ( AnalogExclusiveSurfaceUpdates < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, AnalogExclusiveSurfaceUpdates | 0x10000000, 0x531u);
LABEL_6:
    v3 = v6 == 0;
    return !v3;
  }
  v3 = v6 == 0;
  if ( v6 )
  {
    ExclusiveSurfaceInfo = CAnalogRenderTarget::GetExclusiveSurfaceInfo(this);
    CCompositionSurfaceInfo::ProcessSurfaceUpdate(ExclusiveSurfaceInfo, (unsigned __int64)v8);
    *((_BYTE *)this + 216) = 1;
    v10.PresentCount = *((_DWORD *)ExclusiveSurfaceInfo + 20);
    CCompositionSurfaceInfo::RecordOutOfFrameDirectFlipStats(
      ExclusiveSurfaceInfo,
      *((_QWORD *)ExclusiveSurfaceInfo + 7),
      &v10);
    if ( (unsigned __int64)ho >= 2 )
      DeleteObject(ho);
    goto LABEL_6;
  }
  return !v3;
}
