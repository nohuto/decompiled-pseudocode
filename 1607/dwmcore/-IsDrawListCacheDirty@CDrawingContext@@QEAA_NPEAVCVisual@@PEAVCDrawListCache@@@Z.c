/*
 * XREFs of ?IsDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCDrawListCache@@@Z @ 0x1801075A8
 * Callers:
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180004E98 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z @ 0x180121C8C (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x180122310 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x18006A4C0 (-UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180111FC8 (-IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 */

char __fastcall CDrawingContext::IsDrawListCacheDirty(
        CDrawingContext *this,
        struct CVisual *a2,
        struct CDrawListCache *a3)
{
  char v3; // di
  char v7; // bl
  const struct CVisualTree *v8; // rbx
  struct _LIST_ENTRY *TreeData; // rax
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  if ( CCommonRegistryData::m_fDisableDrawListCaching || !*((_QWORD *)a3 + 3) )
    return 1;
  if ( (*((_BYTE *)a3 + 60) & 2) != 0 && *(_BYTE *)(*((_QWORD *)this + 3) + 1240LL) != ((*((_BYTE *)a3 + 60) & 4) != 0)
    || *((_DWORD *)a3 + 17) != (*((_DWORD *)this + 82) != 0) )
  {
    return 1;
  }
  if ( *((_DWORD *)a3 + 4) )
    return v3;
  if ( *((_BYTE *)a3 + 72) )
  {
    v7 = *((_BYTE *)a3 + 73);
    if ( v7 != CDrawingContext::UseAntialiasingForCpuClipping(this) )
      return 1;
  }
  v8 = (const struct CVisualTree *)*((_QWORD *)this + 781);
  if ( (struct _LIST_ENTRY *)*((_QWORD *)a3 + 3) >= CVisual::FindTreeData(a2, v8)[12].Blink )
    return v3;
  if ( *((_BYTE *)a3 + 72) )
    return 1;
  if ( *(_BYTE *)(*((_QWORD *)this + 114) + 80LL * (unsigned int)(*((_DWORD *)this + 234) - 1)) )
  {
    v11 = *(_OWORD *)((char *)a3 + 44);
    TreeData = CVisual::FindTreeData(a2, v8);
    return (unsigned __int8)CScopedClipStack::IsCpuClippedInScope((char *)this + 912, &v11, TreeData[9].Blink) != 0;
  }
  return v3;
}
