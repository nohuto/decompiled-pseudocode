/*
 * XREFs of ?NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ @ 0x1C00E2590
 * Callers:
 *     ?NotifyCompositionTokensOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00E2504 (-NotifyCompositionTokensOfRedirectionStop@CTokenManager@@IEAAXXZ.c)
 *     ?NotifyQueuesOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00E25C8 (-NotifyQueuesOfRedirectionStop@CTokenManager@@IEAAXXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C003C548 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C003C584 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?NotifyBuffersOfDwmTermination@CCompositionSurface@@IEAAXXZ @ 0x1C00E126C (-NotifyBuffersOfDwmTermination@CCompositionSurface@@IEAAXXZ.c)
 */

void __fastcall CompositionSurfaceObject::NotifyOfRedirectionStop(CompositionSurfaceObject *this)
{
  if ( (int)CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 32)) >= 0 )
  {
    CCompositionSurface::NotifyBuffersOfDwmTermination((CompositionSurfaceObject *)((char *)this + 24));
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
}
