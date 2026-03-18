/*
 * XREFs of ?ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z @ 0x1C0048B90
 * Callers:
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C0048EA0 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurface::ReleaseOlderInactiveBuffers(
        CCompositionSurface *this,
        struct CCompositionBuffer *a2)
{
  CCompositionSurface *v2; // rbx
  CCompositionSurface *v3; // rsi
  char v4; // di
  char *v6; // rcx
  __int64 v7; // r8
  char **v8; // rdx

  v2 = (CCompositionSurface *)*((_QWORD *)a2 + 2);
  v3 = (CCompositionSurface *)((char *)this + 64);
  v4 = 0;
  if ( v2 != (CCompositionSurface *)((char *)this + 64) )
  {
    v4 = 1;
    do
    {
      v6 = (char *)v2 - 16;
      v2 = *(CCompositionSurface **)v2;
      v7 = *((_QWORD *)v6 + 2);
      v8 = (char **)*((_QWORD *)v6 + 3);
      if ( *(char **)(v7 + 8) != v6 + 16 || *v8 != v6 + 16 )
        __fastfail(3u);
      *v8 = (char *)v7;
      *(_QWORD *)(v7 + 8) = v8;
      if ( v6 )
        (**(void (__fastcall ***)(char *, __int64))v6)(v6, 1LL);
    }
    while ( v2 != v3 );
  }
  return v4;
}
