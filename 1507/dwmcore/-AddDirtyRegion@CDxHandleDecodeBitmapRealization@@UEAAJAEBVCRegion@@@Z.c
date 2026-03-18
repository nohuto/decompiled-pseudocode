/*
 * XREFs of ?AddDirtyRegion@CDxHandleDecodeBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18014FA50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDxHandleDecodeBitmapRealization::AddDirtyRegion(
        CDxHandleDecodeBitmapRealization *this,
        const struct CRegion *a2)
{
  (*(void (__fastcall **)(CDxHandleDecodeBitmapRealization *, const struct CRegion *))(*(_QWORD *)this + 72LL))(
    this,
    a2);
  return 0LL;
}
