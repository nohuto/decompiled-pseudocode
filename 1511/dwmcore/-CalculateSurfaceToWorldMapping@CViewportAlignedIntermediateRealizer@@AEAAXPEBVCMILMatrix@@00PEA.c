/*
 * XREFs of ?CalculateSurfaceToWorldMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@00PEAV2@@Z @ 0x180138014
 * Callers:
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801381F0 (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 * Callees:
 *     ?Invert@CBaseMatrix@@IEAAHAEBV1@@Z @ 0x1800476D8 (-Invert@CBaseMatrix@@IEAAHAEBV1@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CViewportAlignedIntermediateRealizer::CalculateSurfaceToWorldMapping(
        CViewportAlignedIntermediateRealizer *this,
        const struct CMILMatrix *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4,
        struct CMILMatrix *a5)
{
  const struct D2DMatrix *v6; // rdx
  _BYTE v7[64]; // [rsp+20h] [rbp-58h] BYREF

  *(_OWORD *)a5 = *(_OWORD *)a2;
  *((_OWORD *)a5 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a5 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a5 + 3) = *((_OWORD *)a2 + 3);
  CBaseMatrix::Invert((CBaseMatrix *)v7, a4);
  D2DMatrixMultiply(a5, a5, (const struct D2DMatrix *)v7);
  if ( a3 )
    D2DMatrixMultiply(a5, v6, a3);
}
