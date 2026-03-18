/*
 * XREFs of FixMul @ 0x1C00AFF84
 * Callers:
 *     scl_InitializeScaling @ 0x1C00A2E10 (scl_InitializeScaling.c)
 *     scl_CalcComponentOffset @ 0x1C00ADBAC (scl_CalcComponentOffset.c)
 *     InvokeGlobalGSScale @ 0x1C00ADCB0 (InvokeGlobalGSScale.c)
 *     itrp_MPPEM @ 0x1C00ADD80 (itrp_MPPEM.c)
 *     mth_IntelMul @ 0x1C00ADF24 (mth_IntelMul.c)
 *     itrp_RCVT @ 0x1C00AE760 (itrp_RCVT.c)
 *     fsg_ExecuteGlyph @ 0x1C00AEC30 (fsg_ExecuteGlyph.c)
 *     scl_ScaleOldCharPoints @ 0x1C00B02E0 (scl_ScaleOldCharPoints.c)
 *     itrp_GetCVTScale @ 0x1C00B0D08 (itrp_GetCVTScale.c)
 *     scl_Scale @ 0x1C00B3094 (scl_Scale.c)
 *     mth_Non90DegreeTransformation @ 0x1C00B314C (mth_Non90DegreeTransformation.c)
 *     mth_FoldPointSizeResolution @ 0x1C00B3218 (mth_FoldPointSizeResolution.c)
 *     itrp_DeltaEngine @ 0x1C00B4844 (itrp_DeltaEngine.c)
 *     itrp_MIAP @ 0x1C00B5040 (itrp_MIAP.c)
 *     itrp_MDRP @ 0x1C00B5EF0 (itrp_MDRP.c)
 *     InvokeGetCVTEntry @ 0x1C00B814C (InvokeGetCVTEntry.c)
 *     itrp_IUP @ 0x1C00C3970 (itrp_IUP.c)
 *     scl_ScaleAdvanceWidth @ 0x1C00E5008 (scl_ScaleAdvanceWidth.c)
 *     mth_FixXYMul @ 0x1C00E5110 (mth_FixXYMul.c)
 *     bSetXform @ 0x1C00F1070 (bSetXform.c)
 *     vGetNotionalGlyphMetrics @ 0x1C00FE814 (vGetNotionalGlyphMetrics.c)
 *     lQueryDEVICEMETRICS @ 0x1C01154D0 (lQueryDEVICEMETRICS.c)
 *     vQuantizeXform @ 0x1C01189B4 (vQuantizeXform.c)
 *     bComputeMaxGlyph @ 0x1C0119094 (bComputeMaxGlyph.c)
 *     vCheckForSingularXform @ 0x1C01197B0 (vCheckForSingularXform.c)
 *     itrp_CheckSingleWidth @ 0x1C014470C (itrp_CheckSingleWidth.c)
 *     mth_MxConcat2x2 @ 0x1C0147F34 (mth_MxConcat2x2.c)
 *     scl_ScaleFromFixedFUnits @ 0x1C0148630 (scl_ScaleFromFixedFUnits.c)
 *     vCalcXformVertical @ 0x1C014D38C (vCalcXformVertical.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C02476E0 (vFillGLYPHDATA_ErrRecover.c)
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
