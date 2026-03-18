/*
 * XREFs of ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x1801904C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x180090360 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::MarkFullDirty(CDxHandleStereoBitmapRealization *this)
{
  CBitmapRealization::MarkFullDirty(this);
  if ( *((_QWORD *)this + 54) )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 57) + 48LL))((char *)this + 456);
}
