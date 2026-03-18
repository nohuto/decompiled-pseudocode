/*
 * XREFs of ?ReleaseOlderInactiveBuffers@CCompositionSurface@@IEAA_NPEAVCCompositionBuffer@@@Z @ 0x1C003A0B8
 * Callers:
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C003A480 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
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

  v2 = (CCompositionSurface *)*((_QWORD *)a2 + 3);
  v3 = (CCompositionSurface *)((char *)this + 64);
  v4 = 0;
  if ( v2 != (CCompositionSurface *)((char *)this + 64) )
  {
    v4 = 1;
    do
    {
      v6 = (char *)v2 - 24;
      v2 = *(CCompositionSurface **)v2;
      v7 = *((_QWORD *)v6 + 3);
      v8 = (char **)*((_QWORD *)v6 + 4);
      if ( *(char **)(v7 + 8) != v6 + 24 || *v8 != v6 + 24 )
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
