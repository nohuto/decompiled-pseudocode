/*
 * XREFs of ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18007EA90
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18007B820 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?IsOpaque@CGdiSpriteBitmap@@WEA@EBA_NXZ @ 0x18009A7F0 (-IsOpaque@CGdiSpriteBitmap@@WEA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::IsOpaque(CGdiSpriteBitmap *this)
{
  return *((_DWORD *)this + 23) == 3;
}
