/*
 * XREFs of ?NotifyCompositionTokensOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00F485C
 * Callers:
 *     NotifyTokenManagerOfRedirectionStop @ 0x1C00F40F0 (NotifyTokenManagerOfRedirectionStop.c)
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C001A9BC (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ @ 0x1C00F48EC (-NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ.c)
 */

void __fastcall CTokenManager::NotifyCompositionTokensOfRedirectionStop(CTokenManager *this)
{
  CTokenManager *v1; // rdi
  __int64 *i; // rbx
  unsigned int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rcx
  bool j; // cf

  v1 = g_pTokenManager;
  CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
  for ( i = (__int64 *)*((_QWORD *)v1 + 25); i != (__int64 *)((char *)v1 + 200); i = (__int64 *)*i )
  {
    v3 = *((_DWORD *)i + 16);
    v4 = 0LL;
    if ( *((_DWORD *)i + 20) == v3 )
      *((_DWORD *)i + 20) = 0;
    v5 = *((unsigned int *)i + 20);
    for ( j = (unsigned int)v5 < v3; ; j = (unsigned int)v5 < *((_DWORD *)i + 16) )
    {
      if ( j )
        v4 = i[7] + 32 * v5;
      if ( !v4 )
        break;
      CompositionSurfaceObject::NotifyOfRedirectionStop(*(CompositionSurfaceObject **)(v4 + 8));
      ++*((_DWORD *)i + 20);
      v4 = 0LL;
      v5 = *((unsigned int *)i + 20);
    }
  }
  *((_QWORD *)v1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 56, 0LL);
}
