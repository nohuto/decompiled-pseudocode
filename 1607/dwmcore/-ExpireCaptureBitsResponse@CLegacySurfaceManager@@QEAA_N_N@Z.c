/*
 * XREFs of ?ExpireCaptureBitsResponse@CLegacySurfaceManager@@QEAA_N_N@Z @ 0x1800378F8
 * Callers:
 *     ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800374D0 (-ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x180073ED4 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CLegacySurfaceManager::ExpireCaptureBitsResponse(CLegacySurfaceManager *this, char a2)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 35) )
  {
    if ( ++*((_DWORD *)this + 72) > 8u )
    {
      ++*((_DWORD *)this + 74);
      a2 = 1;
    }
    if ( a2 )
      return CLegacySurfaceManager::ReleaseCaptureBitsResponse(this);
  }
  return result;
}
