/*
 * XREFs of ?CreateInGPUState@CCommonRenderingEffect@@SAPEAV1@PEAUGPUState@@@Z @ 0x1800FF5E0
 * Callers:
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     <none>
 */

struct CCommonRenderingEffect *__fastcall CCommonRenderingEffect::CreateInGPUState(struct GPUState *a1)
{
  struct CCommonRenderingEffect *result; // rax

  result = (struct GPUState *)((char *)a1 + 4);
  if ( a1 != (struct GPUState *)-4LL )
  {
    *(_QWORD *)result = &CCommonRenderingEffect::`vftable';
    *(_QWORD *)((char *)a1 + 12) = 0LL;
    *(_QWORD *)((char *)a1 + 20) = 0LL;
  }
  return result;
}
