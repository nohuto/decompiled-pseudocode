/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4
 * Callers:
 *     NtGdiSetPixel @ 0x1C0018B00 (NtGdiSetPixel.c)
 *     NtGdiAlphaBlend @ 0x1C0023B30 (NtGdiAlphaBlend.c)
 *     GreGradientFill @ 0x1C0033608 (GreGradientFill.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0086F64 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0097490 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     GreStretchDIBitsInternal @ 0x1C0099AD8 (GreStretchDIBitsInternal.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009A640 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C009A950 (GreSetDIBitsToDeviceInternal.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009F030 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009F674 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00A0228 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00E6364 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiExtFloodFill @ 0x1C0103240 (NtGdiExtFloodFill.c)
 *     NtGdiFrameRgn @ 0x1C0104C30 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0105250 (NtGdiFillRgn.c)
 *     NtGdiTransparentBlt @ 0x1C01058C0 (NtGdiTransparentBlt.c)
 *     NtGdiFastPolyPolyline @ 0x1C011CF30 (NtGdiFastPolyPolyline.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C029124C (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiUpdateColors @ 0x1C02B29C0 (NtGdiUpdateColors.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

void __fastcall XDCOBJ::vAccumulateTight(XDCOBJ *this, struct ECLIPOBJ *a2, struct _RECTL *a3)
{
  _DWORD *v4; // rcx
  _DWORD *v5; // rax
  LONG right; // edx
  struct _RECTL *v7; // rcx
  LONG top; // r8d
  LONG v9; // r9d
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-28h] BYREF
  struct _RECTL v13; // [rsp+48h] [rbp-18h] BYREF

  v4 = *(_DWORD **)this;
  v13 = *a3;
  v5 = v4 + 354;
  if ( (v4[10] & 1) == 0 )
    v5 = v4 + 352;
  v13.left -= *v5;
  v13.right -= *v5;
  v13.top -= v5[1];
  v13.bottom -= v5[1];
  if ( (v4[9] & 0x40) != 0 )
  {
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)(v4 + 368)) )
    {
      *v7 = v13;
    }
    else
    {
      if ( v9 < v7->left )
      {
        v7->left = v9;
        right = v13.right;
        top = v13.top;
      }
      if ( top < v7->top )
      {
        v7->top = top;
        right = v13.right;
      }
      if ( right > v7->right )
        v7->right = right;
      if ( v13.bottom > v7->bottom )
        v7->bottom = v13.bottom;
    }
    v10 = *(_QWORD *)(*(_QWORD *)this + 1568LL);
    if ( v10 )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
      if ( v11[0] && v12[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v12, &v13);
        if ( RGNOBJ::bMerge((RGNOBJ *)v11, (struct RGNOBJ *)&v10, (struct RGNOBJ *)v12, BYTE2(gafjRgnOp)) )
        {
          RGNOBJ::bSwap((RGNOBJ *)&v10, (struct RGNOBJ *)v11);
          *(_QWORD *)(*(_QWORD *)this + 1568LL) = v10;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
    }
  }
}
