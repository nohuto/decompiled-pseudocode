/*
 * XREFs of ?GetSamplerModeType@@YA?AW4Enum@SamplerMode@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@1@Z @ 0x180076C8C
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18007627C (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSamplerModeType(int a1, int a2, int a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( ((a1 - 1) & 0xFFFFFFFD) == 0 )
    result = 9LL;
  if ( a2 == 1 )
  {
    result = (unsigned int)(result + 3);
  }
  else if ( a2 == 2 )
  {
    result = (unsigned int)(result + 6);
  }
  if ( a3 == 1 )
    return (unsigned int)(result + 1);
  if ( a3 == 2 )
    return (unsigned int)(result + 2);
  return result;
}
