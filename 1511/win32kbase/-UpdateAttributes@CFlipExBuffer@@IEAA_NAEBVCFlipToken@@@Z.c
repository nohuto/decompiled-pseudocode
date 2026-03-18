/*
 * XREFs of ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C003DCDC
 * Callers:
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C003DC00 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CFlipExBuffer::UpdateAttributes(CFlipExBuffer *this, const struct CFlipToken *a2)
{
  __m128 v2; // xmm6
  int v3; // esi
  char v6; // di
  int v7; // eax
  int v8; // eax
  int v9; // eax
  char v10; // cl
  __m128i v11; // xmm1
  __m128i v12; // xmm1
  int v13; // eax
  int v14; // eax
  __m128 v15; // xmm2
  __int64 v16; // xmm3_8
  int v17; // eax

  v2 = (__m128)_mm_loadu_si128((const __m128i *)a2 + 8);
  v3 = 0;
  v6 = 0;
  if ( *((_DWORD *)this + 16) != (*((_BYTE *)a2 + 125) != 0) )
  {
    v6 = 1;
    *((_DWORD *)this + 16) = *((_BYTE *)a2 + 125) != 0;
  }
  v7 = *((_DWORD *)a2 + 38);
  if ( *((_DWORD *)this + 26) != v7 )
  {
    *((_DWORD *)this + 26) = v7;
    v6 = 1;
  }
  if ( *((_DWORD *)this + 39) != ((*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 144LL))(a2) != 0) )
  {
    v6 = 1;
    *((_DWORD *)this + 39) = (*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 144LL))(a2) != 0;
  }
  if ( *((float *)this + 18) != v2.m128_f32[0]
    || *((float *)this + 19) != _mm_shuffle_ps(v2, v2, 85).m128_f32[0]
    || *((float *)this + 20) != _mm_shuffle_ps(v2, v2, 170).m128_f32[0]
    || *((float *)this + 21) != _mm_shuffle_ps(v2, v2, 255).m128_f32[0] )
  {
    *(__m128 *)((char *)this + 72) = v2;
    v6 = 1;
  }
  if ( *((_DWORD *)this + 23) != (*((_BYTE *)a2 + 144) != 0) )
  {
    v6 = 1;
    *((_DWORD *)this + 23) = *((_BYTE *)a2 + 144) != 0;
  }
  v8 = *((_DWORD *)a2 + 61);
  if ( *((_DWORD *)this + 40) != v8 )
  {
    *((_DWORD *)this + 40) = v8;
    v6 = 1;
  }
  v9 = *((_DWORD *)a2 + 37);
  if ( *((_DWORD *)this + 12) != v9 )
  {
    *((_DWORD *)this + 12) = v9;
    v6 = 1;
  }
  v10 = *((_BYTE *)a2 + 145);
  if ( *((_DWORD *)this + 24) != (v10 != 0) )
  {
    v6 = 1;
    LOBYTE(v3) = v10 != 0;
    *((_DWORD *)this + 24) = v3;
  }
  v11 = *(__m128i *)((char *)a2 + 156);
  if ( *(_QWORD *)((char *)this + 116) != *(_QWORD *)((char *)a2 + 156)
    || *(_QWORD *)((char *)this + 124) != _mm_srli_si128(v11, 8).m128i_u64[0] )
  {
    v6 = 1;
    *(__m128i *)((char *)this + 116) = v11;
  }
  v12 = *(__m128i *)((char *)a2 + 172);
  if ( *(_QWORD *)((char *)this + 140) != *(_QWORD *)((char *)a2 + 172)
    || *(_QWORD *)((char *)this + 148) != _mm_srli_si128(v12, 8).m128i_u64[0] )
  {
    v6 = 1;
    *(__m128i *)((char *)this + 140) = v12;
  }
  v13 = *((_DWORD *)a2 + 47);
  if ( *((_DWORD *)this + 33) != v13 )
  {
    *((_DWORD *)this + 33) = v13;
    v6 = 1;
  }
  v14 = *((_DWORD *)a2 + 48);
  if ( *((_DWORD *)this + 34) != v14 )
  {
    *((_DWORD *)this + 34) = v14;
    v6 = 1;
  }
  v15 = *(__m128 *)((char *)a2 + 196);
  v16 = *(_QWORD *)((char *)a2 + 212);
  if ( *((float *)this + 47) != v15.m128_f32[0]
    || *((float *)this + 48) != _mm_shuffle_ps(v15, v15, 85).m128_f32[0]
    || *((float *)this + 49) != _mm_shuffle_ps(v15, v15, 170).m128_f32[0]
    || *((float *)this + 50) != _mm_shuffle_ps(v15, v15, 255).m128_f32[0]
    || *((float *)this + 51) != *(float *)&v16
    || *((float *)this + 52) != *((float *)&v16 + 1) )
  {
    *(__m128 *)((char *)this + 188) = v15;
    v6 = 1;
    *(_QWORD *)((char *)this + 204) = v16;
  }
  v17 = *((_DWORD *)a2 + 62);
  if ( *((_DWORD *)this + 41) != v17 )
  {
    *((_DWORD *)this + 41) = v17;
    return 1;
  }
  return v6;
}
