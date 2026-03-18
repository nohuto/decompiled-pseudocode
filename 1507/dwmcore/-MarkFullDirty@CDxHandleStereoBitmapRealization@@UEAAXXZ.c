/*
 * XREFs of ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x18014E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800469D0 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::MarkFullDirty(CDxHandleStereoBitmapRealization *this)
{
  CBitmapRealization::MarkFullDirty(this);
  if ( *((_QWORD *)this + 59) )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 62) + 48LL))((char *)this + 496);
}
