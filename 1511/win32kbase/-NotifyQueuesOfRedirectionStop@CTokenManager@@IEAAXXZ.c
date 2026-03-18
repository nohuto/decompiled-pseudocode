/*
 * XREFs of ?NotifyQueuesOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00E25C8
 * Callers:
 *     NotifyTokenManagerOfRedirectionStop @ 0x1C00E1A00 (NotifyTokenManagerOfRedirectionStop.c)
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C003D4A4 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ @ 0x1C00E2590 (-NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ.c)
 */

void __fastcall CTokenManager::NotifyQueuesOfRedirectionStop(CTokenManager *this)
{
  CTokenManager *v1; // rbx
  CompositionSurfaceObject **v2; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v1 = g_pTokenManager;
  RestartKey = 0LL;
  CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
  while ( 1 )
  {
    v2 = (CompositionSurfaceObject **)RtlEnumerateGenericTableWithoutSplaying(
                                        (PRTL_GENERIC_TABLE)((char *)v1 + 128),
                                        &RestartKey);
    if ( !v2 )
      break;
    CompositionSurfaceObject::NotifyOfRedirectionStop(*v2);
  }
  *(_QWORD *)v1 = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 64);
}
