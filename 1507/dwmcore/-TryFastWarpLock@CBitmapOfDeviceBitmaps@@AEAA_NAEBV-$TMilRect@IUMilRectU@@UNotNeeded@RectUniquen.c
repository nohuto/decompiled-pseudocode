/*
 * XREFs of ?TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAEPEAI2PEAPEAUIUnknown@@@Z @ 0x180138818
 * Callers:
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180138110 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800DBBEC (-GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEBV-$TMilRect@IUMilRe.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18013F518 (-Create@CWarpLockSubresource@@SAJPEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z.c)
 */

char __fastcall CBitmapOfDeviceBitmaps::TryFastWarpLock(
        __int64 a1,
        const RECT *a2,
        _QWORD *a3,
        int *a4,
        struct CWarpLockSubresource *a5,
        _QWORD *a6)
{
  struct CWarpLockSubresource *v6; // r14
  char v7; // bl
  _QWORD *v8; // r15
  struct CWarpLockSubresource *v12; // rdx
  int v13; // eax
  __m128i v14; // xmm0
  int v15; // ecx
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v6 = a5;
  v7 = 0;
  v8 = a6;
  *a3 = 0LL;
  v17 = 0LL;
  *(_DWORD *)v6 = 0;
  *v8 = 0LL;
  *a4 = 0;
  if ( CBitmapOfDeviceBitmaps::GetSingleContributorToRealizationAreaNoRef(a1, a2, &v17) )
  {
    a5 = 0LL;
    if ( (int)CWarpLockSubresource::Create(*(struct CD3DVidMemOnlyTexture **)(v17 + 160), &a5) >= 0 )
    {
      v12 = a5;
      v7 = 1;
      v13 = *(_DWORD *)(a1 + 188);
      *v8 = a5;
      v14 = *(__m128i *)((char *)v12 + 40);
      *a3 = v14.m128i_i64[0];
      v15 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 8));
      *a4 = v15;
      *(_DWORD *)v6 = v15 * v13;
    }
  }
  return v7;
}
