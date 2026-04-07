/*
 * XREFs of ?GetLocalToWorldTransform@CVisual@@QEAAXPEAUD2DMatrix@@@Z @ 0x18000E988
 * Callers:
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x18000F930 (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 * Callees:
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x18000E7FC (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180036340 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

void __fastcall CVisual::GetLocalToWorldTransform(CVisual *this, struct D2DMatrix *a2)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  _DWORD v6[16]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v7[64]; // [rsp+60h] [rbp-9h] BYREF

  *(_QWORD *)((char *)a2 + 52) = 0LL;
  *(_QWORD *)((char *)a2 + 44) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *(_QWORD *)((char *)a2 + 12) = 0LL;
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 15) = 1065353216;
  *((_DWORD *)a2 + 10) = 1065353216;
  *((_DWORD *)a2 + 5) = 1065353216;
  *(_DWORD *)a2 = 1065353216;
  do
  {
    if ( CVisual::GetCurrentTransform(this, (struct D2DMatrix *)v7) )
      D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v7);
    v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 26));
    v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 27));
    v6[11] = 0;
    v6[9] = 0;
    v6[8] = 0;
    v6[7] = 0;
    v6[6] = 0;
    v6[4] = 0;
    v6[3] = 0;
    v6[2] = 0;
    v6[1] = 0;
    v6[14] = 0;
    v6[15] = 1065353216;
    v6[10] = 1065353216;
    v6[5] = 1065353216;
    v6[0] = 1065353216;
    v6[12] = _mm_cvtepi32_ps(v4).m128_u32[0];
    v6[13] = _mm_cvtepi32_ps(v5).m128_u32[0];
    D2DMatrixMultiply(a2, a2, (const struct D2DMatrix *)v6);
    this = (CVisual *)*((_QWORD *)this + 3);
  }
  while ( this && *((_QWORD *)this + 3) );
}
