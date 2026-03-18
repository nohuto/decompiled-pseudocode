/*
 * XREFs of ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0033E1C
 * Callers:
 *     EngPlgBlt @ 0x1C0001FC0 (EngPlgBlt.c)
 *     EngTextOut @ 0x1C0032E10 (EngTextOut.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C004CCC0 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     hsurfCreateCompatibleSurface @ 0x1C00F0964 (hsurfCreateCompatibleSurface.c)
 *     EngStretchBltROP @ 0x1C010E8F0 (EngStretchBltROP.c)
 *     EngPaint @ 0x1C013A0D0 (EngPaint.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C01529A0 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     SimBitBlt @ 0x1C02618B8 (SimBitBlt.c)
 * Callees:
 *     <none>
 */

int (*__fastcall SURFACE::pfnBitBlt(
        SURFACE *this))(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int)
{
  if ( (*((_DWORD *)this + 28) & 1) != 0 )
    return *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))(*((_QWORD *)this + 6) + 2856LL);
  else
    return EngBitBlt;
}
