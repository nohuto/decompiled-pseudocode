/*
 * XREFs of ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0
 * Callers:
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C0001144 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C000F1C8 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00341DC (GreSetDIBitsToDeviceInternal.c)
 *     GreExtTextOutRect @ 0x1C0039588 (GreExtTextOutRect.c)
 *     GreExtTextOutWInternal @ 0x1C00399F8 (GreExtTextOutWInternal.c)
 *     GreDrawStream @ 0x1C0039BA8 (GreDrawStream.c)
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     NtGdiGetPixel @ 0x1C0040650 (NtGdiGetPixel.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00469F0 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiSetPixel @ 0x1C00472A0 (NtGdiSetPixel.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00488E8 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     NtGdiGetDCObject @ 0x1C004C540 (NtGdiGetDCObject.c)
 *     GreRectVisible @ 0x1C004C688 (GreRectVisible.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetAppClipBox @ 0x1C00FA434 (GreGetAppClipBox.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0266018 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     GreExtEscape @ 0x1C0267554 (GreExtEscape.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>((char *)this + 16);
  *(_QWORD *)this = 0LL;
  return this;
}
