/*
 * XREFs of ?CreateUnBindToken@CToken@@SAJPEAUCompositionSurfaceObject@@PEAPEAV1@@Z @ 0x1C00E2980
 * Callers:
 *     ?AddUnBindTokenInternal@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@@Z @ 0x1C00E200C (-AddUnBindTokenInternal@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ??0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z @ 0x1C003D8C4 (--0CToken@@IEAA@_KPEAUCompositionSurfaceObject@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CToken::CreateUnBindToken(struct CompositionSurfaceObject *a1, struct CToken **a2)
{
  CToken *v4; // rax
  struct CToken *v5; // rbx
  int v6; // edi

  *a2 = 0LL;
  v4 = (CToken *)Win32AllocPool();
  if ( v4 )
    v5 = CToken::CToken(v4, 0LL, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(struct CToken *, __int64))(*(_QWORD *)v5 + 8LL))(v5, 2LL);
    if ( v6 < 0 )
      (**(void (__fastcall ***)(struct CToken *, __int64))v5)(v5, 1LL);
    else
      *a2 = v5;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
