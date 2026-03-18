/*
 * XREFs of ?LookupCommonPixelShader@CCommonRenderingEffect@@SA?AW4Enum@CommonRenderingPixelShaders@@K@Z @ 0x180073FE4
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18007627C (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonRenderingEffect::LookupCommonPixelShader(int a1)
{
  __int64 result; // rax
  _DWORD *i; // rdx

  result = 0LL;
  for ( i = &CCommonRenderingEffect::s_rgCommonPixelShadersBitFlags; a1 != *i; ++i )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0xC )
      return 0LL;
  }
  return result;
}
