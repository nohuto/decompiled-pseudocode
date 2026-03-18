/*
 * XREFs of ?GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ @ 0x18002ACC0
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180028480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     <none>
 */

struct CResource *__fastcall CGdiSpriteBitmap::GetResource(CGdiSpriteBitmap *this)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( this != (CGdiSpriteBitmap *)144 )
    return (CGdiSpriteBitmap *)((char *)this - 128);
  return (struct CResource *)v1;
}
