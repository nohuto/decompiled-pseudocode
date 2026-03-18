/*
 * XREFs of ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304
 * Callers:
 *     GrePlgBlt @ 0x1C00011A4 (GrePlgBlt.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00018FC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreRectangle @ 0x1C000E9CC (GreRectangle.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C000F1C8 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0014BC0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00341DC (GreSetDIBitsToDeviceInternal.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0035FA0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C00391A0 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GreDrawStream @ 0x1C0039BA8 (GreDrawStream.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     NtGdiSetPixel @ 0x1C00472A0 (NtGdiSetPixel.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C004CCC0 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004D800 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C004EE70 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiPatBlt @ 0x1C00942F0 (NtGdiPatBlt.c)
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 *     NtGdiExtFloodFill @ 0x1C0137AF0 (NtGdiExtFloodFill.c)
 *     NtGdiFrameRgn @ 0x1C0139550 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0139B60 (NtGdiFillRgn.c)
 *     NtGdiTransparentBlt @ 0x1C013A310 (NtGdiTransparentBlt.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0260090 (DxgkEngAccumD3DPresentBounds.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C028FD68 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiUpdateColors @ 0x1C02B4B20 (NtGdiUpdateColors.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C003554C (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 */

void __fastcall XDCOBJ::vAccumulate(XDCOBJ *this, struct ERECTL *a2)
{
  XDCOBJ *v2; // r8
  __int64 v3; // rcx

  v2 = this;
  v3 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v3 + 36) & 0x20) != 0 )
    ERECTL::operator|=((_DWORD *)(v3 + 1456), a2);
  if ( (*(_DWORD *)(*(_QWORD *)v2 + 36LL) & 0x80u) != 0 )
    ERECTL::operator|=((_DWORD *)(*(_QWORD *)v2 + 1488LL), a2);
}
