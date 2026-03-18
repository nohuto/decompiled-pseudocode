/*
 * XREFs of ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0049550
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1C004A2C0 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ?SetCurrentFenceValue@CFlipExBuffer@@IEAA_N_K@Z @ 0x1C00A3FA8 (-SetCurrentFenceValue@CFlipExBuffer@@IEAA_N_K@Z.c)
 *     ?FromToken@CScatterToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C00DF95C (-FromToken@CScatterToken@@SAPEBV1@PEBVCToken@@@Z.c)
 */

__int64 __fastcall CFlipExBuffer::NotifyTokenInFrame(CFlipExBuffer *this, const struct CRegion **a2, bool *a3)
{
  unsigned __int64 v6; // rdi
  int v7; // eax
  const struct CRegion **v8; // rsi
  unsigned int v9; // ebp
  __m128 v10; // xmm6
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __m128i v14; // xmm1
  __m128i v15; // xmm1
  int v16; // eax
  int v17; // eax
  __m128 v18; // xmm2
  __int64 v19; // xmm3_8
  int v20; // eax
  unsigned __int64 v21; // rax
  const struct CScatterToken *v23; // rax

  v6 = 0LL;
  v7 = (*((__int64 (__fastcall **)(const struct CRegion **))*a2 + 8))(a2);
  v8 = 0LL;
  *a3 = 0;
  if ( v7 == 1 )
    v8 = a2;
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 + 25);
    if ( v9 < *((_DWORD *)this + 70) )
    {
      v10 = (__m128)_mm_loadu_si128((const __m128i *)v8 + 8);
      *((_DWORD *)this + 71) = (*((__int64 (__fastcall **)(const struct CRegion **))*v8 + 12))(v8);
      if ( *((_DWORD *)this + 99) != v9 )
      {
        *((_DWORD *)this + 99) = v9;
        *a3 = 1;
      }
      if ( *((_DWORD *)this + 14) != (*((_BYTE *)v8 + 125) != 0) )
      {
        *((_DWORD *)this + 14) = *((_BYTE *)v8 + 125) != 0;
        *a3 = 1;
      }
      v11 = *((_DWORD *)v8 + 38);
      if ( *((_DWORD *)this + 24) != v11 )
      {
        *((_DWORD *)this + 24) = v11;
        *a3 = 1;
      }
      if ( *((_DWORD *)this + 37) != (*((_BYTE *)v8 + 220) != 0) )
      {
        *((_DWORD *)this + 37) = *((_BYTE *)v8 + 220) != 0;
        *a3 = 1;
      }
      if ( *((float *)this + 16) != v10.m128_f32[0]
        || *((float *)this + 17) != _mm_shuffle_ps(v10, v10, 85).m128_f32[0]
        || *((float *)this + 18) != _mm_shuffle_ps(v10, v10, 170).m128_f32[0]
        || *((float *)this + 19) != _mm_shuffle_ps(v10, v10, 255).m128_f32[0] )
      {
        *((__m128 *)this + 4) = v10;
        *a3 = 1;
      }
      if ( *((_DWORD *)this + 21) != (*((_BYTE *)v8 + 144) != 0) )
      {
        *((_DWORD *)this + 21) = *((_BYTE *)v8 + 144) != 0;
        *a3 = 1;
      }
      v12 = *((_DWORD *)v8 + 61);
      if ( *((_DWORD *)this + 38) != v12 )
      {
        *((_DWORD *)this + 38) = v12;
        *a3 = 1;
      }
      v13 = *((_DWORD *)v8 + 37);
      if ( *((_DWORD *)this + 10) != v13 )
      {
        *((_DWORD *)this + 10) = v13;
        *a3 = 1;
      }
      if ( *((_DWORD *)this + 22) != (*((_BYTE *)v8 + 145) != 0) )
      {
        *((_DWORD *)this + 22) = *((_BYTE *)v8 + 145) != 0;
        *a3 = 1;
      }
      v14 = *(__m128i *)((char *)v8 + 156);
      if ( *(const struct CRegion **)((char *)this + 108) != *(const struct CRegion **)((char *)v8 + 156)
        || *(_QWORD *)((char *)this + 116) != _mm_srli_si128(v14, 8).m128i_u64[0] )
      {
        *(__m128i *)((char *)this + 108) = v14;
        *a3 = 1;
      }
      v15 = *(__m128i *)((char *)v8 + 172);
      if ( *(const struct CRegion **)((char *)this + 132) != *(const struct CRegion **)((char *)v8 + 172)
        || *(_QWORD *)((char *)this + 140) != _mm_srli_si128(v15, 8).m128i_u64[0] )
      {
        *(__m128i *)((char *)this + 132) = v15;
        *a3 = 1;
      }
      v16 = *((_DWORD *)v8 + 47);
      if ( *((_DWORD *)this + 31) != v16 )
      {
        *((_DWORD *)this + 31) = v16;
        *a3 = 1;
      }
      v17 = *((_DWORD *)v8 + 48);
      if ( *((_DWORD *)this + 32) != v17 )
      {
        *((_DWORD *)this + 32) = v17;
        *a3 = 1;
      }
      v18 = *(__m128 *)((char *)v8 + 196);
      v19 = *(__int64 *)((char *)v8 + 212);
      if ( *((float *)this + 45) != v18.m128_f32[0]
        || *((float *)this + 46) != _mm_shuffle_ps(v18, v18, 85).m128_f32[0]
        || *((float *)this + 47) != _mm_shuffle_ps(v18, v18, 170).m128_f32[0]
        || *((float *)this + 48) != _mm_shuffle_ps(v18, v18, 255).m128_f32[0]
        || *((float *)this + 49) != *(float *)&v19
        || *((float *)this + 50) != *((float *)&v19 + 1) )
      {
        *(__m128 *)((char *)this + 180) = v18;
        *(_QWORD *)((char *)this + 196) = v19;
        *a3 = 1;
      }
      v20 = *((_DWORD *)v8 + 62);
      if ( *((_DWORD *)this + 39) != v20 )
      {
        *((_DWORD *)this + 39) = v20;
        *a3 = 1;
      }
      if ( *((_DWORD *)this + 42) != (*((_BYTE *)v8 + 222) != 0) )
      {
        *((_DWORD *)this + 42) = *((_BYTE *)v8 + 222) != 0;
        *a3 = 1;
      }
      if ( !*((_BYTE *)this + 33) )
      {
        *((_BYTE *)this + 33) = 1;
        *a3 = 1;
      }
      if ( !*((_BYTE *)v8 + 48) )
      {
        v21 = (unsigned __int64)v8[14];
        if ( v21 > 1 )
          v6 = v21 - 1;
      }
      if ( v6 > *((_QWORD *)this + 47) && v6 > *((_QWORD *)this + 48) )
      {
        *((_QWORD *)this + 47) = v6;
        *a3 = 1;
      }
    }
  }
  else
  {
    v23 = CScatterToken::FromToken((const struct CToken *)a2);
    if ( v23 )
    {
      *((_BYTE *)this + 33) = 1;
      *a3 = 1;
      if ( !*((_BYTE *)v23 + 48) )
        v6 = *((_QWORD *)v23 + 13);
      CFlipExBuffer::SetCurrentFenceValue(this, v6);
    }
  }
  CCompositionBuffer::NotifyDirty(this, a2[10], (const struct ScrollOptimization *)((char *)a2 + 52));
  return 0LL;
}
