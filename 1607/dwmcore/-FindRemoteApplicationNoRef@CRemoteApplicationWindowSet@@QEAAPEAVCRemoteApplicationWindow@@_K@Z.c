/*
 * XREFs of ?FindRemoteApplicationNoRef@CRemoteApplicationWindowSet@@QEAAPEAVCRemoteApplicationWindow@@_K@Z @ 0x180161F08
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CRemoteApplicationWindow *__fastcall CRemoteApplicationWindowSet::FindRemoteApplicationNoRef(
        CRemoteApplicationWindowSet *this,
        __int64 a2)
{
  unsigned int v2; // r11d
  __int64 v3; // r9
  unsigned int v4; // r8d
  __int64 v5; // r10

  v2 = *((_DWORD *)this + 10);
  v3 = 0LL;
  v4 = 0;
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 2);
    while ( *(_QWORD *)(*(_QWORD *)(v5 + 8LL * v4) + 16LL) != a2 )
    {
      if ( ++v4 >= v2 )
        return (struct CRemoteApplicationWindow *)v3;
    }
    return *(struct CRemoteApplicationWindow **)(v5 + 8LL * v4);
  }
  return (struct CRemoteApplicationWindow *)v3;
}
