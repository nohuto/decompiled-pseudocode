/*
 * XREFs of ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18000DCEC
 * Callers:
 *     ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18000DD60 (-PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18000DDDC (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x18000AAFC (-UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180047060 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 */

__int64 __fastcall CDrawingContext::UpdateDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  const struct D2DMatrix *v4; // rdx
  int IsIdentity; // eax
  const struct CMILMatrix *v6; // r8
  __int64 v7; // r9
  bool v8; // zf
  COcclusionContext *v9; // rcx

  if ( a3 )
    *a3 = 0;
  D2DMatrixMultiply((CDrawingContext *)((char *)this + 5568), (CDrawingContext *)((char *)this + 5568), a2);
  IsIdentity = D2DMatrixIsIdentity(v4);
  v8 = *(_BYTE *)(v7 + 5967) == 0;
  *(_BYTE *)(v7 + 5632) = IsIdentity != 0;
  if ( !v8 )
  {
    v9 = *(COcclusionContext **)(v7 + 5776);
    if ( v9 )
    {
      if ( (int)COcclusionContext::UpdateDeviceTransform(v9, v6) >= 0 && a3 )
        *a3 = 1;
    }
  }
  return 0LL;
}
