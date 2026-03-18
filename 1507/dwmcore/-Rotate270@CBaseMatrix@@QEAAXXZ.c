/*
 * XREFs of ?Rotate270@CBaseMatrix@@QEAAXXZ @ 0x180123A88
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E9E0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@PEAV?$CMatrix@UDeviceHPC@CoordinateSpace@@U12@@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18004A758 (-CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@PEAV-$CMatrix@UDe.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z @ 0x1800DD064 (-CalcRotationTransform@CBitmapRealization@@QEBA_NMMPEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

void __fastcall CBaseMatrix::Rotate270(CBaseMatrix *this)
{
  _OWORD v1[2]; // [rsp+20h] [rbp-58h] BYREF
  int v2; // [rsp+40h] [rbp-38h]
  int v3; // [rsp+44h] [rbp-34h]
  int v4; // [rsp+48h] [rbp-30h]
  __int64 v5; // [rsp+4Ch] [rbp-2Ch]
  __int64 v6; // [rsp+54h] [rbp-24h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  v2 = 0;
  v3 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v1[0] = _xmm;
  v1[1] = _xmm;
  v4 = 1065353216;
  v7 = 1065353216;
  D2DMatrixMultiply(this, this, (const struct D2DMatrix *)v1);
}
