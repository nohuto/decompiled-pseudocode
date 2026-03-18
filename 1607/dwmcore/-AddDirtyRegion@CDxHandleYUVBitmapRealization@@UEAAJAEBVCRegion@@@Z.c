/*
 * XREFs of ?AddDirtyRegion@CDxHandleYUVBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180190770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::AddDirtyRegion(
        CDxHandleYUVBitmapRealization *this,
        const struct CRegion *a2)
{
  (*(void (__fastcall **)(CDxHandleYUVBitmapRealization *, const struct CRegion *))(*(_QWORD *)this + 72LL))(this, a2);
  return 0LL;
}
