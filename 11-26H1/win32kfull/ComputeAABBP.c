/*
 * XREFs of ComputeAABBP @ 0x1401439E0
 * Callers:
 *     SetupAAHeader @ 0x140142A9C (SetupAAHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeAABBP(__int128 *a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r11d
  __m128i v5; // xmm2
  int v6; // r9d
  __m128i v7; // xmm3
  int v8; // r15d
  int v9; // r10d
  int v10; // r14d
  int v11; // r12d
  int v12; // edi
  int v13; // ebx
  int v14; // r13d
  int v15; // edi
  int v16; // esi
  int v17; // ebx
  int v18; // edx
  int v19; // edx
  int v20; // r9d
  char v21; // al
  int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 (__fastcall *v25)(); // rdx
  __int64 (__fastcall *v26)(int, int, int, int, int); // rax
  __int64 (__fastcall *v27)(int, int, int, int, int, int, int, __int64, __int64, int); // r9
  __int64 (__fastcall *v28)(); // rcx
  int v29; // r9d
  int v30; // eax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  int v33; // edx
  int v34; // ebx
  int v35; // edi
  __int64 result; // rax
  int v37; // ecx
  int v38; // eax
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // xmm0_8
  unsigned __int64 v41; // rbx
  bool v42; // zf
  __m128i v43; // [rsp+0h] [rbp-89h]
  __int128 v44; // [rsp+0h] [rbp-89h]
  __int128 v45; // [rsp+10h] [rbp-79h]
  int v46; // [rsp+14h] [rbp-75h]
  int v47; // [rsp+1Ch] [rbp-6Dh]
  __int128 v48; // [rsp+30h] [rbp-59h]
  __m128i v49; // [rsp+40h] [rbp-49h]
  __m128i v50; // [rsp+50h] [rbp-39h]
  __int128 v51; // [rsp+60h] [rbp-29h]
  __int128 v52; // [rsp+70h] [rbp-19h]
  __int128 v53; // [rsp+80h] [rbp-9h]
  int v54; // [rsp+F0h] [rbp+67h]

  v4 = *((_DWORD *)a1 + 10);
  v5 = (__m128i)a1[2];
  v6 = *(_DWORD *)a3;
  v7 = (__m128i)a1[1];
  v48 = *a1;
  v8 = _mm_cvtsi128_si32(v5);
  v51 = a1[3];
  v49 = v7;
  v53 = a1[5];
  v50 = v5;
  v52 = a1[4];
  if ( v4 < v8 )
  {
    v50.m128i_i32[0] = *((_DWORD *)a1 + 10);
    v50.m128i_i32[2] = v8;
    v8 = v50.m128i_i32[0];
    v5 = v50;
    v4 = v50.m128i_i32[2];
    v6 |= 1u;
  }
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 12));
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
  if ( v9 < v10 )
  {
    v50.m128i_i32[1] = v9;
    v50.m128i_i32[3] = v10;
    v10 = v9;
    v5 = v50;
    v9 = v50.m128i_i32[3];
    v6 |= 2u;
  }
  v11 = _mm_cvtsi128_si32(v7);
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
  if ( v12 < v11 )
  {
    v49.m128i_i32[0] = v12;
    v49.m128i_i32[2] = v11;
    v11 = v12;
    v7 = v49;
    v12 = v49.m128i_i32[2];
    v6 ^= 1u;
  }
  v13 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 12));
  v14 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 4));
  if ( v13 < v14 )
  {
    v49.m128i_i32[1] = v13;
    v49.m128i_i32[3] = v14;
    v14 = v13;
    v7 = v49;
    v13 = v49.m128i_i32[3];
    v6 ^= 2u;
  }
  if ( v11 >= v12 || v14 >= v13 || v8 >= v4 || v10 >= v9 )
    return 0LL;
  v15 = v12 - v11;
  *(_QWORD *)(a3 + 128) = v53;
  v16 = v9 - v10;
  v54 = v4 - v8;
  v17 = v13 - v14;
  if ( (1000 * (v4 - v8) + 500) / v15 > 667 && (1000 * v16 + 500) / v17 > 667 )
    v6 |= 0x40u;
  v18 = 524304;
  if ( v54 * v16 >= v15 * v17 )
    v18 = 8;
  v19 = v6 | v18;
  if ( v17 == v16 )
  {
    v20 = a4;
    *(_QWORD *)(a3 + 40) = BltMask_CY;
    *(_QWORD *)(a3 + 24) = BuildBltAAInfo;
    v21 = 1;
    *(_QWORD *)(a3 + 56) = BltAV_CY;
LABEL_20:
    v22 = v19;
    v23 = 4LL;
    v24 = a3;
    goto LABEL_21;
  }
  if ( v17 >= v16 )
  {
    v20 = a4;
    *(_QWORD *)(a3 + 40) = ShrinkMask_CY;
    *(_QWORD *)(a3 + 56) = ShrinkAV_CY;
    *(_QWORD *)(a3 + 24) = BuildShrinkAAInfo;
    if ( v54 >= v15 || (v21 = 3, a4) )
      v21 = 2;
    goto LABEL_20;
  }
  *(_QWORD *)(a3 + 24) = BuildExpandAAInfo;
  *(_QWORD *)(a3 + 40) = ExpandMask_CY;
  *(_QWORD *)(a3 + 56) = ExpandAV_CY;
  v22 = v19;
  if ( v54 <= v15 )
  {
    v21 = 4;
  }
  else
  {
    if ( (v19 & 0x200) == 0 && 5 * v17 >= v9 - v10 && 5 * v15 >= v54 )
      v22 = v19 | 0x4000;
    v21 = 5;
  }
  v20 = a4;
  v24 = 4LL;
  v23 = a3;
LABEL_21:
  *(_BYTE *)(v23 + v24) = v21;
  if ( v15 == v54 )
  {
    *(_BYTE *)(a3 + 5) = 0;
    v25 = BltMask_CX;
    v26 = GrayCopyDIB_CX;
    if ( !v20 )
      v26 = CopyDIB_CX;
    v27 = BuildBltAAInfo;
    v28 = BltAV_CX;
  }
  else if ( v15 >= v54 )
  {
    *(_BYTE *)(a3 + 5) = 1;
    v22 |= 0x2000u;
    v26 = GrayShrinkDIB_CX;
    v42 = v20 == 0;
    v25 = ShrinkMask_CX;
    v27 = BuildShrinkAAInfo;
    if ( v42 )
      v26 = ShrinkDIB_CX;
    v28 = ShrinkAV_CX;
  }
  else
  {
    *(_BYTE *)(a3 + 5) = 2;
    v26 = GrayExpandDIB_CX;
    if ( !v20 )
      v26 = ExpandDIB_CX;
    v27 = BuildExpandAAInfo;
    v28 = ExpandAV_CX;
    v25 = ExpandMask_CX;
  }
  *(_QWORD *)(a3 + 32) = v25;
  *(_QWORD *)(a3 + 48) = v28;
  *(_QWORD *)(a3 + 16) = v27;
  *(_QWORD *)(a3 + 8) = v26;
  if ( (v48 & 0x40) != 0 )
  {
    *(_BYTE *)(a3 + 4) = 0;
    *(_QWORD *)(a3 + 40) = BltMask_CY;
    *(_QWORD *)(a3 + 56) = TileAV_CY;
    *(_QWORD *)(a3 + 16) = BuildTileAAInfo;
    *(_QWORD *)(a3 + 24) = BuildTileAAInfo;
    *(_QWORD *)(a3 + 32) = BltMask_CX;
    *(_QWORD *)(a3 + 48) = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  *(_DWORD *)a3 = v22;
  *(_DWORD *)(a3 + 136) = DWORD2(v53) - v11;
  *(_DWORD *)(a3 + 140) = HIDWORD(v53) - v14;
  *(__m128i *)(a3 + 64) = v7;
  v43 = v5;
  if ( (v48 & 1) != 0 )
  {
    v37 = v8;
    if ( v8 < (int)v51 )
      v37 = v51;
    v38 = v4;
    v39 = HIDWORD(v5.m128i_i64[0]);
    v40 = _mm_srli_si128(v5, 8).m128i_u64[0];
    if ( v5.m128i_i32[1] < SDWORD1(v51) )
      LODWORD(v39) = DWORD1(v51);
    v43.m128i_i32[0] = v37;
    if ( v4 > SDWORD2(v51) )
      v38 = DWORD2(v51);
    v41 = HIDWORD(v40);
    v43.m128i_i32[1] = v39;
    if ( SHIDWORD(v40) > SHIDWORD(v51) )
      LODWORD(v41) = HIDWORD(v51);
    v43.m128i_i64[1] = __PAIR64__(v41, v38);
    if ( (int)v41 <= (int)v39 || v38 <= v37 )
      return 0LL;
  }
  v29 = v43.m128i_i32[0];
  if ( (v48 & 0x10) != 0 )
  {
    v30 = v43.m128i_i32[2];
    if ( v43.m128i_i32[0] < (int)v52 )
      v29 = v52;
    v31 = HIDWORD(v43.m128i_i64[0]);
    if ( v43.m128i_i32[1] < SDWORD1(v52) )
      LODWORD(v31) = DWORD1(v52);
    v46 = v31;
    if ( v43.m128i_i32[2] > SDWORD2(v52) )
      v30 = DWORD2(v52);
    v32 = HIDWORD(v43.m128i_i64[1]);
    if ( v43.m128i_i32[3] > SHIDWORD(v52) )
      LODWORD(v32) = HIDWORD(v52);
    v47 = v32;
    if ( v30 <= v29 || (int)v32 <= (int)v31 )
      return 0LL;
    v8 -= v52;
    v4 -= v52;
    v10 -= DWORD1(v52);
    *(_DWORD *)(a3 + 128) -= v52;
    v9 -= DWORD1(v52);
    v33 = v30 - v52;
    v50.m128i_i64[0] = __PAIR64__(v10, v8);
    v34 = v46 - DWORD1(v52);
    v50.m128i_i64[1] = __PAIR64__(v9, v4);
    v35 = v47 - DWORD1(v52);
    v29 -= v52;
    *(_DWORD *)(a3 + 132) -= DWORD1(v52);
    v5 = v50;
  }
  else
  {
    v35 = v43.m128i_i32[3];
    v33 = v43.m128i_i32[2];
    v34 = v43.m128i_i32[1];
  }
  if ( v29 < 0 )
    v29 = 0;
  if ( v34 < 0 )
    v34 = 0;
  *(_QWORD *)&v45 = __PAIR64__(v34, v29);
  if ( v33 > *(_DWORD *)(a2 + 12) )
    v33 = *(_DWORD *)(a2 + 12);
  DWORD2(v45) = v33;
  if ( v35 > *(_DWORD *)(a2 + 16) )
    v35 = *(_DWORD *)(a2 + 16);
  HIDWORD(v45) = v35;
  v44 = v45;
  if ( v33 <= v29 || v35 <= v34 )
    return 0LL;
  if ( (v22 & 1) != 0 )
  {
    *(_DWORD *)(a3 + 112) = v4;
    v50.m128i_i32[0] = 0;
    LODWORD(v44) = v4 - v33;
    DWORD2(v44) = v4 - v29;
    v50.m128i_i32[2] = v4 - v8;
    v5 = v50;
  }
  if ( (v22 & 2) != 0 )
  {
    DWORD1(v44) = v9 - v35;
    *(_DWORD *)(a3 + 116) = v9;
    v50.m128i_i32[3] = v9 - v10;
    v50.m128i_i32[1] = 0;
    v5 = v50;
    HIDWORD(v44) = v9 - v34;
  }
  result = 1LL;
  *(_OWORD *)(a3 + 80) = v44;
  *(__m128i *)(a3 + 96) = v5;
  return result;
}
