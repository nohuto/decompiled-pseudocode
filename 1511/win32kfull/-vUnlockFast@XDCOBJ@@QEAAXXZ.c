/*
 * XREFs of ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58
 * Callers:
 *     GreSetBkMode @ 0x1C0018468 (GreSetBkMode.c)
 *     NtGdiSetPixel @ 0x1C002C0B0 (NtGdiSetPixel.c)
 *     GrePolyPatBlt @ 0x1C003C84C (GrePolyPatBlt.c)
 *     GreSetTextAlign @ 0x1C00CCFB8 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00CD038 (GreGetTextAlign.c)
 *     GreSetDeviceGammaRamp @ 0x1C00E3C40 (GreSetDeviceGammaRamp.c)
 *     GreGetDeviceGammaRamp @ 0x1C00E4224 (GreGetDeviceGammaRamp.c)
 *     GreGetGlyphIndicesW @ 0x1C00EEB70 (GreGetGlyphIndicesW.c)
 *     NtGdiGetAndSetDCDword @ 0x1C00FD150 (NtGdiGetAndSetDCDword.c)
 *     NtGdiComputeXformCoefficients @ 0x1C00FEA40 (NtGdiComputeXformCoefficients.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C013BD04 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     bUMPD @ 0x1C0141304 (bUMPD.c)
 *     GreGetTextColor @ 0x1C01450AC (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C01450F4 (GreGetBkColor.c)
 *     GreGetRealizationInfo @ 0x1C0152330 (GreGetRealizationInfo.c)
 *     NtGdiGetMonitorID @ 0x1C025E520 (NtGdiGetMonitorID.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025F7D4 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025FD98 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025FEA8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreForceUFIMapping @ 0x1C02691E0 (GreForceUFIMapping.c)
 *     GreGetUFI @ 0x1C0269238 (GreGetUFI.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0269720 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0269B80 (NtGdiGetLinkedUFIs.c)
 *     NtGdiRemoveMergeFont @ 0x1C0269DE0 (NtGdiRemoveMergeFont.c)
 *     NtGdiSetLinkedUFIs @ 0x1C0269E90 (NtGdiSetLinkedUFIs.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C026E450 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C027E800 (NtGdiAddRemoteFontToDC.c)
 *     GreGetTextCharacterExtra @ 0x1C029225C (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C029229C (GreSetTextCharacterExtra.c)
 *     GreGetHFONT @ 0x1C0292364 (GreGetHFONT.c)
 *     GreMoveTo @ 0x1C0292A68 (GreMoveTo.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02AF340 (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02AF4B4 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02AF670 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02AF850 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C02AF95C (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     NtGdiSetColorSpace @ 0x1C02B0710 (NtGdiSetColorSpace.c)
 *     GreGetMapMode @ 0x1C02B0950 (GreGetMapMode.c)
 *     NtGdiMakeInfoDC @ 0x1C02B2780 (NtGdiMakeInfoDC.c)
 *     GreSetGraphicsMode @ 0x1C02B719C (GreSetGraphicsMode.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  XDCOBJ::RestoreAttributes(this);
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
