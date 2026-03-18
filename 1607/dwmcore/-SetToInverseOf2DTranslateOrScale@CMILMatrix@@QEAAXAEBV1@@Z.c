/*
 * XREFs of ?SetToInverseOf2DTranslateOrScale@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1801625D8
 * Callers:
 *     ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801608D8 (-Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingCon.c)
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801612C0 (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::SetToInverseOf2DTranslateOrScale(CMILMatrix *this, const struct CMILMatrix *a2)
{
  float v2; // xmm0_4

  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 12) = COERCE_UNSIGNED_INT(*((float *)a2 + 12) / *(float *)a2) ^ _xmm;
  *((_DWORD *)this + 13) = COERCE_UNSIGNED_INT(*((float *)a2 + 13) / *((float *)a2 + 5)) ^ _xmm;
  v2 = 1.0 / *(float *)a2;
  *((_QWORD *)this + 5) = 1065353216LL;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 1065353216;
  *(float *)this = v2;
}
