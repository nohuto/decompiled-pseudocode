/*
 * XREFs of ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18002AC10
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180028480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?IsOpaque@CGdiSpriteBitmap@@WII@EBA_NXZ @ 0x1800C0490 (-IsOpaque@CGdiSpriteBitmap@@WII@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::IsOpaque(CGdiSpriteBitmap *this)
{
  return *((_DWORD *)this + 41) == 3;
}
