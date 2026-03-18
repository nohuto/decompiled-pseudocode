/*
 * XREFs of ?Rotate180@CBaseMatrix@@QEAAXXZ @ 0x180138E38
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800328A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@PEAV?$CMatrix@UDeviceHPC@CoordinateSpace@@U12@@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007BCB0 (-CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@PEAV-$CMatrix@UDe.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z @ 0x1800F9CB4 (-CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CBaseMatrix::Rotate180(CBaseMatrix *this)
{
  int v1; // [rsp+20h] [rbp-58h] BYREF
  __int64 v2; // [rsp+24h] [rbp-54h]
  __int64 v3; // [rsp+2Ch] [rbp-4Ch]
  int v4; // [rsp+34h] [rbp-44h]
  __int64 v5; // [rsp+38h] [rbp-40h]
  __int64 v6; // [rsp+40h] [rbp-38h]
  int v7; // [rsp+48h] [rbp-30h]
  __int64 v8; // [rsp+4Ch] [rbp-2Ch]
  __int64 v9; // [rsp+54h] [rbp-24h]
  int v10; // [rsp+5Ch] [rbp-1Ch]

  v1 = -1082130432;
  v2 = 0LL;
  v3 = 0LL;
  v4 = -1082130432;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 1065353216;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 1065353216;
  D2DMatrixMultiply(this, this, (const struct D2DMatrix *)&v1);
}
