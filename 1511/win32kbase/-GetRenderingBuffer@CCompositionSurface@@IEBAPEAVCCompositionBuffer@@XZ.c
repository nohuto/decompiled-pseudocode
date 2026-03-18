/*
 * XREFs of ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C003A324
 * Callers:
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0039E70 (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C003A760 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     NtSetCompositionSurfaceOutOfFrameDirectFlipNotification @ 0x1C00E0FE0 (NtSetCompositionSurfaceOutOfFrameDirectFlipNotification.c)
 *     ?GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJPEA_N0@Z @ 0x1C00E2460 (-GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJPEA_N0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

struct CCompositionBuffer *__fastcall CCompositionSurface::GetRenderingBuffer(CCompositionSurface *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char *v3; // rsi
  __int64 v4; // r14

  v1 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    v2 = *((_QWORD *)this + 9);
    v3 = (char *)this + 64;
    while ( (char *)v2 != v3 )
    {
      v4 = v2 - 24;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 24) + 16LL))(v2 - 24) )
        break;
      v2 = *(_QWORD *)(v2 + 8);
      v1 = v4;
    }
  }
  return (struct CCompositionBuffer *)v1;
}
