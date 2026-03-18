/*
 * XREFs of ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0048DA8
 * Callers:
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C00487D0 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?UpdateActiveBufferDirtyRegion@CCompositionSurface@@IEAAJ_KPEAVCRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C0048A48 (-UpdateActiveBufferDirtyRegion@CCompositionSurface@@IEAAJ_KPEAVCRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@@Z @ 0x1C0048F1C (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@@Z.c)
 *     ?DestParametersChanged@CCompositionSurface@@QEAA_N_KIIIUtagRECT@@@Z @ 0x1C0048F88 (-DestParametersChanged@CCompositionSurface@@QEAA_N_KIIIUtagRECT@@@Z.c)
 *     ?NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_K0_N@Z @ 0x1C004901C (-NotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_K0_N@Z.c)
 *     ?SourceParametersChanged@CCompositionSurface@@QEAA_N_KW4D3DDDI_COLOR_SPACE_TYPE@@UtagRECT@@@Z @ 0x1C0049094 (-SourceParametersChanged@CCompositionSurface@@QEAA_N_KW4D3DDDI_COLOR_SPACE_TYPE@@UtagRECT@@@Z.c)
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z @ 0x1C0049114 (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0049184 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C004CBB8 (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ?HasActiveBinding@CompositionSurfaceObject@@QEAAJPEA_N@Z @ 0x1C00A3E6C (-HasActiveBinding@CompositionSurfaceObject@@QEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CCompositionBuffer *__fastcall CCompositionSurface::GetActiveBuffer(CCompositionSurface *this)
{
  struct CCompositionBuffer *result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    v2 = *((_QWORD *)this + 8) - 16LL;
    if ( *(_BYTE *)(v2 + 32) )
      return (struct CCompositionBuffer *)v2;
  }
  return result;
}
