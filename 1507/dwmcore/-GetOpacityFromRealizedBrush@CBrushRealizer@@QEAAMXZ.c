/*
 * XREFs of ?GetOpacityFromRealizedBrush@CBrushRealizer@@QEAAMXZ @ 0x180081574
 * Callers:
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x1800820A4 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

float __fastcall CBrushRealizer::GetOpacityFromRealizedBrush(CBrushRealizer *this)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  __int64 v5; // rax

  v1 = *((_QWORD *)this + 12);
  v2 = 0LL;
  if ( !v1 || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 24LL))(*((_QWORD *)this + 12)) != 3 )
    return FLOAT_1_0;
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
    v2 = v5 - 24;
  return *(float *)(v2 + 260);
}
