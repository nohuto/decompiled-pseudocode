/*
 * XREFs of ?HasContent@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18005C4F0
 * Callers:
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x180055AB8 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ?HasContent@CGdiSpriteBitmap@@WEA@EBA_NXZ @ 0x1800BD3F0 (-HasContent@CGdiSpriteBitmap@@WEA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CGdiSpriteBitmap::HasContent(CGdiSpriteBitmap *this)
{
  return *((_QWORD *)this + 7) != 0LL;
}
