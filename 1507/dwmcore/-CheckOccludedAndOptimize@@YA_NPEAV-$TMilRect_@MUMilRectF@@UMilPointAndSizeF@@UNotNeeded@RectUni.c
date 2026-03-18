/*
 * XREFs of ?CheckOccludedAndOptimize@@YA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV1@@Z @ 0x18004E2A0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CheckOccludedAndOptimize(float *a1, float *a2)
{
  float v2; // xmm1_4
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v6; // xmm2_4

  if ( *a1 >= *a2 && a2[2] >= a1[2] )
  {
    v2 = a2[1];
    v3 = a1[1];
    v4 = a2[3];
    if ( v3 < v2 )
    {
      v6 = a1[3];
      if ( v4 >= v6 && v6 > v2 )
        a1[3] = v2;
    }
    else
    {
      if ( v4 >= a1[3] )
        return 1;
      if ( v4 > v3 )
        a1[1] = v4;
    }
  }
  return 0;
}
