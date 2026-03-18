/*
 * XREFs of AddNextContiguousRectangle @ 0x1C00D354C
 * Callers:
 *     RemoveGaps @ 0x1C00D3818 (RemoveGaps.c)
 * Callees:
 *     IntersectRect @ 0x1C00553DC (IntersectRect.c)
 */

int **__fastcall AddNextContiguousRectangle(int **a1, int **a2, int a3)
{
  int **v3; // rdi
  int **v4; // rbx
  unsigned __int64 v5; // rcx
  int *v6; // r12
  int **v7; // r13
  int v8; // r10d
  int v9; // r11d
  int v10; // edi
  unsigned __int64 v11; // rbx
  __m128i *v12; // rdx
  int v13; // r9d
  int v14; // esi
  int v15; // ecx
  __int32 v16; // eax
  int v17; // r14d
  int v18; // r8d
  __m128i v19; // xmm0
  int **v20; // r15
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  int *v24; // rax
  __int64 v26; // [rsp+20h] [rbp-69h]
  __int64 v27; // [rsp+28h] [rbp-61h] BYREF
  __m128i v28; // [rsp+30h] [rbp-59h] BYREF
  int **v29; // [rsp+40h] [rbp-49h] BYREF
  int v30; // [rsp+48h] [rbp-41h]
  int *v31; // [rsp+50h] [rbp-39h]
  __int64 v32; // [rsp+58h] [rbp-31h] BYREF
  int ***v33; // [rsp+60h] [rbp-29h]
  __int64 *v34; // [rsp+68h] [rbp-21h]
  unsigned __int64 v35; // [rsp+70h] [rbp-19h]
  int **v36; // [rsp+78h] [rbp-11h]
  int **v37; // [rsp+80h] [rbp-9h] BYREF
  unsigned __int64 v38; // [rsp+88h] [rbp-1h]
  int v39[20]; // [rsp+90h] [rbp+7h] BYREF
  int v40; // [rsp+F0h] [rbp+67h] BYREF
  int **v41; // [rsp+F8h] [rbp+6Fh]
  int v42; // [rsp+100h] [rbp+77h] BYREF
  int v43; // [rsp+108h] [rbp+7Fh]

  v41 = a2;
  v29 = 0LL;
  v37 = 0LL;
  v3 = a1;
  v27 = 0LL;
  v4 = a2;
  v42 = -1;
  v40 = -1;
  v32 = 0LL;
  v36 = a1;
  v5 = (unsigned __int64)&a1[a3];
  v35 = v5;
  if ( v3 >= a2 )
  {
LABEL_32:
    v23 = 0;
    v22 = 0;
    goto LABEL_33;
  }
  do
  {
    v6 = *v3;
    v7 = v4;
    if ( (unsigned __int64)v4 >= v5 )
      goto LABEL_26;
    v8 = v6[1];
    v9 = v6[3];
    v10 = *v6;
    v11 = v35;
    v43 = v8;
    v30 = v9;
    do
    {
      v12 = (__m128i *)*v7;
      v13 = (*v7)[2];
      if ( v13 > v10 )
      {
        v14 = v12->m128i_i32[0] - v6[2];
        v15 = v6[2] - v12->m128i_i32[0];
      }
      else
      {
        v14 = v10 - v13;
        v15 = v10 - v13;
      }
      v16 = v12->m128i_i32[3];
      LODWORD(v26) = v15;
      if ( v16 > v8 )
      {
        v17 = v12->m128i_i32[1] - v9;
        v18 = v9 - v12->m128i_i32[1];
        HIDWORD(v26) = v18;
      }
      else
      {
        v17 = v8 - v16;
        v18 = v8 - v16;
        HIDWORD(v26) = v8 - v16;
      }
      if ( v12->m128i_i32[1] >= v9 || v16 <= v8 )
      {
        if ( v12->m128i_i32[0] >= v6[2] || v13 <= v10 )
        {
          v33 = &v37;
          v34 = &v32;
          v31 = &v40;
          goto LABEL_18;
        }
        v14 = 0;
        v15 = 0;
        LODWORD(v26) = 0;
      }
      else
      {
        v17 = 0;
        v18 = 0;
        HIDWORD(v26) = 0;
      }
      v33 = &v29;
      v31 = &v42;
      v34 = &v27;
LABEL_18:
      v28 = *v12;
      v19 = v28;
      v28.m128i_i32[2] += v15;
      v28.m128i_i32[3] += v18;
      v28.m128i_i32[1] += v18;
      v28.m128i_i32[0] = v15 + _mm_cvtsi128_si32(v19);
      v38 = (unsigned __int64)(v7 + 1);
      v20 = v7 + 1;
      if ( (unsigned __int64)(v7 + 1) >= v11 )
        goto LABEL_22;
      do
      {
        if ( (unsigned int)IntersectRect(v39, *v20, v28.m128i_i32) )
          break;
        ++v20;
      }
      while ( (unsigned __int64)v20 < v11 );
      if ( (unsigned __int64)v20 >= v11 )
      {
LABEL_22:
        if ( v17 + v14 < (unsigned int)*v31 )
        {
          *v31 = v17 + v14;
          *v34 = v26;
          *v33 = v7;
        }
      }
      v7 = (int **)v38;
      v8 = v43;
      v9 = v30;
    }
    while ( v38 < v11 );
    v4 = v41;
    v3 = v36;
    v5 = v35;
LABEL_26:
    v36 = ++v3;
  }
  while ( v3 < v4 );
  if ( v42 != -1 )
  {
    v4 = v29;
    v21 = v27;
    goto LABEL_31;
  }
  if ( v40 == -1 )
    goto LABEL_32;
  v4 = v37;
  v21 = v32;
LABEL_31:
  v22 = v21;
  v23 = HIDWORD(v21);
LABEL_33:
  if ( v22 || v23 )
  {
    v24 = *v4;
    *v24 += v22;
    v24[2] += v22;
    v24[3] += v23;
    v24[1] += v23;
  }
  return v4;
}
