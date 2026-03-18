/*
 * XREFs of ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x18010ED24
 * Callers:
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x180190F70 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV-$TMilRect_@.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058CF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18005BB80 (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

bool __fastcall CBitmapRealization::CalcImageTransform(CBitmapRealization *this, struct CMILMatrix *a2)
{
  char v2; // bl

  v2 = 0;
  *((_WORD *)a2 + 32) = 32085;
  *(_OWORD *)a2 = _xmm;
  *((_OWORD *)a2 + 1) = _xmm;
  *((_OWORD *)a2 + 2) = _xmm;
  *((_OWORD *)a2 + 3) = _xmm;
  if ( *((int *)this + 62) >= 2 )
  {
    CMILMatrix::Set2DAffineMatrix(
      a2,
      *((float *)this + 49),
      *((float *)this + 50),
      *((float *)this + 51),
      *((float *)this + 52),
      *((float *)this + 53),
      *((float *)this + 54));
    return CMILMatrix::IsIdentity<0>((__int64)a2) == 0;
  }
  return v2;
}
