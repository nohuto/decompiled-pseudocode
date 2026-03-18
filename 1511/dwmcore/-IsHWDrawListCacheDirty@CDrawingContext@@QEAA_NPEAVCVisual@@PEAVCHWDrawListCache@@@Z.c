/*
 * XREFs of ?IsHWDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCHWDrawListCache@@@Z @ 0x1800F3968
 * Callers:
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180015B54 (-IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x180041A3C (-UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
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
  if ( v7 < (unsigned __int64)CVisual::FindTreeData(a2, *((const struct CVisualTree **)this + 695))[31] )
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
