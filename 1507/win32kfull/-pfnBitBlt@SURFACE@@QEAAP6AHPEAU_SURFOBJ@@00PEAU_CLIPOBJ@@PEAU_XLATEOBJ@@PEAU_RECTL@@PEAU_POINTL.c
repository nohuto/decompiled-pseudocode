/*
 * XREFs of ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009CE2C
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009921C (hsurfCreateCompatibleSurface.c)
 *     ??1FRINGERECT@@QEAA@XZ @ 0x1C009CEA8 (--1FRINGERECT@@QEAA@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009F674 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     EngStretchBltROP @ 0x1C00A10F0 (EngStretchBltROP.c)
 *     EngPlgBlt @ 0x1C00C8FF0 (EngPlgBlt.c)
 *     EngPaint @ 0x1C00CE580 (EngPaint.c)
 *     SimBitBlt @ 0x1C0265540 (SimBitBlt.c)
 * Callees:
 *     <none>
 */

int (*__fastcall SURFACE::pfnBitBlt(
        SURFACE *this))(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int)
{
  if ( (*((_DWORD *)this + 28) & 1) != 0 )
    return *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))(*((_QWORD *)this + 6) + 2864LL);
  else
    return EngBitBlt;
}
