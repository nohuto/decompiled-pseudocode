/*
 * XREFs of ?NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ @ 0x1C00F48EC
 * Callers:
 *     ?NotifyCompositionTokensOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00F485C (-NotifyCompositionTokensOfRedirectionStop@CTokenManager@@IEAAXXZ.c)
 *     ?NotifyQueuesOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00F4924 (-NotifyQueuesOfRedirectionStop@CTokenManager@@IEAAXXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001B12C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C001B1C4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?NotifyBuffersOfDwmTermination@CCompositionSurface@@IEAAXXZ @ 0x1C00F36F4 (-NotifyBuffersOfDwmTermination@CCompositionSurface@@IEAAXXZ.c)
 */

void __fastcall CompositionSurfaceObject::NotifyOfRedirectionStop(CompositionSurfaceObject *this)
{
  if ( (int)CPushLock::AcquireLockExclusive((CompositionSurfaceObject *)((char *)this + 32)) >= 0 )
  {
    CCompositionSurface::NotifyBuffersOfDwmTermination((CompositionSurfaceObject *)((char *)this + 24));
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 32));
  }
}
