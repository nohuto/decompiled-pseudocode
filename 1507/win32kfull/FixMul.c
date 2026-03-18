/*
 * XREFs of FixMul @ 0x1C00B6E4C
 * Callers:
 *     lQueryDEVICEMETRICS @ 0x1C00A8210 (lQueryDEVICEMETRICS.c)
 *     bComputeMaxGlyph @ 0x1C00A9D18 (bComputeMaxGlyph.c)
 *     vCheckForSingularXform @ 0x1C00AA460 (vCheckForSingularXform.c)
 *     vQuantizeXform @ 0x1C00AA5B4 (vQuantizeXform.c)
 *     scl_InitializeScaling @ 0x1C00AB384 (scl_InitializeScaling.c)
 *     itrp_RCVT @ 0x1C00B4D20 (itrp_RCVT.c)
 *     mth_IntelMul @ 0x1C00B4E24 (mth_IntelMul.c)
 *     fsg_ExecuteGlyph @ 0x1C00B5A60 (fsg_ExecuteGlyph.c)
 *     scl_ScaleOldCharPoints @ 0x1C00B71A0 (scl_ScaleOldCharPoints.c)
 *     itrp_GetCVTScale @ 0x1C00B806C (itrp_GetCVTScale.c)
 *     scl_CalcComponentOffset @ 0x1C00B9D20 (scl_CalcComponentOffset.c)
 *     InvokeGlobalGSScale @ 0x1C00B9E24 (InvokeGlobalGSScale.c)
 *     itrp_MPPEM @ 0x1C00B9E90 (itrp_MPPEM.c)
 *     scl_Scale @ 0x1C00BA498 (scl_Scale.c)
 *     mth_Non90DegreeTransformation @ 0x1C00BA5DC (mth_Non90DegreeTransformation.c)
 *     mth_FoldPointSizeResolution @ 0x1C00BA6A8 (mth_FoldPointSizeResolution.c)
 *     mth_FixXYMul @ 0x1C00BA740 (mth_FixXYMul.c)
 *     itrp_DeltaEngine @ 0x1C00BC474 (itrp_DeltaEngine.c)
 *     itrp_MIAP @ 0x1C00BC8C0 (itrp_MIAP.c)
 *     itrp_MDRP @ 0x1C00BD810 (itrp_MDRP.c)
 *     InvokeGetCVTEntry @ 0x1C00BF9EC (InvokeGetCVTEntry.c)
 *     itrp_IUP @ 0x1C00C3B50 (itrp_IUP.c)
 *     scl_ScaleAdvanceWidth @ 0x1C00E4A90 (scl_ScaleAdvanceWidth.c)
 *     bSetXform @ 0x1C00ECDE8 (bSetXform.c)
 *     vGetNotionalGlyphMetrics @ 0x1C00F6A34 (vGetNotionalGlyphMetrics.c)
 *     mth_MxConcat2x2 @ 0x1C011DD44 (mth_MxConcat2x2.c)
 *     scl_ScaleFromFixedFUnits @ 0x1C011E558 (scl_ScaleFromFixedFUnits.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C0247650 (vFillGLYPHDATA_ErrRecover.c)
 *     vCalcXformVertical @ 0x1C0247C60 (vCalcXformVertical.c)
 *     itrp_CheckSingleWidth @ 0x1C02DC67C (itrp_CheckSingleWidth.c)
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
