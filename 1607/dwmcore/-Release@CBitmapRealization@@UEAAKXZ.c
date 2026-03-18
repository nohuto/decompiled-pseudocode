/*
 * XREFs of ?Release@CBitmapRealization@@UEAAKXZ @ 0x180090270
 * Callers:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180093158 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800935E0 (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x1800992FC (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1800998F8 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180099BD0 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?Release@CBitmapRealization@@WBA@EAAKXZ @ 0x1800C2850 (-Release@CBitmapRealization@@WBA@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@WHA@EAAKXZ @ 0x1800C2860 (-Release@CBitmapRealization@@WHA@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@WHI@EAAKXZ @ 0x1800C2870 (-Release@CBitmapRealization@@WHI@EAAKXZ.c)
 * Callees:
 *     ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x180055330 (--_ECDxHandleBitmapRealization@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapRealization::Release(CBitmapRealization *this)
{
  unsigned __int32 v1; // ebx
  CDxHandleBitmapRealization *(__fastcall *v3)(CDxHandleBitmapRealization *, char); // rax

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
