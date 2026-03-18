/*
 * XREFs of ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C006B080
 * Callers:
 *     DCompositionThreadCallout @ 0x1C0011E80 (DCompositionThreadCallout.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0023418 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C006B434 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
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
