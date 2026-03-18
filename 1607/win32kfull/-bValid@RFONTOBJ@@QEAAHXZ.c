/*
 * XREFs of ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0022AB0
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C002B454 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002E04C (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00453F0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     NtGdiSelectBitmap @ 0x1C01012F0 (NtGdiSelectBitmap.c)
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C011FB10 (vUnlinkAllEudcRFONTsAndPFEs.c)
 *     NtGdiFrameRgn @ 0x1C0139550 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0139B60 (NtGdiFillRgn.c)
 *     GreSetWindowOrg @ 0x1C0144ABC (GreSetWindowOrg.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0265CA4 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     vUnlinkEudcRFONTs @ 0x1C028A270 (vUnlinkEudcRFONTs.c)
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C028A358 (vUnlinkEudcRFONTsAndPFEs.c)
 *     NtGdiMakeObjectUnXferable @ 0x1C028FC20 (NtGdiMakeObjectUnXferable.c)
 *     NtGdiSelectBrush @ 0x1C02A96C0 (NtGdiSelectBrush.c)
 *     NtGdiSelectPen @ 0x1C02A9730 (NtGdiSelectPen.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02ABBC0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z @ 0x1C02ABCB8 (-bCheckSurfaceRectSize@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@PEAK3H@Z.c)
 *     GreDeleteServerMetaFile @ 0x1C02B4DE4 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02B4F70 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bValid(RFONTOBJ *this)
{
  return *(_QWORD *)this != 0LL;
}
