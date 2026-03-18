/*
 * XREFs of ?AddUnBindTokenInternal@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@@Z @ 0x1C00E00BC
 * Callers:
 *     NtUnBindCompositionSurface @ 0x1C0012A50 (NtUnBindCompositionSurface.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C00A4468 (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 *     ?CreateUnBindToken@CToken@@SAJPEAUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C00E0990 (-CreateUnBindToken@CToken@@SAJPEAUCompositionSurfaceObject@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CTokenManager::AddUnBindTokenInternal(CTokenManager *this, struct CompositionSurfaceObject *a2)
{
  CTokenManager *v2; // rbp
  int v3; // ebx
  struct CToken *v4; // rdi
  struct CToken *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = this;
  v2 = g_pTokenManager;
  v3 = CToken::CreateUnBindToken(a2, &v6);
  if ( v3 >= 0 )
  {
    ExAcquirePushLockExclusiveEx((char *)v2 + 56, 0LL);
    v4 = v6;
    v3 = CTokenManager::AddTokenToQueue(v2, (struct CompositionSurfaceObject **)v6);
    if ( v3 < 0 && v4 )
      (**(void (__fastcall ***)(struct CToken *, __int64))v4)(v4, 1LL);
    ExReleasePushLockExclusiveEx((char *)v2 + 56, 0LL);
  }
  return (unsigned int)v3;
}
