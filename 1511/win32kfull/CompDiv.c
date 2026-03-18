/*
 * XREFs of CompDiv @ 0x1C00DA168
 * Callers:
 *     scl_InitializeScaling @ 0x1C00A2E10 (scl_InitializeScaling.c)
 *     scl_ComputeScaling @ 0x1C00A323C (scl_ComputeScaling.c)
 *     EvaluateSpline @ 0x1C00A8524 (EvaluateSpline.c)
 *     fsc_CheckYReversalInSpline @ 0x1C00A9AB8 (fsc_CheckYReversalInSpline.c)
 *     fsc_MeasureGlyph @ 0x1C00AB4F0 (fsc_MeasureGlyph.c)
 *     fs_FindBitMapSize @ 0x1C00AC4E8 (fs_FindBitMapSize.c)
 *     itrp_WCVT @ 0x1C00ADE20 (itrp_WCVT.c)
 *     mth_IntelMul @ 0x1C00ADF24 (mth_IntelMul.c)
 *     fs__Contour @ 0x1C00AE090 (fs__Contour.c)
 *     scl_RoundCurrentSideBearingPnt @ 0x1C00B0BA0 (scl_RoundCurrentSideBearingPnt.c)
 *     mth_FoldPointSizeResolution @ 0x1C00B3218 (mth_FoldPointSizeResolution.c)
 *     itrp_Normalize @ 0x1C00B3B68 (itrp_Normalize.c)
 *     itrp_SHP @ 0x1C00B5380 (itrp_SHP.c)
 *     itrp_IP @ 0x1C00B65B0 (itrp_IP.c)
 *     itrp_SH_Common @ 0x1C00B81FC (itrp_SH_Common.c)
 *     itrp_MovePoint @ 0x1C00B830C (itrp_MovePoint.c)
 *     itrp_ISECT @ 0x1C00B8460 (itrp_ISECT.c)
 *     itrp_IUP @ 0x1C00C3970 (itrp_IUP.c)
 *     PhaseShift @ 0x1C00C42F0 (PhaseShift.c)
 *     scl_ScaleAdvanceWidth @ 0x1C00E5008 (scl_ScaleAdvanceWidth.c)
 *     mth_FixXYMul @ 0x1C00E5110 (mth_FixXYMul.c)
 *     bSetXform @ 0x1C00F1070 (bSetXform.c)
 *     CalcVertLineSubpix @ 0x1C00F8C90 (CalcVertLineSubpix.c)
 *     fxPtSize @ 0x1C01159C0 (fxPtSize.c)
 *     vQuantizeXform @ 0x1C01189B4 (vQuantizeXform.c)
 *     bComputeMaxGlyph @ 0x1C0119094 (bComputeMaxGlyph.c)
 *     vCheckForSingularXform @ 0x1C01197B0 (vCheckForSingularXform.c)
 *     itrp_ChangeCvtSlow @ 0x1C01449D0 (itrp_ChangeCvtSlow.c)
 *     scl_ScaleBack @ 0x1C01480E4 (scl_ScaleBack.c)
 *     CalcHorizLineSubpix @ 0x1C014D1F0 (CalcHorizLineSubpix.c)
 *     Intersect26Dot6 @ 0x1C02D9FB0 (Intersect26Dot6.c)
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
