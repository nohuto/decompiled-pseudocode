/*
 * XREFs of ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18000CEB0
 * Callers:
 *     ?IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C2E0 (-IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDxHandleBitmapRealization::IsOverlayRequired(CDxHandleBitmapRealization *this)
{
  return *((_DWORD *)this + 35) != 0;
}
