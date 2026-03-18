/*
 * XREFs of ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C0078540
 * Callers:
 *     DCompositionThreadCallout @ 0x1C0078520 (DCompositionThreadCallout.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00187F4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0018DC8 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 */

void DirectComposition::CConnection::OnDwmRenderThreadExit(void)
{
  DirectComposition::CConnection *v0; // rbx
  unsigned int v1; // edx

  DirectComposition::CConnection::s_pDwmRenderThread = 0LL;
  if ( DirectComposition::CConnection::s_pSessionConnectionLock )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(DirectComposition::CConnection::s_pSessionConnectionLock);
    v0 = DirectComposition::CConnection::s_pSessionConnection;
    if ( DirectComposition::CConnection::s_pSessionConnection )
      _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
    ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
    KeLeaveCriticalRegion();
    if ( v0 )
    {
      DirectComposition::CConnection::Disconnect(v0);
      DirectComposition::CConnection::Release(v0, v1);
    }
  }
}
