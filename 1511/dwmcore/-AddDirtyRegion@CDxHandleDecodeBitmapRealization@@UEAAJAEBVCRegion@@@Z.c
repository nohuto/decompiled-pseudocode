/*
 * XREFs of ?AddDirtyRegion@CDxHandleDecodeBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18015E520
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
