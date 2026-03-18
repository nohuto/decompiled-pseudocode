/*
 * XREFs of ?Is90Or270Rotation@CBaseMatrix@@QEBAHXZ @ 0x180047D88
 * Callers:
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x1800550FC (-ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 */

_BOOL8 __fastcall CBaseMatrix::Is90Or270Rotation(CBaseMatrix *this)
{
  float *v1; // rcx
  float v2; // xmm1_4
  _BOOL8 result; // rax
  float v4; // xmm1_4

  result = 0;
  if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(this) )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v1) & _xmm);
    if ( v2 < 0.00012207031 )
    {
      v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1[5]) & _xmm);
      if ( v4 < 0.00012207031 )
        return 1;
    }
  }
  return result;
}
