/*
 * XREFs of ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1C007DA40
 * Callers:
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C007D970 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::ReclaimSessionGlobalConnection(
        struct DirectComposition::CConnection **a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( DirectComposition::CConnection::s_pSessionConnectionLock )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(DirectComposition::CConnection::s_pSessionConnectionLock);
    if ( DirectComposition::CConnection::s_pSessionConnection )
    {
      if ( *((_DWORD *)DirectComposition::CConnection::s_pSessionConnection + 37) )
      {
        v2 = -1073741790;
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
        *a1 = DirectComposition::CConnection::s_pSessionConnection;
      }
    }
    else
    {
      *a1 = 0LL;
    }
    ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
