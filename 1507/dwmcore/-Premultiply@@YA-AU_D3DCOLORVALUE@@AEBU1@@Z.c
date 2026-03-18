/*
 * XREFs of ?Premultiply@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x180099FBC
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?EnsureColorAnimationsProcessed@CHWDrawListCache@@IEAAXXZ @ 0x1800DE414 (-EnsureColorAnimationsProcessed@CHWDrawListCache@@IEAAXXZ.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

struct _D3DCOLORVALUE *__fastcall Premultiply(
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct _D3DCOLORVALUE *a2)
{
  struct _D3DCOLORVALUE *result; // rax
  __int128 v3; // [rsp+0h] [rbp-28h]

  result = retstr;
  HIDWORD(v3) = LODWORD(a2->a);
  *(float *)&v3 = *((float *)&v3 + 3) * a2->r;
  *((float *)&v3 + 1) = *((float *)&v3 + 3) * a2->g;
  *((float *)&v3 + 2) = *((float *)&v3 + 3) * a2->b;
  *(_OWORD *)&retstr->r = v3;
  return result;
}
