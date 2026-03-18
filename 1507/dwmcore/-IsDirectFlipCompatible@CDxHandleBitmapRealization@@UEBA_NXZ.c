/*
 * XREFs of ?IsDirectFlipCompatible@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180007A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDxHandleBitmapRealization::IsDirectFlipCompatible(CDxHandleBitmapRealization *this)
{
  return *((_DWORD *)this + 17) != 0;
}
