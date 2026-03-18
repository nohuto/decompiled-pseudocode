/*
 * XREFs of ?AddUnBindTokenInternal@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@@Z @ 0x1C00E200C
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C0075E50 (NtUnBindCompositionSurface.c)
 * Callees:
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C003CB68 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C003D4A4 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?CreateUnBindToken@CToken@@SAJPEAUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C00E2980 (-CreateUnBindToken@CToken@@SAJPEAUCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CTokenManager::AddUnBindTokenInternal(CTokenManager *this, struct CompositionSurfaceObject *a2)
{
  CTokenManager *v2; // rbx
  int v3; // edi
  struct CToken *v4; // rsi
  struct CToken *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  v2 = g_pTokenManager;
  v3 = CToken::CreateUnBindToken(a2, &v6);
  if ( v3 >= 0 )
  {
    CTokenManager::AcquireTokenManagerLock(v2);
    v4 = v6;
    v3 = CTokenManager::AddTokenToQueue(v2, (struct CompositionSurfaceObject **)v6);
    if ( v3 < 0 && v4 )
      (**(void (__fastcall ***)(struct CToken *, __int64))v4)(v4, 1LL);
    *(_QWORD *)v2 = 0LL;
    ExReleasePushLockExclusiveEx((char *)v2 + 64);
  }
  return (unsigned int)v3;
}
