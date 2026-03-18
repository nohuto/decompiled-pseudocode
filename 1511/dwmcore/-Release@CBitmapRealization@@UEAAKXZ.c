/*
 * XREFs of ?Release@CBitmapRealization@@UEAAKXZ @ 0x180083380
 * Callers:
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x18002E054 (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18002E6E4 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18002F478 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x18006C508 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x18006C85C (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?Release@CBitmapRealization@@WBA@EAAKXZ @ 0x1800BF3B0 (-Release@CBitmapRealization@@WBA@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@WHA@EAAKXZ @ 0x1800BF3C0 (-Release@CBitmapRealization@@WHA@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@WHI@EAAKXZ @ 0x1800BF3D0 (-Release@CBitmapRealization@@WHI@EAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x180032EC0 (--_ECDxHandleBitmapRealization@@MEAAPEAXI@Z.c)
 */

__int64 __fastcall CBitmapRealization::Release(CBitmapRealization *this)
{
  unsigned __int32 v1; // edi
  CDxHandleBitmapRealization *(__fastcall *v3)(CDxHandleBitmapRealization *, char); // rsi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(CDxHandleBitmapRealization *(__fastcall **)(CDxHandleBitmapRealization *, char))(*(_QWORD *)this + 24LL);
    if ( v3 == CDxHandleBitmapRealization::`vector deleting destructor' )
      CDxHandleBitmapRealization::`vector deleting destructor'(this, 1);
    else
      v3(this, 1);
  }
  return v1;
}
