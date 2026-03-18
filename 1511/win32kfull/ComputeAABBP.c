/*
 * XREFs of ComputeAABBP @ 0x1C00BE27C
 * Callers:
 *     SetupAAHeader @ 0x1C00BD57C (SetupAAHeader.c)
 * Callees:
 *     IntersectRECTL @ 0x1C00BE610 (IntersectRECTL.c)
 */

__int64 __fastcall ComputeAABBP(__int128 *a1, __int64 a2, __m128i *a3, int a4)
{
  int v4; // edi
  __int128 v6; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm6
  int v9; // r12d
  int v10; // r14d
  int v11; // esi
  int v12; // r15d
  int v13; // r10d
  int v14; // r9d
  int v15; // r8d
  int v16; // r11d
  int v17; // r9d
  int v18; // r8d
  int v19; // r13d
  int v20; // edi
  int v21; // ecx
  __int64 (__fastcall *v22)(int, int, int, int, int); // rdx
  __int64 (__fastcall *v23)(int, int, int, int, int); // rax
  char v24; // r13
  int v25; // eax
  int v26; // eax
  __m128i v27; // xmm0
  __int64 result; // rax
  char v29; // al
  __int32 v30; // ecx
  __int32 v31; // eax
  int v32; // edx
  int v33; // ecx
  __m128i v34; // [rsp+28h] [rbp-79h] BYREF
  __int128 v35; // [rsp+38h] [rbp-69h]
  __m128i v36; // [rsp+48h] [rbp-59h]
  __m128i v37; // [rsp+58h] [rbp-49h]
  __int128 v38; // [rsp+68h] [rbp-39h] BYREF
  __int128 v39; // [rsp+78h] [rbp-29h] BYREF
  __int128 v40; // [rsp+88h] [rbp-19h]
  __int64 v41; // [rsp+98h] [rbp-9h]
  _DWORD v42[8]; // [rsp+A8h] [rbp+7h] BYREF
  int v43; // [rsp+108h] [rbp+67h]

  v4 = a3->m128i_i32[0];
  v6 = a1[4];
  v7 = (__m128i)a1[1];
  v35 = *a1;
  v8 = (__m128i)a1[2];
  v38 = a1[3];
  v9 = _mm_cvtsi128_si32(v8);
  v40 = a1[5];
  v37 = v8;
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
  v39 = v6;
  *(_QWORD *)&v6 = *((_QWORD *)a1 + 12);
  v36 = v7;
  v41 = v6;
  v37.m128i_i32[2] = v10;
  v37.m128i_i32[0] = v9;
  if ( v10 < v9 )
  {
    v37.m128i_i32[0] = v10;
    v37.m128i_i32[2] = v9;
    v9 = v10;
    v8 = v37;
    v10 = v37.m128i_i32[2];
    v4 |= 1u;
  }
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 12));
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 4));
  v37.m128i_i32[3] = v11;
  v37.m128i_i32[1] = v12;
  if ( v11 < v12 )
  {
    v37.m128i_i32[1] = v11;
    v37.m128i_i32[3] = v12;
    v12 = v11;
    v8 = v37;
    v11 = v37.m128i_i32[3];
    v4 |= 2u;
  }
  v13 = _mm_cvtsi128_si32(v7);
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
  v36.m128i_i32[0] = v13;
  v36.m128i_i32[2] = v14;
  if ( v14 < v13 )
  {
    v36.m128i_i32[0] = v14;
    v36.m128i_i32[2] = v13;
    v13 = v14;
    v7 = v36;
    v14 = v36.m128i_i32[2];
    v4 ^= 1u;
  }
  v15 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
  v36.m128i_i32[3] = v15;
  v36.m128i_i32[1] = v16;
  if ( v15 < v16 )
  {
    v36.m128i_i32[1] = v15;
    v36.m128i_i32[3] = v16;
    v16 = v15;
    v7 = v36;
    v15 = v36.m128i_i32[3];
    v4 ^= 2u;
  }
  if ( v13 >= v14 || v16 >= v15 || v9 >= v10 || v12 >= v11 )
    return 0LL;
  v17 = v14 - v13;
  a3[8].m128i_i64[0] = v40;
  v18 = v15 - v16;
  v19 = v11 - v12;
  if ( (1000 * (v10 - v9) + 500) / v17 > 667 && (1000 * v19 + 500) / v18 > 667 )
    v4 |= 0x40u;
  v43 = v10 - v9;
  if ( (v10 - v9) * v19 < v17 * v18 )
    v20 = v4 | 0x80010;
  else
    v20 = v4 | 8;
  if ( v18 == v19 )
  {
    a3[1].m128i_i64[1] = (__int64)BuildBltAAInfo;
    a3[2].m128i_i64[1] = (__int64)BltMask_CY;
    a3[3].m128i_i64[1] = (__int64)BltAV_CY;
    a3->m128i_i8[4] = 1;
LABEL_20:
    v21 = a4;
    goto LABEL_21;
  }
  if ( v18 < v19 )
  {
    a3[2].m128i_i64[1] = (__int64)ExpandMask_CY;
    a3[3].m128i_i64[1] = (__int64)ExpandAV_CY;
    a3[1].m128i_i64[1] = (__int64)BuildExpandAAInfo;
    if ( v43 > v17 )
    {
      if ( (v20 & 0x200) == 0 && 5 * v18 >= v19 && 5 * v17 >= v43 )
        v20 |= 0x4000u;
      a3->m128i_i8[4] = 5;
    }
    else
    {
      a3->m128i_i8[4] = 4;
    }
    goto LABEL_20;
  }
  v21 = a4;
  a3[2].m128i_i64[1] = (__int64)ShrinkMask_CY;
  a3[3].m128i_i64[1] = (__int64)ShrinkAV_CY;
  a3[1].m128i_i64[1] = (__int64)BuildShrinkAAInfo;
  if ( v43 >= v17 || (v29 = 3, a4) )
    v29 = 2;
  a3->m128i_i8[4] = v29;
