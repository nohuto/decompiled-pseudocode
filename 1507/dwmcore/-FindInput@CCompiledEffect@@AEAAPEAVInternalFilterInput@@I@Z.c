/*
 * XREFs of ?FindInput@CCompiledEffect@@AEAAPEAVInternalFilterInput@@I@Z @ 0x180112620
 * Callers:
 *     ?GetInputSurfaceNoRef@CCompiledEffect@@QEAAJIPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801129BC (-GetInputSurfaceNoRef@CCompiledEffect@@QEAAJIPEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?GetInputTransform@CCompiledEffect@@QEAAJIAEBUD2D_RECT_F@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180112A08 (-GetInputTransform@CCompiledEffect@@QEAAJIAEBUD2D_RECT_F@@PEAU2@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x180129F2C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 */

struct InternalFilterInput *__fastcall CCompiledEffect::FindInput(CCompiledEffect *this, int a2)
{
  int Key; // eax
  __int64 v3; // r10
  __int64 v5; // rdx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (char *)this + 168,
          &v6);
  if ( Key < 0 )
    return 0LL;
  _mm_lfence();
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 176) + 8LL * Key);
  return (struct InternalFilterInput *)(v5 & -(__int64)(*(_QWORD *)(v5 + 48) != 0LL));
}
