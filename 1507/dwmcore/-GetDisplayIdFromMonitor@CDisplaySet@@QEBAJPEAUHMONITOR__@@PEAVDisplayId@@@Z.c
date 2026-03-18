/*
 * XREFs of ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18000F9E0
 * Callers:
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x180046928 (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800EC9BC (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x180108A1C (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 *     ?CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x180108FFC (-CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 *     ?EnsureAnalogDisplay@CAnalogRenderTarget@@AEAAJXZ @ 0x1801262F8 (-EnsureAnalogDisplay@CAnalogRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::GetDisplayIdFromMonitor(CDisplaySet *this, HMONITOR a2, struct DisplayId *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int64 v5; // r10
  __int64 v6; // rcx

  LODWORD(v3) = *((_DWORD *)this + 18);
  v4 = 0;
  if ( (_DWORD)v3 )
  {
    v5 = *((_QWORD *)this + 6);
    while ( 1 )
    {
      v3 = (unsigned int)(v3 - 1);
      v6 = *(_QWORD *)(v5 + 8 * v3);
      if ( *(HMONITOR *)(v6 + 32) == a2 )
        break;
      if ( !(_DWORD)v3 )
        goto LABEL_7;
    }
    *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)(v6 + 152) + 852LL);
  }
  else
  {
LABEL_7:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x222u);
  }
  return v4;
}
