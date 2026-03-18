/*
 * XREFs of ?MarkFullDirty@CDxHandleDecodeBitmapRealization@@UEAAXXZ @ 0x18015FE10
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800834C0 (-MarkFullDirty@CBitmapRealization@@UEAAXXZ.c)
 */

void __fastcall CDxHandleDecodeBitmapRealization::MarkFullDirty(CDxHandleDecodeBitmapRealization *this)
{
  if ( !*((_BYTE *)this + 328) )
    CBitmapRealization::MarkFullDirty(this);
  CDxHandleDecodeBitmapRealization::InvalidateDecodeBitmap(this, 0);
}
