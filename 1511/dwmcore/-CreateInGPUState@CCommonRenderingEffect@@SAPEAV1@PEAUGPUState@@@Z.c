/*
 * XREFs of ?CreateInGPUState@CCommonRenderingEffect@@SAPEAV1@PEAUGPUState@@@Z @ 0x180118438
 * Callers:
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 * Callees:
 *     <none>
 */

struct CCommonRenderingEffect *__fastcall CCommonRenderingEffect::CreateInGPUState(struct GPUState *a1)
{
  struct CCommonRenderingEffect *result; // rax
  int v2; // edx
  char *v3; // rcx

  result = (struct GPUState *)((char *)a1 + 4);
  if ( a1 == (struct GPUState *)-4LL )
    return 0LL;
  *(_QWORD *)result = &CCommonRenderingEffect::`vftable';
  v2 = 1;
  v3 = (char *)a1 + 28;
  do
  {
    --v2;
    *(_WORD *)v3 = 1;
    v3[2] = 0;
    v3 += 3;
  }
  while ( v2 >= 0 );
  *((_QWORD *)result + 1) = 0LL;
  *((_QWORD *)result + 2) = 0LL;
  return result;
}
