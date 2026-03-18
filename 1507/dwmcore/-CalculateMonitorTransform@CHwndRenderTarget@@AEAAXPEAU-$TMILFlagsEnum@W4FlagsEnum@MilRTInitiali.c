/*
 * XREFs of ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXPEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18004A810
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18004AC20 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?InferAffineMatrix@CBaseMatrix@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180022A50 (-InferAffineMatrix@CBaseMatrix@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@PEAV?$CMatrix@UDeviceHPC@CoordinateSpace@@U12@@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18004A758 (-CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@PEAV-$CMatrix@UDe.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::CalculateMonitorTransform(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v5; // r14d
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // rax
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+40h] [rbp-39h] BYREF
  int v12; // [rsp+44h] [rbp-35h]
  float v13; // [rsp+48h] [rbp-31h]
  float v14; // [rsp+4Ch] [rbp-2Dh]
  __int128 v15; // [rsp+50h] [rbp-29h]
  float v16[4]; // [rsp+60h] [rbp-19h] BYREF
  _OWORD v17[4]; // [rsp+70h] [rbp-9h] BYREF

  v2 = a1[10];
  v17[0] = IdentityMatrix;
  v5 = *(_DWORD *)(v2 + 896);
  v17[1] = xmmword_180190B10;
  v17[2] = xmmword_180190B20;
  v6 = *(_OWORD *)(v2 + 112);
  v17[3] = xmmword_180190B30;
  v7 = *(_OWORD *)(v2 + 96);
  v8 = *a1;
  v10 = v6;
  v15 = v7;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(v8 + 128))(a1) )
  {
    v11 = 0;
    v12 = 0;
    v16[0] = (float)(int)v15;
    v16[2] = (float)SDWORD2(v15);
    v14 = (float)(HIDWORD(v10) - DWORD1(v10));
    v13 = (float)(DWORD2(v10) - v10);
    v16[1] = (float)SDWORD1(v15);
    v16[3] = (float)SHIDWORD(v15);
    if ( ((v5 - 2) & 0xFFFFFFFD) == 0 )
    {
      v11 = 0;
      v12 = 0;
      v13 = (float)(HIDWORD(v10) - DWORD1(v10));
      v14 = (float)(DWORD2(v10) - v10);
    }
    CBaseMatrix::InferAffineMatrix((__int64)v17, (float *)&v11, v16);
  }
  CHwndRenderTarget::CalculateTransform((__int64)a1, v5, (int *)&v10, (const struct D2DMatrix *)v17, a2);
  result = a1[10];
  if ( *(_BYTE *)(result + 146) )
    *a2 |= 0x20000000u;
  *a2 |= 0x800u;
  return result;
}
