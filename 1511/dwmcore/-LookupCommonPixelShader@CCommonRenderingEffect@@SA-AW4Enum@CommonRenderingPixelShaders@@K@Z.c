/*
 * XREFs of ?LookupCommonPixelShader@CCommonRenderingEffect@@SA?AW4Enum@CommonRenderingPixelShaders@@K@Z @ 0x18002D350
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCHWDrawListCache@@@Z @ 0x18002F770 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
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
