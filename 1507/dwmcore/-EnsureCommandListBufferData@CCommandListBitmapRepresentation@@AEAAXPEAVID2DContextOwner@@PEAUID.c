/*
 * XREFs of ?EnsureCommandListBufferData@CCommandListBitmapRepresentation@@AEAAXPEAVID2DContextOwner@@PEAUID2D1Bitmap@@@Z @ 0x180011C5C
 * Callers:
 *     ?GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180011858 (-GetD2DCommandList@CCommandListBitmapRepresentation@@QEAAJPEAVCPolygon@@PEAVID2DContextOwner@@PE.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CCommandListBitmapRepresentation::EnsureCommandListBufferData(
        CCommandListBitmapRepresentation *this,
        struct ID2DContextOwner *a2,
        struct ID2D1Bitmap *a3)
{
  float v5; // xmm0_4
  __m128 v6; // xmm3
  float v7; // xmm1_4
  bool v8; // zf
  float v9; // xmm4_4
  __m128 v10; // xmm1
  _DWORD v11[2]; // [rsp+20h] [rbp-30h] BYREF
  float v12; // [rsp+28h] [rbp-28h] BYREF
  float v13; // [rsp+2Ch] [rbp-24h]
  float v14[6]; // [rsp+30h] [rbp-20h]

  (*(void (__fastcall **)(struct ID2D1Bitmap *, float *))(*(_QWORD *)a3 + 32LL))(a3, &v12);
  (*(void (__fastcall **)(struct ID2D1Bitmap *, _DWORD *))(*(_QWORD *)a3 + 48LL))(a3, v11);
  v5 = v12;
  v6 = 0LL;
  v7 = v13;
  *(_QWORD *)&v14[1] = 0LL;
  v8 = v11[1] == 3;
  v9 = 1.0 / v13;
  *((_DWORD *)this + 3) = 1;
  *((float *)this + 41) = v7;
  v10 = 0LL;
  v14[0] = 1.0 / v5;
  v14[3] = v9;
  v10.m128_f32[0] = 0.0 - (float)((float)(1.0 / v5) * 0.0);
  *((float *)this + 40) = v5;
  v6.m128_f32[0] = 0.0 - (float)(v9 * 0.0);
  *(_OWORD *)((char *)this + 216) = *(_OWORD *)v14;
  *((_QWORD *)this + 29) = _mm_unpacklo_ps(v10, v6).m128_u64[0];
  if ( v8 )
    *((_DWORD *)this + 3) |= 0x20u;
  if ( v11[0] == 10 )
    *((_DWORD *)this + 3) |= 4u;
}
