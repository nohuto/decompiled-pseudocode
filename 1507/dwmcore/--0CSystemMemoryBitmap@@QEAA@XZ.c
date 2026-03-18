/*
 * XREFs of ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180083BA4
 * Callers:
 *     ?PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18001C248 (-PrepareToPushSourceBitsToVidMem@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@IPEAV-$TMilRect@I.c)
 *     ??0CClientMemoryBitmap@@QEAA@XZ @ 0x18005734C (--0CClientMemoryBitmap@@QEAA@XZ.c)
 *     ?HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1800EA25C (-HrCreateDestBitmap@@YAJIIPEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x1800EF214 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x180150FFC (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ??0CBitmap@@QEAA@XZ @ 0x18007FF6C (--0CBitmap@@QEAA@XZ.c)
 */

CSystemMemoryBitmap *__fastcall CSystemMemoryBitmap::CSystemMemoryBitmap(CSystemMemoryBitmap *this)
{
  CBitmap::CBitmap(this);
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *(_QWORD *)this = &CSystemMemoryBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CClientMemoryBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CSystemMemoryBitmap::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 32) = &CSystemMemoryBitmap::`vftable';
  return this;
}
