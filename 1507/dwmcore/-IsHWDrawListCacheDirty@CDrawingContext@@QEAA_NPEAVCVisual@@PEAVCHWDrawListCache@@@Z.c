/*
 * XREFs of ?IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z @ 0x1800DC308
 * Callers:
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x18002C7EC (-UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18003553C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180073960 (-IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::IsHWDrawListCacheDirty(
        CDrawingContext *this,
        struct CVisual *a2,
        struct CHWDrawListCache *a3)
{
  char v3; // bl
  unsigned __int64 v7; // rbp
  const struct CVisualTree *v8; // rdx
  CBaseMatrix *v9; // r8
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  if ( CCommonRegistryData::m_fDisableDrawListCaching )
    return 1;
  v7 = *((_QWORD *)a3 + 4);
  if ( !v7 )
    return 1;
  if ( *((_DWORD *)a3 + 10) != (*((_DWORD *)this + 62) != 0) )
    return 1;
  if ( *((_BYTE *)a3 + 62) != CDrawingContext::UseAntialiasingForCpuClipping(this) )
    return 1;
  if ( v7 < (unsigned __int64)CVisual::FindTreeData(a2, *((const struct CVisualTree **)this + 691))[31] )
  {
    if ( *((_BYTE *)a3 + 61) )
      return 1;
    if ( *(_BYTE *)(76LL * (unsigned int)(*((_DWORD *)this + 176) - 1) + *((_QWORD *)this + 85)) )
    {
      v9 = (CBaseMatrix *)CVisual::FindTreeData(a2, v8)[25];
      v11 = *(_OWORD *)((char *)a3 + 44);
      if ( CScopedClipStack::IsCpuClippedInScope(
             (CDrawingContext *)((char *)this + 680),
             (const struct MilRectF *)&v11,
             v9) )
      {
        return 1;
      }
    }
  }
  return v3;
}
