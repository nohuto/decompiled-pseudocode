/*
 * XREFs of GreDeleteObject @ 0x1C00446F0
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 *     DeleteMaybeSpecialRgn @ 0x1C0010CC0 (DeleteMaybeSpecialRgn.c)
 *     UserValidateCopyRgn @ 0x1C0010ED0 (UserValidateCopyRgn.c)
 *     UserSetDCVisRgn @ 0x1C0044440 (UserSetDCVisRgn.c)
 *     DestroyCacheDC @ 0x1C005B4A0 (DestroyCacheDC.c)
 *     CleanupGDI @ 0x1C006D050 (CleanupGDI.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1C006D3EC (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C006D40C (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C006D474 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     DestroyMonitor @ 0x1C006D4B0 (DestroyMonitor.c)
 *     bInitBRUSHOBJ @ 0x1C0138530 (bInitBRUSHOBJ.c)
 * Callees:
 *     bDeleteFont_0 @ 0x1C00011B0 (bDeleteFont_0.c)
 *     IsbDeleteFontSupported_0 @ 0x1C0001428 (IsbDeleteFontSupported_0.c)
 *     HmgDecrementShareReferenceCount @ 0x1C003BE20 (HmgDecrementShareReferenceCount.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00B0E60 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C00B38A0 (--0SURFREF@@QEAA@XZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C00B3B10 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall GreDeleteObject(struct HOBJ__ *a1)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  _BYTE v11[32]; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v12; // [rsp+40h] [rbp-18h]

  if ( ((unsigned __int64)a1 & 0x800000) != 0 )
    return 1LL;
  v3 = (((unsigned __int64)a1 >> 16) & 0x1F) - 1;
  if ( !v3 )
    return 0LL;
  v4 = v3 - 3;
  if ( !v4 )
    return bDeleteRegion((HRGN)a1);
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 3;
    if ( !v6 )
      return bDeletePalette((HPALETTE)a1);
    v7 = v6 - 2;
    if ( v7 )
    {
      if ( v7 == 6 )
        return bDeleteBrush(a1);
      return 0LL;
    }
    v8 = IsbDeleteFontSupported_0();
    v9 = 0;
    if ( v8 >= 0 )
      return (unsigned int)bDeleteFont_0();
    return v9;
  }
  else
  {
    SURFREF::SURFREF((SURFREF *)v11);
    SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v11, (HSURF)a1);
    v10 = SURFREF::bDeleteSurface(v11, 0LL);
    if ( v12 )
      HmgDecrementShareReferenceCount(v12);
    UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v11);
    return v10;
  }
}