LABEL_21:
  if ( v17 == v43 )
  {
    a3->m128i_i8[5] = 0;
    a3[3].m128i_i64[0] = (__int64)BltAV_CX;
    v22 = GrayCopyDIB_CX;
    a3[2].m128i_i64[0] = (__int64)BltMask_CX;
    a3[1].m128i_i64[0] = (__int64)BuildBltAAInfo;
    v23 = CopyDIB_CX;
  }
  else if ( v17 >= v43 )
  {
    a3->m128i_i8[5] = 1;
    a3[2].m128i_i64[0] = (__int64)ShrinkMask_CX;
    v22 = GrayShrinkDIB_CX;
    a3[1].m128i_i64[0] = (__int64)BuildShrinkAAInfo;
    a3[3].m128i_i64[0] = (__int64)ShrinkAV_CX;
    v20 |= 0x2000u;
    v23 = ShrinkDIB_CX;
  }
  else
  {
    a3->m128i_i8[5] = 2;
    a3[2].m128i_i64[0] = (__int64)ExpandMask_CX;
    v22 = GrayExpandDIB_CX;
    a3[3].m128i_i64[0] = (__int64)ExpandAV_CX;
    a3[1].m128i_i64[0] = (__int64)BuildExpandAAInfo;
    v23 = ExpandDIB_CX;
  }
  v24 = v35;
  if ( v21 )
    v23 = v22;
  a3->m128i_i64[1] = (__int64)v23;
  if ( (v24 & 0x40) != 0 )
  {
    a3[3].m128i_i64[0] = 0LL;
    a3->m128i_i64[1] = 0LL;
    a3[2].m128i_i64[1] = (__int64)BltMask_CY;
    a3[3].m128i_i64[1] = (__int64)TileAV_CY;
    a3[1].m128i_i64[0] = (__int64)BuildTileAAInfo;
    a3[1].m128i_i64[1] = (__int64)BuildTileAAInfo;
    a3->m128i_i8[4] = 0;
    a3[2].m128i_i64[0] = (__int64)BltMask_CX;
  }
  v25 = DWORD2(v40) - v13;
  a3->m128i_i32[0] = v20;
  a3[8].m128i_i32[2] = v25;
  a3[8].m128i_i32[3] = HIDWORD(v40) - v16;
  a3[4] = v7;
  v34 = v8;
  if ( (v24 & 1) != 0 && !(unsigned int)IntersectRECTL(&v34, &v38) )
    return 0LL;
  if ( (v24 & 0x10) != 0 )
  {
    if ( !(unsigned int)IntersectRECTL(&v34, &v39) )
      return 0LL;
    v9 -= v39;
    v26 = DWORD1(v39);
    v10 -= v39;
    v34.m128i_i32[0] -= v39;
    v12 -= DWORD1(v39);
    v34.m128i_i32[2] -= v39;
    v11 -= DWORD1(v39);
    v34.m128i_i32[1] -= DWORD1(v39);
    v34.m128i_i32[3] -= DWORD1(v39);
    a3[8].m128i_i32[0] -= v39;
    a3[8].m128i_i32[1] -= v26;
    v37.m128i_i32[0] = v9;
    *(__int64 *)((char *)v37.m128i_i64 + 4) = __PAIR64__(v10, v12);
    v37.m128i_i32[3] = v11;
    v8 = v37;
  }
  v42[1] = 0;
  v42[0] = 0;
  v42[2] = *(_DWORD *)(a2 + 12);
  v42[3] = *(_DWORD *)(a2 + 16);
  if ( !(unsigned int)IntersectRECTL(&v34, v42) )
    return 0LL;
  if ( (v20 & 1) != 0 )
  {
    v30 = v34.m128i_i32[2] - v34.m128i_i32[0];
    v34.m128i_i32[0] = v10 - v34.m128i_i32[2];
    v31 = v30 + v10 - v34.m128i_i32[2];
    a3[7].m128i_i32[0] = v10;
    v37.m128i_i32[0] = 0;
    v37.m128i_i32[2] = v10 - v9;
    v8 = v37;
    v34.m128i_i32[2] = v31;
  }
  if ( (v20 & 2) != 0 )
  {
    v32 = v34.m128i_i32[3] - v34.m128i_i32[1];
    v34.m128i_i32[1] = v11 - v34.m128i_i32[3];
    v33 = v32 + v11 - v34.m128i_i32[3];
    a3[7].m128i_i32[1] = v11;
    v37.m128i_i32[1] = 0;
    v37.m128i_i32[3] = v11 - v12;
    v8 = v37;
    v34.m128i_i32[3] = v33;
  }
  v27 = v34;
  result = 1LL;
  a3[6] = v8;
  a3[5] = v27;
  return result;
}
