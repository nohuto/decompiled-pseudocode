/*
 * XREFs of ?GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ @ 0x1800873F0
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800617E0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     <none>
 */

struct CResource *__fastcall CGdiSpriteBitmap::GetResource(CGdiSpriteBitmap *this)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( this != (CGdiSpriteBitmap *)72 )
    return (CGdiSpriteBitmap *)((char *)this - 56);
  return (struct CResource *)v1;
}
