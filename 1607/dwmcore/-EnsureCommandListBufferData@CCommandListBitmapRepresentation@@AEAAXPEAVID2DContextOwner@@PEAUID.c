/*
 * XREFs of ?EnsureCommandListBufferData@CCommandListBitmapRepresentation@@AEAAXPEAVID2DContextOwner@@PEAUID2D1Bitmap@@@Z @ 0x18000F28C
 * Callers:
 *     ?BuildCommandBuffers@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAUID2D1Bitmap@@PEAPEAUID2D1PrivateCompositorBuffer@@3@Z @ 0x18000F37C (-BuildCommandBuffers@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAVID2DContex.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  float v11; // [rsp+20h] [rbp-38h] BYREF
  float v12; // [rsp+24h] [rbp-34h]
  _BYTE v13[4]; // [rsp+28h] [rbp-30h] BYREF
  int v14; // [rsp+2Ch] [rbp-2Ch]
  float v15[6]; // [rsp+30h] [rbp-28h]

  (*(void (__fastcall **)(struct ID2D1Bitmap *, float *))(*(_QWORD *)a3 + 32LL))(a3, &v11);
  (*(void (__fastcall **)(struct ID2D1Bitmap *, _BYTE *))(*(_QWORD *)a3 + 48LL))(a3, v13);
  v5 = v11;
  v6 = 0LL;
  v7 = v12;
  *(_QWORD *)&v15[1] = 0LL;
  v8 = v14 == 3;
  v9 = 1.0 / v12;
  *((_DWORD *)this + 3) = 1;
  *((float *)this + 41) = v7;
  v10 = 0LL;
  v15[0] = 1.0 / v5;
  v15[3] = v9;
  v10.m128_f32[0] = 0.0 - (float)((float)(1.0 / v5) * 0.0);
  *((float *)this + 40) = v5;
  v6.m128_f32[0] = 0.0 - (float)(v9 * 0.0);
  *(_OWORD *)((char *)this + 216) = *(_OWORD *)v15;
  *((_QWORD *)this + 29) = _mm_unpacklo_ps(v10, v6).m128_u64[0];
  if ( v8 )
    *((_DWORD *)this + 3) |= 0x10u;
}
