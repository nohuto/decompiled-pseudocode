/*
 * XREFs of ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0048D80
 * Callers:
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0048838 (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0049248 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     NtSetCompositionSurfaceOutOfFrameDirectFlipNotification @ 0x1C00DF1B0 (NtSetCompositionSurfaceOutOfFrameDirectFlipNotification.c)
 *     ?SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IPEBU_LUID@@IPEAH@Z @ 0x1C00DF488 (-SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IPEBU_LUID@@IPEAH@Z.c)
 *     ?GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJPEA_N0@Z @ 0x1C00E050C (-GetOutOfFrameDirectFlipNotification@CompositionSurfaceObject@@QEAAJPEA_N0@Z.c)
 * Callees:
 *     <none>
 */

struct CCompositionBuffer *__fastcall CCompositionSurface::GetRenderingBuffer(CCompositionSurface *this)
{
  struct CCompositionBuffer *result; // rax
  __int64 i; // rdx

  result = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    for ( i = *((_QWORD *)this + 9);
          (CCompositionSurface *)i != (CCompositionSurface *)((char *)this + 64) && *(_BYTE *)(i + 17);
          i = *(_QWORD *)(i + 8) )
    {
      result = (struct CCompositionBuffer *)(i - 16);
    }
  }
  return result;
}
