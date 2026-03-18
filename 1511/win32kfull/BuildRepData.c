/*
 * XREFs of BuildRepData @ 0x1C00037D8
 * Callers:
 *     BuildExpandAAInfo @ 0x1C00034E0 (BuildExpandAAInfo.c)
 *     BuildShrinkAAInfo @ 0x1C0252840 (BuildShrinkAAInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildRepData(__int64 a1, int a2, int a3)
{
  int v3; // esi
  int v4; // r10d
  int v5; // edx
  int v6; // r11d
  int v7; // r14d
  __int64 v8; // rax
  _WORD *v9; // r12
  int v10; // r9d
  int *v11; // r8
  unsigned __int8 v12; // di
  unsigned __int8 v13; // r15
  int v14; // ebx
  char v15; // r13
  int v16; // ecx
  int v17; // r9d
  int v18; // r8d
  int v19; // ecx
  int v20; // ecx
  int v21; // eax
  int i; // eax
  __int64 result; // rax
  int v24; // [rsp+0h] [rbp-68h]
  int *v25; // [rsp+8h] [rbp-60h]
  int *v26; // [rsp+10h] [rbp-58h]
  __m128i v27; // [rsp+20h] [rbp-48h]
  __int128 v28; // [rsp+30h] [rbp-38h]
  __int128 v29; // [rsp+30h] [rbp-38h]
  __m128i v30; // [rsp+40h] [rbp-28h]
  __int128 v31; // [rsp+50h] [rbp-18h]
  int v33; // [rsp+B8h] [rbp+50h] BYREF
  int v34; // [rsp+C0h] [rbp+58h] BYREF
  int v35; // [rsp+C8h] [rbp+60h]

  v34 = a3;
  v33 = a2;
  v3 = a2;
  v4 = 0;
  v5 = -1;
  v35 = 0;
  v6 = a3;
  v24 = 0;
  v28 = *(_OWORD *)(a1 + 16);
  v7 = _mm_cvtsi128_si32(*(__m128i *)a1);
  v8 = HIDWORD(*(_QWORD *)a1);
  v30 = *(__m128i *)(a1 + 32);
  v27 = *(__m128i *)a1;
  v9 = (_WORD *)_mm_srli_si128(v30, 8).m128i_u64[0];
  v31 = *(_OWORD *)(a1 + 48);
  if ( v7 >= (int)HIDWORD(*(_QWORD *)a1) )
  {
    if ( v7 <= (int)HIDWORD(*(_QWORD *)a1) )
      return 0LL;
    v10 = HIDWORD(*(_QWORD *)a1);
    v25 = &v34;
    v11 = &v33;
    LODWORD(v8) = v7;
  }
  else
  {
    v10 = v7;
    v25 = &v33;
    v11 = &v34;
  }
  v26 = v11;
  v12 = 0;
  v13 = 0;
  v30.m128i_i16[1] = 0;
  v14 = 0;
  v15 = 0;
  v16 = 2 * v8 + v10;
  v17 = 2 * v10;
  if ( v6 >= SHIDWORD(v28) )
    return 0LL;
  v18 = 2;
  while ( 1 )
  {
    v16 -= v17;
    if ( v16 < 0 )
    {
      ++*v25;
      if ( v5 != -1 )
        *v9++ = v14;
      v16 += 2 * v8;
      v14 = 0;
      v6 = v34;
      v15 = 0;
      v3 = v33;
    }
    ++v15;
    if ( v3 < (int)v28 || v3 >= SDWORD1(v28) || v6 < SDWORD2(v28) || v6 >= SHIDWORD(v28) )
    {
      if ( v5 != -1 )
        goto LABEL_19;
    }
    else
    {
      ++v14;
      if ( v5 == -1 )
      {
        v13 = v15 - 1;
        v35 = v6;
        v30.m128i_i8[2] = v15 - 1;
        v5 = v3;
      }
      v4 = v3;
      v24 = v6;
    }
    ++*v26;
    v6 = v34;
    if ( v34 >= SHIDWORD(v28) )
      break;
    v3 = v33;
  }
  if ( v5 == -1 )
    return 0LL;
LABEL_19:
  if ( v14 )
  {
    *v9++ = v14;
    v19 = v16 - v17;
    if ( v19 >= 0 )
    {
      do
      {
        ++v12;
        v19 -= v17;
      }
      while ( v19 >= 0 );
      v30.m128i_i8[3] = v12;
    }
  }
  v20 = v5;
  if ( v7 < v27.m128i_i32[1] )
  {
    v21 = 2;
    do
    {
LABEL_23:
      if ( v20 <= (int)v28 )
        break;
      --v20;
      --v21;
    }
    while ( v21 );
    goto LABEL_24;
  }
  v21 = v13;
  v18 = v12;
  if ( v13 )
    goto LABEL_23;
LABEL_24:
  for ( i = v4; v18; --v18 )
  {
    if ( i >= DWORD1(v28) - 1 )
      break;
    ++i;
  }
  v30.m128i_i8[1] = i - v4;
  DWORD1(v29) = v4 + 1;
  DWORD2(v29) = v35;
  HIDWORD(v29) = v24 + 1;
  result = 1LL;
  v27.m128i_i32[3] = v4 - v5 + 1;
  v27.m128i_i32[2] = v5;
  *(__m128i *)a1 = v27;
  LODWORD(v29) = v5;
  *(_OWORD *)(a1 + 16) = v29;
  *(_QWORD *)&v31 = v9;
  DWORD2(v31) = 1;
  v30.m128i_i8[0] = v5 - v20;
  *(__m128i *)(a1 + 32) = v30;
  *(_OWORD *)(a1 + 48) = v31;
  return result;
}
