/*
 * XREFs of GreDeleteObject @ 0x1C003A290
 * Callers:
 *     UserSetDCVisRgn @ 0x1C0036CE0 (UserSetDCVisRgn.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C00546D8 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     CleanupGDI @ 0x1C0055F7C (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0056318 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0056338 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     UserValidateCopyRgn @ 0x1C0057790 (UserValidateCopyRgn.c)
 *     DestroyCacheDC @ 0x1C005A3A0 (DestroyCacheDC.c)
 *     xxxResetDisplayDevice @ 0x1C005C4B0 (xxxResetDisplayDevice.c)
 *     DestroyMonitor @ 0x1C00760A0 (DestroyMonitor.c)
 *     DeleteMaybeSpecialRgn @ 0x1C0077A20 (DeleteMaybeSpecialRgn.c)
 *     bInitBRUSHOBJ @ 0x1C0155E74 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteFont_0 @ 0x1C00011B0 (bDeleteFont_0.c)
 *     IsbDeleteFontSupported_0 @ 0x1C0001438 (IsbDeleteFontSupported_0.c)
 *     bDeletePalette @ 0x1C005C930 (bDeletePalette.c)
 */

__int64 __fastcall GreDeleteObject(struct HOBJ__ *a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  int v8; // eax
  unsigned int v9; // ecx

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = (((unsigned int)a1 >> 16) & 0x1F) - 1;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 3;
  if ( !v3 )
    return bDeleteRegion((HRGN)a1);
  v4 = v3 - 1;
  if ( !v4 )
    return bDeleteSurface(a1);
  v5 = v4 - 3;
  if ( !v5 )
    return bDeletePalette((HPALETTE)a1);
  v6 = v5 - 2;
  if ( v6 )
  {
    if ( v6 != 6 )
      return 0LL;
    return bDeleteBrush(a1);
  }
  else
  {
    v8 = IsbDeleteFontSupported_0();
    v9 = 0;
    if ( v8 >= 0 )
      return (unsigned int)bDeleteFont_0();
    return v9;
  }
}
