/*
 * XREFs of ?IsDisabled@CDirtyRegion@@QEBA_NXZ @ 0x1800DE6B8
 * Callers:
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DE608 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDirtyRegion::IsDisabled(CDirtyRegion *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 1012) || *((_DWORD *)this + 248) )
    return 1LL;
  return result;
}
