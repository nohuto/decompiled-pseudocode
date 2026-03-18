/*
 * XREFs of ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180190EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058CF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x180190790 (-CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 */

bool __fastcall CDxHandleYUVBitmapRealization::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[64]; // [rsp+20h] [rbp-58h] BYREF
  int v8; // [rsp+60h] [rbp-18h]

  *(_WORD *)(a2 + 64) = 32085;
  *(_OWORD *)a2 = _xmm;
  v8 = 0;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  if ( (unsigned __int8)CBitmapRealization::CalcRotationTransform(
                          (CBitmapRealization *)(a1 - 112),
                          (struct CMILMatrix *)v7) )
    CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)v7);
  if ( a3 )
  {
    *(_QWORD *)a3 = 0LL;
    *(float *)(a3 + 8) = (float)*(int *)(a1 + 108);
    *(float *)(a3 + 12) = (float)*(int *)(a1 + 112);
  }
  return CMILMatrix::IsIdentity<0>(a2) == 0;
}
