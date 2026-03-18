/*
 * XREFs of ?NotifyCompositionTokensOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00E05B0
 * Callers:
 *     NotifyTokenManagerOfRedirectionStop @ 0x1C00DFAB0 (NotifyTokenManagerOfRedirectionStop.c)
 * Callees:
 *     ?NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ @ 0x1C00E0640 (-NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ.c)
 */

void __fastcall CTokenManager::NotifyCompositionTokensOfRedirectionStop(CTokenManager *this)
{
  CTokenManager *v1; // rbx
  char *v2; // rsi
  char *v3; // rdi
  char *i; // rbx
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rcx
  bool j; // cf

  v1 = g_pTokenManager;
  v2 = (char *)g_pTokenManager + 56;
  ExAcquirePushLockExclusiveEx((char *)g_pTokenManager + 56, 0LL);
  v3 = (char *)v1 + 168;
  for ( i = (char *)*((_QWORD *)v1 + 21); i != v3; i = *(char **)i )
  {
    v5 = *((_DWORD *)i + 16);
    v6 = 0LL;
    if ( *((_DWORD *)i + 20) == v5 )
      *((_DWORD *)i + 20) = 0;
    v7 = *((unsigned int *)i + 20);
    for ( j = (unsigned int)v7 < v5; ; j = (unsigned int)v7 < *((_DWORD *)i + 16) )
    {
      if ( j )
        v6 = *((_QWORD *)i + 7) + 32 * v7;
      if ( !v6 )
        break;
      CompositionSurfaceObject::NotifyOfRedirectionStop(*(CompositionSurfaceObject **)(v6 + 8));
      ++*((_DWORD *)i + 20);
      v6 = 0LL;
      v7 = *((unsigned int *)i + 20);
    }
  }
  ExReleasePushLockExclusiveEx(v2, 0LL);
}
