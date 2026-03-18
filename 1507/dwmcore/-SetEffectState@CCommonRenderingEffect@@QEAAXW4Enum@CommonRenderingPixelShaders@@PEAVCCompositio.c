/*
 * XREFs of ?SetEffectState@CCommonRenderingEffect@@QEAAXW4Enum@CommonRenderingPixelShaders@@PEAVCCompositionSurfaceBitmap@@W42SamplerMode@@12@Z @ 0x1800DEC78
 * Callers:
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 */

__int64 __fastcall CCommonRenderingEffect::SetEffectState(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6)
{
  CBitmapOfDeviceBitmaps **v6; // rbx
  __int64 v7; // rdi
  __int64 result; // rax

  v6 = (CBitmapOfDeviceBitmaps **)(a1 + 8);
  *(_DWORD *)(a1 + 32) = a2;
  v7 = 2LL;
  *(_QWORD *)(a1 + 16) = a5;
  result = a6;
  *(_DWORD *)(a1 + 28) = a6;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 24) = a4;
  do
  {
    if ( *v6 )
      result = CBitmapOfDeviceBitmaps::AddRef(*v6);
    ++v6;
    --v7;
  }
  while ( v7 );
  return result;
}
