/*
 * XREFs of ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C
 * Callers:
 *     GrePlgBlt @ 0x1C00011A4 (GrePlgBlt.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0005D58 (GreBeginGdiRenderingToDxSurface.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C0006058 (GreEndGdiRenderingToDxSurface.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C000A920 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0029B78 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00453F0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     GreSelectRedirectionBitmap @ 0x1C0049680 (GreSelectRedirectionBitmap.c)
 *     GreGetDIBitsInternal @ 0x1C0049A50 (GreGetDIBitsInternal.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C005EC64 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00B39E8 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreDereferenceObject @ 0x1C00D7D48 (GreDereferenceObject.c)
 *     GreSetRedirection @ 0x1C00D7DE4 (GreSetRedirection.c)
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 *     hsurfCreateCompatibleSurface @ 0x1C00F0964 (hsurfCreateCompatibleSurface.c)
 *     GreGetBitmapBits @ 0x1C00FBF74 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C00FC310 (GreSetBitmapBits.c)
 *     NtGdiGetDCforBitmap @ 0x1C0109210 (NtGdiGetDCforBitmap.c)
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x1C010E788 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C011CFFC (GreSetRedirectionBitmapOwner.c)
 *     GreReferenceObject @ 0x1C011FAC8 (GreReferenceObject.c)
 *     GreSetDIBitsInternal @ 0x1C0151E6C (GreSetDIBitsInternal.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C025B244 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0274404 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C0294C70 (-MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z.c)
 *     ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C0295D18 (-MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C029DEB0 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     NtGdiEngCreateBitmap @ 0x1C02AD310 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngDeleteSurface @ 0x1C02AD940 (NtGdiEngDeleteSurface.c)
 *     NtGdiEngMarkBandingSurface @ 0x1C02AE410 (NtGdiEngMarkBandingSurface.c)
 *     GreCreateDIBBrush @ 0x1C02B3ABC (GreCreateDIBBrush.c)
 *     NtGdiMonoBitmap @ 0x1C02B3F10 (NtGdiMonoBitmap.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1C02B5770 (NtGdiGetColorSpaceforBitmap.c)
 *     GreGetBitmapDimension @ 0x1C02BB344 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02BB3D0 (GreSetBitmapDimension.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C0257C80 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

SURFREF *__fastcall SURFREF::SURFREF(SURFREF *this, HSURF a2)
{
  __int64 v4; // rdx

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>();
  LOBYTE(v4) = 5;
  *((_QWORD *)this + 4) = HmgShareLockCheck(a2, v4);
  return this;
}
