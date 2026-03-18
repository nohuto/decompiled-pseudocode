/*
 * XREFs of ?NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ @ 0x1C00E0640
 * Callers:
 *     ?NotifyCompositionTokensOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00E05B0 (-NotifyCompositionTokensOfRedirectionStop@CTokenManager@@IEAAXXZ.c)
 *     ?NotifyQueuesOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00E0678 (-NotifyQueuesOfRedirectionStop@CTokenManager@@IEAAXXZ.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AF6B8 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00AF724 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?NotifyBuffersOfDwmTermination@CCompositionSurface@@IEAAXXZ @ 0x1C00DF3D4 (-NotifyBuffersOfDwmTermination@CCompositionSurface@@IEAAXXZ.c)
 */

void __fastcall CompositionSurfaceObject::NotifyOfRedirectionStop(CompositionSurfaceObject *this)
{
  if ( (int)CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 32)) >= 0 )
  {
    CCompositionSurface::NotifyBuffersOfDwmTermination((CompositionSurfaceObject *)((char *)this + 24));
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
}
