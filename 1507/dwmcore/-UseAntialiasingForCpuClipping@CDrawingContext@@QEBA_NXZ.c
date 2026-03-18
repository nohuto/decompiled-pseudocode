/*
 * XREFs of ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x18002C7EC
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z @ 0x1800DC308 (-IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180073730 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 */

bool __fastcall CDrawingContext::UseAntialiasingForCpuClipping(CDrawingContext *this)
{
  int v1; // r10d
  __int64 v2; // r11

  if ( *((_DWORD *)this + 62)
    || !*(_BYTE *)(76LL * (unsigned int)(*((_DWORD *)this + 176) - 1) + *((_QWORD *)this + 85))
    || CScopedClipStack::HasCpuClipsInScope((CDrawingContext *)((char *)this + 680))
    && *(_BYTE *)(104LL * (unsigned int)(*(_DWORD *)(v2 + 816) - v1) + *(_QWORD *)(v2 + 792) + 96)
    && (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)(*(_QWORD *)v2
                                                                          + 12LL
                                                                          + 76LL
                                                                          * (unsigned int)(*(_DWORD *)(v2 + 24) - v1))) )
  {
    LOBYTE(v1) = 0;
  }
  return v1;
}
