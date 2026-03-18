/*
 * XREFs of ?DecomposeMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEAH@Z @ 0x18013A430
 * Callers:
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801381F0 (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 *     ?DecomposeMatrix@?A0xe8837992@@YAXAEBVCMILMatrix@@PEAV2@11@Z @ 0x180142384 (-DecomposeMatrix@-A0xe8837992@@YAXAEBVCMILMatrix@@PEAV2@11@Z.c)
 * Callees:
 *     ?GetScaleDimensions@CBaseMatrix@@QEBAXPEAM0@Z @ 0x180047364 (-GetScaleDimensions@CBaseMatrix@@QEBAXPEAM0@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     MatrixAppendScale2D @ 0x180068D90 (MatrixAppendScale2D.c)
 *     ?Invert@CMILMatrix@@QEAAHXZ @ 0x18013A4FC (-Invert@CMILMatrix@@QEAAHXZ.c)
 */

void __fastcall CMILMatrix::DecomposeMatrixIntoScaleAndRest(
        CMILMatrix *this,
        struct CMILMatrix *a2,
        struct CMILMatrix *a3,
        int *a4)
{
  float v8; // xmm2_4
  float v9; // xmm1_4
  int v10; // eax
  float v11; // [rsp+48h] [rbp+10h] BYREF
  float v12; // [rsp+50h] [rbp+18h] BYREF

  CBaseMatrix::GetScaleDimensions(this, &v12, &v11);
  v8 = v11;
  v9 = v12;
  *((_DWORD *)a2 + 15) = 1065353216;
  *((_DWORD *)a2 + 10) = 1065353216;
  *((_DWORD *)a2 + 5) = 1065353216;
  *(_DWORD *)a2 = 1065353216;
  *(_QWORD *)((char *)a2 + 52) = 0LL;
  *(_QWORD *)((char *)a2 + 44) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *(_QWORD *)((char *)a2 + 12) = 0LL;
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  MatrixAppendScale2D(a2, v9, v8);
  *(_OWORD *)a3 = *(_OWORD *)a2;
  *((_OWORD *)a3 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a3 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a3 + 3) = *((_OWORD *)a2 + 3);
  v10 = CMILMatrix::Invert(a3);
  *a4 = v10;
  if ( v10 )
    D2DMatrixMultiply(a3, a3, this);
}
