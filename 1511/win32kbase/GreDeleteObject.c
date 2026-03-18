/*
 * XREFs of GreDeleteObject @ 0x1C00377D0
 * Callers:
 *     UserSetDCVisRgn @ 0x1C0023820 (UserSetDCVisRgn.c)
 *     DeleteMaybeSpecialRgn @ 0x1C0038FF0 (DeleteMaybeSpecialRgn.c)
 *     DestroyMonitor @ 0x1C0066A80 (DestroyMonitor.c)
 *     CleanupGDI @ 0x1C0069388 (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C0069724 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0069744 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     xxxResetDisplayDevice @ 0x1C0069940 (xxxResetDisplayDevice.c)
 *     DestroyCacheDC @ 0x1C006BD80 (DestroyCacheDC.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C006C134 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     UserValidateCopyRgn @ 0x1C0073690 (UserValidateCopyRgn.c)
 *     bInitBRUSHOBJ @ 0x1C013A9B0 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteFont_0 @ 0x1C00011B0 (bDeleteFont_0.c)
 *     IsbDeleteFontSupported_0 @ 0x1C00013C8 (IsbDeleteFontSupported_0.c)
 *     bDeletePalette @ 0x1C004B470 (bDeletePalette.c)
 */

__int64 __fastcall GreDeleteObject(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v9; // eax
  unsigned int v10; // ecx

  if ( (a1 & 0x800000) != 0 )
    return 1LL;
  v3 = (((unsigned __int64)a1 >> 16) & 0x1F) - 1;
  if ( !v3 )
    return 0LL;
  v4 = v3 - 3;
  if ( !v4 )
    return bDeleteRegion((HRGN)a1);
  v5 = v4 - 1;
  if ( !v5 )
    return bDeleteSurface(a1, a2);
  v6 = v5 - 3;
  if ( !v6 )
    return bDeletePalette((HPALETTE)a1);
  v7 = v6 - 2;
  if ( v7 )
  {
    if ( v7 != 6 )
      return 0LL;
    return bDeleteBrush((HBRUSH)a1);
  }
  else
  {
    v9 = IsbDeleteFontSupported_0();
    v10 = 0;
    if ( v9 >= 0 )
      return (unsigned int)bDeleteFont_0();
    return v10;
  }
}
