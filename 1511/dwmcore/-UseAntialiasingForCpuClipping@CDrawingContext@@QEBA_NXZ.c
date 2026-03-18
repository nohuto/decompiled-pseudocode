/*
 * XREFs of ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x180041A3C
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18003FFB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z @ 0x1800F3968 (-IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180058EE8 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 */

bool __fastcall CDrawingContext::UseAntialiasingForCpuClipping(CDrawingContext *this)
{
  int v1; // r10d
  __int64 v3; // r11

  if ( *((_DWORD *)this + 62)
    || !*(_BYTE *)(76LL * (unsigned int)(*((_DWORD *)this + 176) - 1) + *((_QWORD *)this + 85))
    || CScopedClipStack::HasCpuClipsInScope((CDrawingContext *)((char *)this + 680))
    && *(_BYTE *)(104LL * (unsigned int)(*(_DWORD *)(v3 + 816) - v1) + *(_QWORD *)(v3 + 792) + 96)
    && (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)(*(_QWORD *)v3
                                                                          + 12LL
                                                                          + 76LL
                                                                          * (unsigned int)(*(_DWORD *)(v3 + 24) - v1))) )
  {
    LOBYTE(v1) = 0;
  }
  return v1;
}
