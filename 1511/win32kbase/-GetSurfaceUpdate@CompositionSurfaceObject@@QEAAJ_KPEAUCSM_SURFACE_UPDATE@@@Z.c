/*
 * XREFs of ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0039C4C
 * Callers:
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0039690 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C00E2A30 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA_NPEAIPEAPEAVC.c)
 *     ?ReleaseOutOfFrameDirectFlipTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEAIPEA_NPEAPEAVCToken@@@Z @ 0x1C00E2CD0 (-ReleaseOutOfFrameDirectFlipTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE@@IPEA.c)
 * Callees:
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0039E70 (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C003C4EC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetSurfaceUpdate(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        struct CSM_SURFACE_UPDATE *a3)
{
  int SurfaceUpdate; // ebx

  SurfaceUpdate = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32));
  if ( SurfaceUpdate >= 0 )
  {
    SurfaceUpdate = CCompositionSurface::GetSurfaceUpdate((CompositionSurfaceObject *)((char *)this + 24), a2, a3);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
  return (unsigned int)SurfaceUpdate;
}
