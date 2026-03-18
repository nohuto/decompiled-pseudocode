/*
 * XREFs of ?ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800F9EC8
 * Callers:
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18004AF20 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18003C97C (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800DE6D8 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 */

void __fastcall CDirtyRegion::ConvertAnyDirtyToFullDirty(CDirtyRegion *this)
{
  int v2; // ebx

  if ( !*((_BYTE *)this + 1012) )
  {
    if ( CDirtyRegion::IsEmpty(this) )
    {
      *((_BYTE *)this + 1013) = 1;
    }
    else
    {
      v2 = *((_DWORD *)this + 248);
      CDirtyRegion::Initialize(this, *((_QWORD *)this + 2), (CDirtyRegion *)((char *)this + 996), 1);
      *((_DWORD *)this + 248) = v2;
    }
  }
}
