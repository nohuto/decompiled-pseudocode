/*
 * XREFs of ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C001DB10
 * Callers:
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C001DA40 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CFlipExBuffer::UpdateAttributes(CFlipExBuffer *this, const struct CFlipToken *a2)
{
  __m128 v2; // xmm6
  char v4; // cl
  char v6; // di
  int v7; // eax
  char v8; // r8
  int v9; // eax
  int v10; // eax
  char v11; // r8
  __m128i v12; // xmm1
  __m128i v13; // xmm1
  int v14; // eax
  int v15; // eax
  __m128 v16; // xmm2
  __int64 v17; // xmm3_8
  int v18; // eax

  v2 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 120));
  v4 = *((_BYTE *)a2 + 117);
  v6 = 0;
  if ( (*((_DWORD *)this + 41) & 1) != (v4 != 0) )
  {
    v6 = 1;
    *((_DWORD *)this + 41) ^= ((v4 != 0) ^ (unsigned __int8)*((_DWORD *)this + 41)) & 1;
  }
  v7 = *((_DWORD *)a2 + 36);
  if ( *((_DWORD *)this + 28) != v7 )
  {
    *((_DWORD *)this + 28) = v7;
    v6 = 1;
  }
  if ( ((*((_DWORD *)this + 41) >> 5) & 1) != ((*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 136LL))(a2) != 0) )
  {
    v6 = 1;
    *((_DWORD *)this + 41) ^= (*((_DWORD *)this + 41) ^ (32
                                                       * ((*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 136LL))(a2) != 0))) & 0x20;
  }
  if ( *((float *)this + 17) != v2.m128_f32[0]
    || *((float *)this + 18) != _mm_shuffle_ps(v2, v2, 85).m128_f32[0]
    || *((float *)this + 19) != _mm_shuffle_ps(v2, v2, 170).m128_f32[0]
    || *((float *)this + 20) != _mm_shuffle_ps(v2, v2, 255).m128_f32[0] )
  {
    *(__m128 *)((char *)this + 68) = v2;
    v6 = 1;
  }
  v8 = *((_BYTE *)a2 + 136);
  if ( ((*((_DWORD *)this + 41) >> 2) & 1) != (v8 != 0) )
  {
    v6 = 1;
    *((_DWORD *)this + 41) ^= ((unsigned __int8)*((_DWORD *)this + 41) ^ (unsigned __int8)(4 * (v8 != 0))) & 4;
  }
  v9 = *((_DWORD *)a2 + 53);
  if ( *((_DWORD *)this + 21) != v9 )
  {
    *((_DWORD *)this + 21) = v9;
    v6 = 1;
  }
  v10 = *((_DWORD *)a2 + 35);
  if ( *((_DWORD *)this + 12) != v10 )
  {
    *((_DWORD *)this + 12) = v10;
    v6 = 1;
  }
  v11 = *((_BYTE *)a2 + 137);
  if ( ((*((_DWORD *)this + 41) >> 3) & 1) != (v11 != 0) )
  {
    v6 = 1;
    *((_DWORD *)this + 41) ^= ((unsigned __int8)*((_DWORD *)this + 41) ^ (unsigned __int8)(8 * (v11 != 0))) & 8;
  }
  v12 = *(__m128i *)((char *)a2 + 148);
  if ( *((_QWORD *)this + 12) != *(_QWORD *)((char *)a2 + 148)
    || *((_QWORD *)this + 13) != _mm_srli_si128(v12, 8).m128i_u64[0] )
  {
    v6 = 1;
    *((__m128i *)this + 6) = v12;
  }
  v13 = *(__m128i *)((char *)a2 + 164);
  if ( *(_QWORD *)((char *)this + 148) != *(_QWORD *)((char *)a2 + 164)
    || *(_QWORD *)((char *)this + 156) != _mm_srli_si128(v13, 8).m128i_u64[0] )
  {
    v6 = 1;
    *(__m128i *)((char *)this + 148) = v13;
  }
  v14 = *((_DWORD *)a2 + 45);
  if ( *((_DWORD *)this + 35) != v14 )
  {
    *((_DWORD *)this + 35) = v14;
    v6 = 1;
  }
  v15 = *((_DWORD *)a2 + 46);
  if ( *((_DWORD *)this + 36) != v15 )
  {
    *((_DWORD *)this + 36) = v15;
    v6 = 1;
  }
  v16 = *(__m128 *)((char *)a2 + 188);
  v17 = *(_QWORD *)((char *)a2 + 204);
  if ( *((float *)this + 29) != v16.m128_f32[0]
    || *((float *)this + 30) != _mm_shuffle_ps(v16, v16, 85).m128_f32[0]
    || *((float *)this + 31) != _mm_shuffle_ps(v16, v16, 170).m128_f32[0]
    || *((float *)this + 32) != _mm_shuffle_ps(v16, v16, 255).m128_f32[0]
    || *((float *)this + 33) != *(float *)&v17
    || *((float *)this + 34) != *((float *)&v17 + 1) )
  {
    *(__m128 *)((char *)this + 116) = v16;
    v6 = 1;
    *(_QWORD *)((char *)this + 132) = v17;
  }
  v18 = *((_DWORD *)a2 + 54);
  if ( *((_DWORD *)this + 23) != v18 )
  {
    *((_DWORD *)this + 23) = v18;
    return 1;
  }
  return v6;
}
