/*
 * XREFs of ?FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D730
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002DE30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     ?GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x180064060 (-GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18007C9A4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_ffff @ 0x180125254 (Template_ffff.c)
 */

__int64 __fastcall CD2DContext::FillRectangles(
        struct ID2D1PrivateCompositorRenderer **this,
        CDrawingContext *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v10; // rbp
  void (__fastcall *v12)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdi
  struct D2D_MATRIX_3X2_F v18; // [rsp+30h] [rbp-48h] BYREF

  v10 = a4;
  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw((CD2DContext *)this);
  v12 = *(void (__fastcall **)(CDrawingContext *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)a2 + 8LL);
  if ( v12 == CDrawingContext::GetWorldTransform3x2 )
    CDrawingContext::GetWorldTransform3x2(a2, &v18);
  else
    v12(a2, &v18);
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)this[5] + 240LL))(
    this[5],
    &v18);
  if ( a8 != *((_DWORD *)this + 65) )
  {
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _QWORD))(*(_QWORD *)this[5] + 624LL))(this[5], a8);
    *((_DWORD *)this + 65) = a8;
  }
  if ( a7 != *((_DWORD *)this + 64) )
  {
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _QWORD))(*(_QWORD *)this[5] + 256LL))(this[5], a7);
    *((_DWORD *)this + 64) = a7;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_ffff(
      v13,
      (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
      v14,
      v15,
      COERCE_UNSIGNED_INT((float)*(int *)(a6 + 8)),
      COERCE_UNSIGNED_INT((float)*(int *)(a6 + 12)));
  if ( (_DWORD)v10 )
  {
    v16 = v10;
    do
    {
      (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, __int64, __int64))(*(_QWORD *)this[5] + 136LL))(
        this[5],
        a3,
        a5);
      a3 += 16LL;
      --v16;
    }
    while ( v16 );
  }
  return 0LL;
}
