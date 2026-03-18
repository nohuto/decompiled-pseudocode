/*
 * XREFs of ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180010328
 * Callers:
 *     ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x18001039C (-PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180010418 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x180004690 (-UpdateDeviceTransform@COcclusionContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18001EFF0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
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
  D2DMatrixMultiply((CDrawingContext *)((char *)this + 5536), (CDrawingContext *)((char *)this + 5536), a2);
  IsIdentity = D2DMatrixIsIdentity(v4);
  v8 = *(_BYTE *)(v7 + 5931) == 0;
  *(_BYTE *)(v7 + 5600) = IsIdentity != 0;
  if ( !v8 )
  {
    v9 = *(COcclusionContext **)(v7 + 5744);
    if ( v9 )
    {
      if ( (int)COcclusionContext::UpdateDeviceTransform(v9, v6) >= 0 && a3 )
        *a3 = 1;
    }
  }
  return 0LL;
}
