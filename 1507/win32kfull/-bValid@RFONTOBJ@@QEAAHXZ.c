/*
 * XREFs of ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0019EF0
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00175C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002A864 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C002D2B8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     NtGdiSelectBitmap @ 0x1C00DE890 (NtGdiSelectBitmap.c)
 *     NtGdiFrameRgn @ 0x1C0104C30 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0105250 (NtGdiFillRgn.c)
 *     GreSetWindowOrg @ 0x1C011442C (GreSetWindowOrg.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C012A9B0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0268D84 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     vUnlinkEudcRFONTs @ 0x1C028B820 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C028B908 (vUnlinkEudcRFONTsAndPFEs.c)
 *     NtGdiMakeObjectUnXferable @ 0x1C02910C0 (NtGdiMakeObjectUnXferable.c)
 *     NtGdiSelectBrush @ 0x1C02A8430 (NtGdiSelectBrush.c)
 *     NtGdiSelectPen @ 0x1C02A84A0 (NtGdiSelectPen.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA6CC (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02AA7C4 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     GreDeleteServerMetaFile @ 0x1C02B2C5C (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02B2DF0 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bValid(RFONTOBJ *this)
{
  return *(_QWORD *)this != 0LL;
}
