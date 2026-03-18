/*
 * XREFs of CompDiv @ 0x1C00F85F4
 * Callers:
 *     fxPtSize @ 0x1C0016E94 (fxPtSize.c)
 *     bComputeMaxGlyph @ 0x1C0019FE0 (bComputeMaxGlyph.c)
 *     vCheckForSingularXform @ 0x1C001A658 (vCheckForSingularXform.c)
 *     vQuantizeXform @ 0x1C001A7D4 (vQuantizeXform.c)
 *     scl_InitializeScaling @ 0x1C001B5AC (scl_InitializeScaling.c)
 *     scl_ComputeScaling @ 0x1C001B89C (scl_ComputeScaling.c)
 *     mth_FoldPointSizeResolution @ 0x1C001BA58 (mth_FoldPointSizeResolution.c)
 *     CalcVertLineSubpix @ 0x1C00BD860 (CalcVertLineSubpix.c)
 *     EvaluateSpline @ 0x1C00C0038 (EvaluateSpline.c)
 *     fsc_CheckYReversalInSpline @ 0x1C00C1AB8 (fsc_CheckYReversalInSpline.c)
 *     fsc_MeasureGlyph @ 0x1C00C3070 (fsc_MeasureGlyph.c)
 *     fs_FindBitMapSize @ 0x1C00C408C (fs_FindBitMapSize.c)
 *     mth_IntelMul @ 0x1C00C7178 (mth_IntelMul.c)
 *     fs__Contour @ 0x1C00C7348 (fs__Contour.c)
 *     scl_RoundCurrentSideBearingPnt @ 0x1C00CA08C (scl_RoundCurrentSideBearingPnt.c)
 *     itrp_IUP @ 0x1C00CA6B0 (itrp_IUP.c)
 *     itrp_WCVT @ 0x1C00CC5A0 (itrp_WCVT.c)
 *     itrp_IP @ 0x1C00CE690 (itrp_IP.c)
 *     itrp_SHP @ 0x1C00CF3F0 (itrp_SHP.c)
 *     itrp_Normalize @ 0x1C00D1358 (itrp_Normalize.c)
 *     itrp_SH_Common @ 0x1C00D18F0 (itrp_SH_Common.c)
 *     itrp_MovePoint @ 0x1C00D1A00 (itrp_MovePoint.c)
 *     PhaseShift @ 0x1C00D1F70 (PhaseShift.c)
 *     scl_ScaleAdvanceWidth @ 0x1C0106AE0 (scl_ScaleAdvanceWidth.c)
 *     mth_FixXYMul @ 0x1C0106B94 (mth_FixXYMul.c)
 *     bSetXform @ 0x1C01126D0 (bSetXform.c)
 *     itrp_ChangeCvtSlow @ 0x1C01440B4 (itrp_ChangeCvtSlow.c)
 *     scl_ScaleBack @ 0x1C014C804 (scl_ScaleBack.c)
 *     itrp_ISECT @ 0x1C0152F30 (itrp_ISECT.c)
 *     Intersect26Dot6 @ 0x1C02DEEBC (Intersect26Dot6.c)
 *     CalcHorizLineSubpix @ 0x1C02E0000 (CalcHorizLineSubpix.c)
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
