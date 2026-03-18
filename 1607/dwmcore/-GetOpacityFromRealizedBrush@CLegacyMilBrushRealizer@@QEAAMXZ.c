/*
 * XREFs of ?GetOpacityFromRealizedBrush@CLegacyMilBrushRealizer@@QEAAMXZ @ 0x18002EB90
 * Callers:
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002E570 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CLegacyMilBrushRealizer::GetOpacityFromRealizedBrush(CLegacyMilBrushRealizer *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v5; // rax

  v2 = 0LL;
  v3 = *((_QWORD *)this + 12);
  if ( !v3 || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) != 3 )
    return FLOAT_1_0;
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
    v2 = v5 - 24;
  return *(float *)(v2 + 268);
}
