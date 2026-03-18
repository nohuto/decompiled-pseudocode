/*
 * XREFs of ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012F830
 * Callers:
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C012F714 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C004B598 (GreCreateDIBitmapReal.c)
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJH@Z @ 0x1C012F28C (-DrawRoundedRectangularShadow@@YAXPEAXJJH@Z.c)
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C012FA10 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     ?DrawRegionalShadow@@YAXPEAXJJ@Z @ 0x1C0133238 (-DrawRegionalShadow@@YAXPEAXJJ@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C02B8110 (GreDecBitmapExclusiveRefCnt.c)
 */

__int64 __fastcall GenerateWindowShadow(__m128i *a1, HDC a2)
{
  __m128i v2; // xmm0
  __int8 v3; // r13
  int v5; // r14d
  int v6; // r13d
  int v7; // r12d
  LONG v8; // esi
  LONG v10; // esi
  LONG v11; // edi
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rbx
  HBRUSH StockObject; // rax
  RECT v16; // [rsp+70h] [rbp-49h] BYREF
  int v17; // [rsp+80h] [rbp-39h] BYREF
  void *v18; // [rsp+88h] [rbp-31h] BYREF
  struct tagWND *v19; // [rsp+90h] [rbp-29h]
  __int64 v20; // [rsp+98h] [rbp-21h]
  unsigned int v21[12]; // [rsp+A0h] [rbp-19h] BYREF

  v2 = a1[7];
  v3 = a1[3].m128i_i8[2];
  v19 = (struct tagWND *)a1;
  v5 = 0;
  v6 = v3 & 0x40;
  v7 = 0;
  v16.top = 0;
  v16.bottom = v2.m128i_i32[3] - v2.m128i_i32[1];
  v8 = v2.m128i_i32[2] - _mm_cvtsi128_si32(v2);
  v16.left = 0;
  v16.right = v8;
  if ( IsRectEmptyInl(&v16) )
    return 0LL;
  v10 = v8 + 5;
  v11 = v2.m128i_i32[3] - v2.m128i_i32[1] + 5;
  v16.right = v10;
  v16.bottom = v11;
  memset(v21, 0, 0x2CuLL);
  v21[0] = 40;
  v21[1] = v10;
  v21[2] = v11;
  *(_QWORD *)&v21[3] = 2097153LL;
  v13 = GreCreateDIBitmapReal(a2, v12, 0LL, v21, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v18);
  v14 = v13;
  if ( !v13 )
    return 0LL;
  v20 = GreSelectBitmap(a2, v13);
  StockObject = (HBRUSH)GreGetStockObject(4LL);
  FillRect(a2, &v16, StockObject);
  if ( v10 < 15 || v11 < 15 )
    v7 = 1;
  if ( (unsigned int)DrawWindowShadow(v19, a2, v6, v7, &v17) )
  {
    if ( !v17 || v7 )
      DrawRegionalShadow(v18, v10, v11);
    else
      DrawRoundedRectangularShadow((char *)v18, v10, v11, v6);
    v5 = 1;
  }
  GreDecBitmapExclusiveRefCnt(v14);
  if ( !v5 )
  {
    GreSelectBitmap(a2, v20);
    GreDeleteObject(v14);
    return 0LL;
  }
  return v14;
}
