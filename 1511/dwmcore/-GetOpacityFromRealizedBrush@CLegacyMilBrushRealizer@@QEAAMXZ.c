/*
 * XREFs of ?GetOpacityFromRealizedBrush@CLegacyMilBrushRealizer@@QEAAMXZ @ 0x18008A6B8
 * Callers:
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18008D1B4 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

float __fastcall CLegacyMilBrushRealizer::GetOpacityFromRealizedBrush(CLegacyMilBrushRealizer *this)
{
  __int64 v1; // r14
  __int64 v2; // rdi
  __int64 v4; // rax

  v1 = *((_QWORD *)this + 12);
  v2 = 0LL;
  if ( !v1 || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 24LL))(*((_QWORD *)this + 12)) != 3 )
    return FLOAT_1_0;
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
    v2 = v4 - 24;
  return *(float *)(v2 + 260);
}
