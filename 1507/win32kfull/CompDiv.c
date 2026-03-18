/*
 * XREFs of CompDiv @ 0x1C00D3E04
 * Callers:
 *     fxPtSize @ 0x1C00A8700 (fxPtSize.c)
 *     bComputeMaxGlyph @ 0x1C00A9D18 (bComputeMaxGlyph.c)
 *     vCheckForSingularXform @ 0x1C00AA460 (vCheckForSingularXform.c)
 *     vQuantizeXform @ 0x1C00AA5B4 (vQuantizeXform.c)
 *     scl_InitializeScaling @ 0x1C00AB384 (scl_InitializeScaling.c)
 *     scl_ComputeScaling @ 0x1C00AB7B0 (scl_ComputeScaling.c)
 *     EvaluateSpline @ 0x1C00B01D0 (EvaluateSpline.c)
 *     fsc_CheckYReversalInSpline @ 0x1C00B1228 (fsc_CheckYReversalInSpline.c)
 *     fsc_MeasureGlyph @ 0x1C00B2BF0 (fsc_MeasureGlyph.c)
 *     fs_FindBitMapSize @ 0x1C00B3C18 (fs_FindBitMapSize.c)
 *     mth_IntelMul @ 0x1C00B4E24 (mth_IntelMul.c)
 *     fs__Contour @ 0x1C00B4F90 (fs__Contour.c)
 *     scl_RoundCurrentSideBearingPnt @ 0x1C00B79B4 (scl_RoundCurrentSideBearingPnt.c)
 *     itrp_WCVT @ 0x1C00B9F30 (itrp_WCVT.c)
 *     mth_FoldPointSizeResolution @ 0x1C00BA6A8 (mth_FoldPointSizeResolution.c)
 *     mth_FixXYMul @ 0x1C00BA740 (mth_FixXYMul.c)
 *     itrp_SH_Common @ 0x1C00BAA78 (itrp_SH_Common.c)
 *     itrp_Normalize @ 0x1C00BB41C (itrp_Normalize.c)
 *     itrp_SHP @ 0x1C00BCC00 (itrp_SHP.c)
 *     itrp_IP @ 0x1C00BDE80 (itrp_IP.c)
 *     itrp_MovePoint @ 0x1C00BFA38 (itrp_MovePoint.c)
 *     itrp_ISECT @ 0x1C00BFF40 (itrp_ISECT.c)
 *     itrp_IUP @ 0x1C00C3B50 (itrp_IUP.c)
 *     PhaseShift @ 0x1C00C44D0 (PhaseShift.c)
 *     scl_ScaleAdvanceWidth @ 0x1C00E4A90 (scl_ScaleAdvanceWidth.c)
 *     bSetXform @ 0x1C00ECDE8 (bSetXform.c)
 *     CalcVertLineSubpix @ 0x1C00F3A80 (CalcVertLineSubpix.c)
 *     itrp_ChangeCvtSlow @ 0x1C011AD9C (itrp_ChangeCvtSlow.c)
 *     scl_ScaleBack @ 0x1C011DEF4 (scl_ScaleBack.c)
 *     Intersect26Dot6 @ 0x1C02D9084 (Intersect26Dot6.c)
 *     CalcHorizLineSubpix @ 0x1C02DDF50 (CalcHorizLineSubpix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompDiv(int a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // rax
  int v4; // r9d
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rtt
  int v8; // ecx
  __int64 result; // rax
  unsigned __int64 v10; // [rsp+10h] [rbp+10h]

  v2 = a1;
  v3 = a2;
  v4 = a1 ^ HIDWORD(a2);
  if ( !a1 )
    goto LABEL_19;
  if ( a1 < 0 )
    v2 = -a1;
  v5 = HIDWORD(a2);
  if ( a2 < 0 )
  {
    if ( (_DWORD)a2 )
      v5 = ~HIDWORD(a2);
    else
      v5 = -HIDWORD(a2);
    HIDWORD(v10) = v5;
    LODWORD(v10) = -(int)a2;
    v3 = v10;
  }
  if ( v2 > v5 && ((v7 = v3, v6 = v3 / v2, v8 = v6, v7 % v2 < v2 >> 1) || (v8 = v6 + 1, (_DWORD)v6 != -1)) )
  {
    if ( v4 < 0 )
    {
      if ( v8 >= 0 || v8 == 0x80000000 )
        return (unsigned int)-v8;
      else
        return 0x80000000LL;
    }
    else
    {
      result = 0x7FFFFFFFLL;
      if ( v8 >= 0 )
        return (unsigned int)v8;
    }
  }
  else
  {
LABEL_19:
    result = 0x7FFFFFFFLL;
    if ( v4 < 0 )
      return 0x80000000LL;
  }
  return result;
}
