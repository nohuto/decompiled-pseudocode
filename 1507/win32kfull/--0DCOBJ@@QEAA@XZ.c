/*
 * XREFs of ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0
 * Callers:
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016DE0 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     NtGdiSetPixel @ 0x1C0018B00 (NtGdiSetPixel.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0019204 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0019730 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     NtGdiGetPixel @ 0x1C0020EF0 (NtGdiGetPixel.c)
 *     NtGdiAlphaBlend @ 0x1C0023B30 (NtGdiAlphaBlend.c)
 *     GreDrawStream @ 0x1C0026AD0 (GreDrawStream.c)
 *     NtGdiPatBlt @ 0x1C00868F0 (NtGdiPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     GreExtTextOutRect @ 0x1C0098EB8 (GreExtTextOutRect.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0098F78 (GreCreateCompatibleBitmapInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C009A950 (GreSetDIBitsToDeviceInternal.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A289C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiGetDCObject @ 0x1C00D3E90 (NtGdiGetDCObject.c)
 *     GreRectVisible @ 0x1C00D49F8 (GreRectVisible.c)
 *     GreGetAppClipBox @ 0x1C00D7294 (GreGetAppClipBox.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C0122A30 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 *     GreExtEscape @ 0x1C01257FC (GreExtEscape.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0269108 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025E16C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
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
