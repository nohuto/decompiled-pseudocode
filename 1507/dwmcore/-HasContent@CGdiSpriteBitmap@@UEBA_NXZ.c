/*
 * XREFs of ?HasContent@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18007EA80
 * Callers:
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18001FC34 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18007B820 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?HasContent@CGdiSpriteBitmap@@WEA@EBA_NXZ @ 0x18009A7B0 (-HasContent@CGdiSpriteBitmap@@WEA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CGdiSpriteBitmap::HasContent(CGdiSpriteBitmap *this)
{
  return *((_QWORD *)this + 7) != 0LL;
}
