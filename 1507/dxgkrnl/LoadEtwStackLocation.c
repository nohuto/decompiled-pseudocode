/*
 * XREFs of LoadEtwStackLocation @ 0x1C001DC64
 * Callers:
 *     DpiDispatchInternalIoctl @ 0x1C00AE3B0 (DpiDispatchInternalIoctl.c)
 *     DpiDispatchPnp @ 0x1C00AF270 (DpiDispatchPnp.c)
 *     DpiDispatchPower @ 0x1C00BDC20 (DpiDispatchPower.c)
 *     DpiDispatchIoctl @ 0x1C00DA100 (DpiDispatchIoctl.c)
 *     DpiDispatchSystemControl @ 0x1C016CF20 (DpiDispatchSystemControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LoadEtwStackLocation(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm4
  __int128 v4; // xmm1
  __m128i v5; // xmm2
  char v6; // dl
  __m128i v7; // xmm0
  unsigned __int64 v8; // xmm3_8
  __int64 v10; // [rsp+20h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(__m128i *)(v2 + 48);
  v4 = *(_OWORD *)(v2 + 16);
  v5 = *(__m128i *)v2;
  *(_QWORD *)(a1 + 48) = v3.m128i_i64[0];
  v6 = _mm_cvtsi128_si32(v5);
  v7 = *(__m128i *)(v2 + 32);
  *(_BYTE *)a1 = v6;
  *(_QWORD *)(a1 + 56) = _mm_srli_si128(v3, 8).m128i_u64[0];
  v8 = _mm_srli_si128(v7, 8).m128i_u64[0];
  v10 = v7.m128i_i64[0];
  *(_BYTE *)(a1 + 1) = v5.m128i_i8[1];
  v7.m128i_i64[0] = *(_QWORD *)(v2 + 64);
  *(_BYTE *)(a1 + 2) = v5.m128i_i8[2];
  *(_QWORD *)(a1 + 64) = v7.m128i_i64[0];
  *(_BYTE *)(a1 + 3) = v5.m128i_i8[3];
  *(_QWORD *)(a1 + 40) = v8;
  if ( v6 != 27 )
    return a1;
  if ( v5.m128i_u8[1] > 0xCu )
  {
    if ( v5.m128i_u8[1] < 0xFu )
      return a1;
    if ( v5.m128i_u8[1] <= 0x10u )
    {
      *(_DWORD *)(a1 + 8) = v5.m128i_i32[2];
      *(_QWORD *)(a1 + 16) = v4;
      *(_DWORD *)(a1 + 24) = DWORD2(v4);
      *(_DWORD *)(a1 + 28) = v10;
      return a1;
    }
    if ( v5.m128i_u8[1] == 18 )
    {
      *(_BYTE *)(a1 + 8) = v5.m128i_i8[8];
      return a1;
    }
    if ( v5.m128i_u8[1] == 19 )
      goto LABEL_11;
    if ( v5.m128i_u8[1] != 22 )
      return a1;
    *(_BYTE *)(a1 + 8) = v5.m128i_i8[8];
LABEL_15:
    *(_DWORD *)(a1 + 12) = v4;
    return a1;
  }
  if ( v5.m128i_u8[1] == 12 )
  {
    *(_DWORD *)(a1 + 8) = v5.m128i_i32[2];
    goto LABEL_15;
  }
  if ( !v5.m128i_i8[1] )
    goto LABEL_11;
  if ( v5.m128i_u8[1] == 1 )
  {
    *(_QWORD *)(a1 + 8) = v5.m128i_i64[1];
    return a1;
  }
  if ( v5.m128i_u8[1] > 1u )
  {
    if ( v5.m128i_u8[1] <= 3u )
    {
      *(_DWORD *)(a1 + 8) = v5.m128i_i32[2];
      *(_DWORD *)(a1 + 12) = v4;
      *(_DWORD *)(a1 + 16) = DWORD2(v4);
      *(_DWORD *)(a1 + 20) = DWORD2(v4);
      *(_DWORD *)(a1 + 24) = v10;
      return a1;
    }
    if ( v5.m128i_u8[1] != 7 )
    {
      if ( v5.m128i_u8[1] == 8 )
      {
        *(_QWORD *)(a1 + 8) = v5.m128i_i64[1];
        *(_DWORD *)(a1 + 16) = v4;
        *(_QWORD *)(a1 + 24) = *((_QWORD *)&v4 + 1);
        *(_QWORD *)(a1 + 32) = v10;
      }
      return a1;
    }
LABEL_11:
    *(_DWORD *)(a1 + 8) = v5.m128i_i32[2];
  }
  return a1;
}
