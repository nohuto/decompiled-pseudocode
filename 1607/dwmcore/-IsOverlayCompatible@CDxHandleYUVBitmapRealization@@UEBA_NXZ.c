/*
 * XREFs of ?IsOverlayCompatible@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x180191340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::IsOverlayCompatible(CDxHandleYUVBitmapRealization *this)
{
  return (*((unsigned __int8 *)this + 132) >> 6) & 1;
}
