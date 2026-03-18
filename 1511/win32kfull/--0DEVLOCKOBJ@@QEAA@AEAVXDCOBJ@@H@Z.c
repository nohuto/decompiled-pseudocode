/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002E0E0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00348C8 (GreStretchDIBitsInternal.c)
 *     NtGdiExtSelectClipRgn @ 0x1C0036770 (NtGdiExtSelectClipRgn.c)
 *     GreExtSelectClipRgn @ 0x1C009B3F8 (GreExtSelectClipRgn.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00C98FC (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreGetBoundsRect @ 0x1C00FCBE0 (GreGetBoundsRect.c)
 *     NtGdiExtFloodFill @ 0x1C012E0C0 (NtGdiExtFloodFill.c)
 *     NtGdiFrameRgn @ 0x1C012FC30 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C01301F0 (NtGdiFillRgn.c)
 *     NtGdiFastPolyPolyline @ 0x1C013B590 (NtGdiFastPolyPolyline.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C013BD04 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGetRandomRgn @ 0x1C01475A0 (GreGetRandomRgn.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0261A78 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0268870 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C0268F58 (GreDrawEscape.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0290F88 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiOffsetClipRgn @ 0x1C0291870 (NtGdiOffsetClipRgn.c)
 *     NtGdiPtVisible @ 0x1C0291A20 (NtGdiPtVisible.c)
 *     NtGdiUpdateColors @ 0x1C02B1C00 (NtGdiUpdateColors.c)
 *     NtGdiSetPixelFormat @ 0x1C02B3C40 (NtGdiSetPixelFormat.c)
 * Callees:
 *     <none>
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this, struct XDCOBJ *a2, int a3)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  DEVLOCKOBJ::bLock(this, a2, a3);
  return this;
}
