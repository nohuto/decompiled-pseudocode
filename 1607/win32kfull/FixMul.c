/*
 * XREFs of FixMul @ 0x1C00C947C
 * Callers:
 *     lQueryDEVICEMETRICS @ 0x1C0016AB0 (lQueryDEVICEMETRICS.c)
 *     bComputeMaxGlyph @ 0x1C0019FE0 (bComputeMaxGlyph.c)
 *     vCheckForSingularXform @ 0x1C001A658 (vCheckForSingularXform.c)
 *     vQuantizeXform @ 0x1C001A7D4 (vQuantizeXform.c)
 *     scl_InitializeScaling @ 0x1C001B5AC (scl_InitializeScaling.c)
 *     mth_Non90DegreeTransformation @ 0x1C001B96C (mth_Non90DegreeTransformation.c)
 *     mth_FoldPointSizeResolution @ 0x1C001BA58 (mth_FoldPointSizeResolution.c)
 *     scl_Scale @ 0x1C001E4D8 (scl_Scale.c)
 *     scl_CalcComponentOffset @ 0x1C00C56D4 (scl_CalcComponentOffset.c)
 *     InvokeGlobalGSScale @ 0x1C00C57D8 (InvokeGlobalGSScale.c)
 *     mth_IntelMul @ 0x1C00C7178 (mth_IntelMul.c)
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 *     scl_ScaleOldCharPoints @ 0x1C00C97E0 (scl_ScaleOldCharPoints.c)
 *     itrp_IUP @ 0x1C00CA6B0 (itrp_IUP.c)
 *     itrp_RCVT @ 0x1C00CC0F0 (itrp_RCVT.c)
 *     itrp_MPPEM @ 0x1C00CC310 (itrp_MPPEM.c)
 *     itrp_DeltaEngine @ 0x1C00CD854 (itrp_DeltaEngine.c)
 *     itrp_MDRP @ 0x1C00CE020 (itrp_MDRP.c)
 *     itrp_MIAP @ 0x1C00CF700 (itrp_MIAP.c)
 *     scl_ScaleAdvanceWidth @ 0x1C0106AE0 (scl_ScaleAdvanceWidth.c)
 *     mth_FixXYMul @ 0x1C0106B94 (mth_FixXYMul.c)
 *     InvokeGetCVTEntry @ 0x1C0111BF0 (InvokeGetCVTEntry.c)
 *     bSetXform @ 0x1C01126D0 (bSetXform.c)
 *     vGetNotionalGlyphMetrics @ 0x1C011F0D4 (vGetNotionalGlyphMetrics.c)
 *     itrp_GetCVTScale @ 0x1C0144104 (itrp_GetCVTScale.c)
 *     mth_MxConcat2x2 @ 0x1C014C56C (mth_MxConcat2x2.c)
 *     scl_ScaleFromFixedFUnits @ 0x1C014CFB0 (scl_ScaleFromFixedFUnits.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C0243960 (vFillGLYPHDATA_ErrRecover.c)
 *     vCalcXformVertical @ 0x1C0243F30 (vCalcXformVertical.c)
 *     itrp_CheckSingleWidth @ 0x1C02E048C (itrp_CheckSingleWidth.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FixMul(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  bool v4; // sf
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // edx
  int v10; // ecx

  v2 = 0;
  if ( !a1 || !a2 )
    return 0LL;
  v3 = 1;
  v4 = a1 < 0;
  if ( a1 > 0 )
  {
    if ( a2 < 0 )
    {
LABEL_19:
      v2 = 1;
      goto LABEL_7;
    }
    v4 = a1 < 0;
  }
  if ( v4 && a2 > 0 )
    goto LABEL_19;
LABEL_7:
  v5 = a2 * (__int64)a1;
  if ( (v5 & 0x8000) == 0 || (v2 ? (v10 = v5 & 0x7FFF) : (v10 = 1), !v10) )
    v3 = 0;
  v6 = HIDWORD(v5);
  v7 = v3 + (v5 >> 16);
  if ( (v6 & 0xFFFF0000) != 0 )
  {
    v8 = 0x80000000;
    if ( (v6 & 0xFFFF0000) == 0xFFFF0000 )
    {
      if ( v7 <= 0 )
        return (unsigned int)v7;
    }
    else
    {
      return 0x80000000 - ((v6 & 0x80000000) != 0LL);
    }
  }
  else
  {
    v8 = 0x7FFFFFFF;
    if ( v7 >= 0 )
      return (unsigned int)v7;
  }
  return v8;
}
