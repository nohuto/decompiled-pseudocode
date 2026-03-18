/*
 * XREFs of ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x180064814
 * Callers:
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x1800637B0 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180064780 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CMergedRectBase<4>::SwapExisting(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  char v4; // r11
  __m128i v5; // xmm1
  __int64 result; // rax
  __m128i v7; // [rsp+0h] [rbp-28h]

  v3 = a2 + a1;
  v4 = *(_BYTE *)(v3 + 64);
  if ( v4 )
    v5 = _mm_loadu_si128((const __m128i *)(a1 + 16LL * a2));
  else
    v5 = v7;
  result = a3;
  *(_OWORD *)(a1 + 16LL * a2) = *(_OWORD *)(a1 + 16LL * a3);
  *(_BYTE *)(v3 + 64) = 1;
  if ( v4 )
  {
    *(__m128i *)(a1 + 16LL * a3) = v5;
    *(_BYTE *)(a3 + a1 + 64) = 1;
  }
  else
  {
    *(_BYTE *)(a3 + a1 + 64) = 0;
  }
  return result;
}
