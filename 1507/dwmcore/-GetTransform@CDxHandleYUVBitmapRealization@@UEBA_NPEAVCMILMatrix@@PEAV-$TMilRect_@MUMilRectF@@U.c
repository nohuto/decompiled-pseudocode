/*
 * XREFs of ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014FE00
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18001EFF0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x18014FA88 (-CalcRotationTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 */

bool __fastcall CDxHandleYUVBitmapRealization::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[64]; // [rsp+20h] [rbp-68h] BYREF

  *(_QWORD *)(a2 + 52) = 0LL;
  *(_QWORD *)(a2 + 44) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 12) = 0LL;
  *(_QWORD *)(a2 + 4) = 0LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_DWORD *)(a2 + 40) = 1065353216;
  *(_DWORD *)(a2 + 20) = 1065353216;
  *(_DWORD *)a2 = 1065353216;
  if ( CBitmapRealization::CalcRotationTransform((CBitmapRealization *)(a1 - 112), (struct CMILMatrix *)v7) )
    D2DMatrixMultiply((struct D2DMatrix *)a2, (const struct D2DMatrix *)a2, (const struct D2DMatrix *)v7);
  if ( a3 )
  {
    *(_QWORD *)a3 = 0LL;
    *(float *)(a3 + 8) = (float)*(int *)(a1 + 100);
    *(float *)(a3 + 12) = (float)*(int *)(a1 + 104);
  }
  return !D2DMatrixIsIdentity((const struct D2DMatrix *)a2);
}
