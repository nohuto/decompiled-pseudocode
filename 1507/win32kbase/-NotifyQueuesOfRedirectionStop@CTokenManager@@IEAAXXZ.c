/*
 * XREFs of ?NotifyQueuesOfRedirectionStop@CTokenManager@@IEAAXXZ @ 0x1C00E0678
 * Callers:
 *     NotifyTokenManagerOfRedirectionStop @ 0x1C00DFAB0 (NotifyTokenManagerOfRedirectionStop.c)
 * Callees:
 *     ?NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ @ 0x1C00E0640 (-NotifyOfRedirectionStop@CompositionSurfaceObject@@QEAAXXZ.c)
 */

void __fastcall CTokenManager::NotifyQueuesOfRedirectionStop(CTokenManager *this)
{
  CTokenManager *v1; // rbx
  CompositionSurfaceObject **v2; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v1 = g_pTokenManager;
  RestartKey = 0LL;
  ExAcquirePushLockExclusiveEx((char *)g_pTokenManager + 56, 0LL);
  while ( 1 )
  {
    v2 = (CompositionSurfaceObject **)RtlEnumerateGenericTableWithoutSplaying(
                                        (PRTL_GENERIC_TABLE)((char *)v1 + 96),
                                        &RestartKey);
    if ( !v2 )
      break;
    CompositionSurfaceObject::NotifyOfRedirectionStop(*v2);
  }
  ExReleasePushLockExclusiveEx((char *)v1 + 56, 0LL);
}
