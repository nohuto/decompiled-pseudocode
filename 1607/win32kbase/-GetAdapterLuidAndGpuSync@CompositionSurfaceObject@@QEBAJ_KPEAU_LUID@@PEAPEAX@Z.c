/*
 * XREFs of ?GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C001C01C
 * Callers:
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C001C5B4 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001B12C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C001B168 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?GetAdapterLuidAndGpuSync@CCompositionSurface@@IEBAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C001B630 (-GetAdapterLuidAndGpuSync@CCompositionSurface@@IEBAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetAdapterLuidAndGpuSync(
        CompositionSurfaceObject *this,
        unsigned __int64 a2,
        struct _LUID *a3,
        void **a4)
{
  int AdapterLuidAndGpuSync; // ebx

  AdapterLuidAndGpuSync = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 32));
  if ( AdapterLuidAndGpuSync >= 0 )
  {
    AdapterLuidAndGpuSync = CCompositionSurface::GetAdapterLuidAndGpuSync(
                              (CompositionSurfaceObject *)((char *)this + 24),
                              a2,
                              a3,
                              a4);
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
  return (unsigned int)AdapterLuidAndGpuSync;
}
