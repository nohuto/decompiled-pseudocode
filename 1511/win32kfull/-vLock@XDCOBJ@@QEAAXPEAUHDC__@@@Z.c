/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80
 * Callers:
 *     NtGdiUpdateTransform @ 0x1C000B270 (NtGdiUpdateTransform.c)
 *     GreSetTextColor @ 0x1C00155BC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0015630 (GreSetBkColor.c)
 *     GreSetStretchBltMode @ 0x1C00156A4 (GreSetStretchBltMode.c)
 *     GreSetBkMode @ 0x1C0018468 (GreSetBkMode.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C0029D40 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     NtGdiGetPixel @ 0x1C002CF70 (NtGdiGetPixel.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C002E800 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C002E830 (UntrapAppContainerRenderingWrap.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E950 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C002F1B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C003032C (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C003038C (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00348C8 (GreStretchDIBitsInternal.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0039A28 (GreBeginGdiRenderingToDxSurface.c)
 *     GrePolyPatBlt @ 0x1C003C84C (GrePolyPatBlt.c)
 *     GreExtTextOutRect @ 0x1C003CB0C (GreExtTextOutRect.c)
 *     NtGdiPolyPatBlt @ 0x1C003CC00 (NtGdiPolyPatBlt.c)
 *     GreExtTextOutWInternal @ 0x1C0040128 (GreExtTextOutWInternal.c)
 *     NtGdiGetDCObject @ 0x1C0040C40 (NtGdiGetDCObject.c)
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 *     GreDrawStream @ 0x1C00433E0 (GreDrawStream.c)
 *     GreGetLayout @ 0x1C006B8B4 (GreGetLayout.c)
 *     GreSetTextAlign @ 0x1C00CCFB8 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00CD038 (GreGetTextAlign.c)
 *     GreGetAppClipBox @ 0x1C00DD344 (GreGetAppClipBox.c)
 *     NtGdiGetWidthTable @ 0x1C00DDFE0 (NtGdiGetWidthTable.c)
 *     GreGetCharSet @ 0x1C00E1358 (GreGetCharSet.c)
 *     GreSetDeviceGammaRamp @ 0x1C00E3C40 (GreSetDeviceGammaRamp.c)
 *     GreGetDeviceGammaRamp @ 0x1C00E4224 (GreGetDeviceGammaRamp.c)
 *     GreGetGlyphIndicesW @ 0x1C00EEB70 (GreGetGlyphIndicesW.c)
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     NtGdiGetAndSetDCDword @ 0x1C00FD150 (NtGdiGetAndSetDCDword.c)
 *     NtGdiComputeXformCoefficients @ 0x1C00FEA40 (NtGdiComputeXformCoefficients.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C013BD04 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreExtEscape @ 0x1C01403F0 (GreExtEscape.c)
 *     bUMPD @ 0x1C0141304 (bUMPD.c)
 *     GreGetTextColor @ 0x1C01450AC (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C01450F4 (GreGetBkColor.c)
 *     GreGetRealizationInfo @ 0x1C0152330 (GreGetRealizationInfo.c)
 *     NtGdiGetMonitorID @ 0x1C025E520 (NtGdiGetMonitorID.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C025F7D4 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025FD98 (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025FEA8 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0267C90 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
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
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02AF5E0 (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02AF670 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02AF850 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C02AF95C (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     NtGdiSetColorSpace @ 0x1C02B0710 (NtGdiSetColorSpace.c)
 *     GreGetMapMode @ 0x1C02B0950 (GreGetMapMode.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02B10A4 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     NtGdiMakeInfoDC @ 0x1C02B2780 (NtGdiMakeInfoDC.c)
 *     GreSetGraphicsMode @ 0x1C02B719C (GreSetGraphicsMode.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  HDC v2; // rax
  __int64 v4; // rax
  int v5; // edi

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = HmgLockEx(v2, a2, *((unsigned int *)this + 3));
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    if ( *((_DWORD *)this + 3)
      && ((*(_DWORD *)(*(_QWORD *)(v4 + 48) + 56LL) & 0x8000) == 0
       || (v5 = *(_DWORD *)(v4 + 2504), v5 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)))
      || !(unsigned int)XDCOBJ::bSaveAttributes(this) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      *(_QWORD *)this = 0LL;
    }
  }
}
