/*
 * XREFs of ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_N_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22@Z @ 0x18015E9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180047060 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F9BDC (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z @ 0x1800F9CB4 (-CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z.c)
 *     ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x1800F9DE0 (-CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::GetTransformAndYUVRects(
        __int64 a1,
        char a2,
        __int64 a3,
        float *a4,
        __int64 a5,
        float *a6)
{
  __int128 v7; // xmm0
  CBitmapRealization *v8; // rbx
  __int128 v10; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v11[64]; // [rsp+30h] [rbp-50h] BYREF

  *a4 = (float)*(int *)(a1 - 324);
  a4[1] = (float)*(int *)(a1 - 320);
  a4[2] = (float)*(int *)(a1 - 316);
  a4[3] = (float)*(int *)(a1 - 312);
  *(_QWORD *)a5 = 0LL;
  *(float *)(a5 + 8) = (float)*(int *)(a1 - 308);
  *(float *)(a5 + 12) = (float)*(int *)(a1 - 304);
  *a6 = (float)*(int *)(a1 - 300);
  a6[1] = (float)*(int *)(a1 - 296);
  a6[2] = (float)*(int *)(a1 - 292);
  a6[3] = (float)*(int *)(a1 - 288);
  if ( !a2 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 - 408) + 32LL))(a1 - 408, a3, 0LL);
  v7 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_QWORD *)(a3 + 52) = 0LL;
  v8 = (CBitmapRealization *)(a1 - 520);
  *(_QWORD *)(a3 + 44) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_QWORD *)(a3 + 24) = 0LL;
  v10 = v7;
  *(_QWORD *)(a3 + 12) = 0LL;
  *(_QWORD *)(a3 + 4) = 0LL;
  *(_DWORD *)(a3 + 60) = 1065353216;
  *(_DWORD *)(a3 + 40) = 1065353216;
  *(_DWORD *)(a3 + 20) = 1065353216;
  *(_DWORD *)a3 = 1065353216;
  if ( CBitmapRealization::GetSourceRect(a1 - 520, (__int64)&v10) )
  {
    *(float *)(a3 + 48) = COERCE_FLOAT(v10 ^ _xmm) + *(float *)(a3 + 48);
    *(float *)(a3 + 52) = COERCE_FLOAT(DWORD1(v10) ^ _xmm) + *(float *)(a3 + 52);
  }
  if ( CBitmapRealization::CalcRotationTransform(
         v8,
         *((float *)&v10 + 2) - *(float *)&v10,
         *((float *)&v10 + 3) - *((float *)&v10 + 1),
         (struct CMILMatrix *)v11) )
  {
    D2DMatrixMultiply((struct D2DMatrix *)a3, (const struct D2DMatrix *)a3, (const struct D2DMatrix *)v11);
  }
  if ( CBitmapRealization::CalcImageTransform(v8, (struct CMILMatrix *)v11) )
    D2DMatrixMultiply((struct D2DMatrix *)a3, (const struct D2DMatrix *)a3, (const struct D2DMatrix *)v11);
  return !D2DMatrixIsIdentity((const struct D2DMatrix *)a3);
}
