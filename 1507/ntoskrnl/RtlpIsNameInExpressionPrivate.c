/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x1400F8170
 * Callers:
 *     RtlIsNameInExpression @ 0x1400F80F0 (RtlIsNameInExpression.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     RtlDoesNameContainWildCards @ 0x1400F8640 (RtlDoesNameContainWildCards.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // di
  __int64 v8; // r12
  __int16 v9; // r11
  int v11; // r9d
  __int16 v12; // r11
  __int16 *v13; // r15
  char *v14; // r13
  unsigned __int16 v15; // r10
  unsigned __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // ebx
  unsigned int v19; // r14d
  __int64 v20; // rax
  int v21; // edi
  __int16 v22; // ax
  unsigned __int16 *v23; // r8
  unsigned __int16 v24; // dx
  __int16 v25; // bp
  __int16 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int16 *v30; // rax
  __int64 v31; // rax
  __int16 v32; // bp
  bool v33; // zf
  unsigned __int16 v34; // cx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int16 v38; // bx
  __m128i v39; // xmm0
  unsigned __int16 v40; // si
  unsigned __int64 v41; // xmm1_8
  unsigned __int64 v42; // r9
  unsigned __int16 v43; // si
  unsigned __int16 v44; // cx
  __int64 v45; // rax
  __int64 v46; // rax
  _OWORD *PoolWithTag; // rax
  __int128 v48; // xmm1
  __int16 *v49; // rcx
  __int128 v50; // xmm1
  char v51; // [rsp+20h] [rbp-C8h]
  __int16 v52; // [rsp+22h] [rbp-C6h]
  __int16 v53; // [rsp+22h] [rbp-C6h]
  unsigned __int16 v54; // [rsp+24h] [rbp-C4h]
  unsigned __int16 v57; // [rsp+34h] [rbp-B4h]
  unsigned int v58; // [rsp+38h] [rbp-B0h]
  PVOID P; // [rsp+40h] [rbp-A8h]
  int v61; // [rsp+50h] [rbp-98h]
  UNICODE_STRING Name; // [rsp+58h] [rbp-90h] BYREF
  __int64 v63; // [rsp+68h] [rbp-80h]
  __int16 v64; // [rsp+70h] [rbp-78h] BYREF
  char v65; // [rsp+90h] [rbp-58h] BYREF

  v4 = *(_WORD *)a2;
  v5 = 0;
  v63 = a4;
  v51 = 0;
  v8 = a2;
  v54 = 0;
  P = 0LL;
  if ( !v4 )
    return v4 + *a1 == 0;
  v9 = *a1;
  v52 = *a1;
  if ( !*a1 )
    return v4 + *a1 == 0;
  if ( v9 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) == 42 )
  {
    v39 = *(__m128i *)a1;
    *(_QWORD *)&Name.Length = v39.m128i_i64[0];
    v40 = v39.m128i_i16[0] - 2;
    v41 = _mm_srli_si128(v39, 8).m128i_u64[0];
    Name.Length = v39.m128i_i16[0] - 2;
    Name.Buffer = (wchar_t *)(v41 + 2);
    if ( !RtlDoesNameContainWildCards(&Name) )
    {
      if ( v4 >= (unsigned __int16)(v52 - 2) )
      {
        v42 = (unsigned __int64)(v4 - v40) >> 1;
        if ( !a3 )
          return memcmp((const void *)(v41 + 2), (const void *)(*(_QWORD *)(v8 + 8) + 2LL * (unsigned int)v42), v40) == 0;
        v43 = v40 >> 1;
        if ( !v43 )
          return 1;
        while ( *(_WORD *)(a4 + 2LL * *(unsigned __int16 *)(*(_QWORD *)(v8 + 8) + 2LL * ((unsigned int)v42 + v5))) == *(_WORD *)(v41 + 2 + 2LL * v5) )
        {
          if ( ++v5 >= v43 )
            return 1;
        }
      }
      return 0;
    }
    v9 = v52;
  }
  v11 = 1;
  v12 = 2 * v9;
  v58 = 1;
  v53 = v12;
  v13 = &v64;
  v14 = &v65;
  v64 = 0;
  v15 = 0;
  v57 = 0;
  while ( 2 )
  {
    if ( v15 >= *(_WORD *)v8 )
    {
      v51 = 1;
      if ( v13[v11 - 1] == v12 )
      {
LABEL_43:
        v38 = v13[v11 - 1];
        if ( P )
        {
          ExFreePoolWithTag(P, 0);
          v12 = v53;
        }
        return v38 == v12;
      }
    }
    else
    {
      v16 = (unsigned __int64)v15 >> 1;
      v15 += 2;
      v57 = v15;
      v54 = *(_WORD *)(*(_QWORD *)(v8 + 8) + 2 * v16);
    }
    LODWORD(v17) = 0;
    v18 = 0;
    v19 = 0;
    while ( 2 )
    {
      v20 = (unsigned int)v17;
      v17 = (unsigned int)(v17 + 1);
      v21 = ((unsigned __int16)v13[v20] + 1) / 2;
      v22 = 0;
      v23 = a1;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v24 = *v23;
              if ( (_WORD)v21 == *v23 )
                goto LABEL_29;
              LOWORD(v21) = v22 + v21;
              v25 = 2 * v21;
              if ( (_WORD)v21 == v24 )
              {
                v12 = v53;
                v29 = v18++;
                *(_WORD *)&v14[2 * v29] = v53;
                goto LABEL_18;
              }
              v26 = *(_WORD *)(*((_QWORD *)v23 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v21 >> 1));
              if ( v18 >= 0xE && !P )
              {
                v61 = v24 >> 1;
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v61 + 1), 0x6E725346u);
                P = PoolWithTag;
                if ( !PoolWithTag )
                  RtlRaiseStatus(-1073741801);
                v23 = a1;
                v15 = v57;
                *PoolWithTag = *(_OWORD *)v14;
                v48 = *((_OWORD *)v14 + 1);
                v14 = (char *)PoolWithTag;
                v49 = (__int16 *)PoolWithTag + (unsigned int)(2 * v61 + 2);
                PoolWithTag[1] = v48;
                *(_OWORD *)v49 = *(_OWORD *)v13;
                v50 = *((_OWORD *)v13 + 1);
                v13 = v49;
                *((_OWORD *)v49 + 1) = v50;
              }
              if ( v26 != 42 )
                break;
              v8 = a2;
              v27 = v18;
              v28 = v18 + 1;
              *(_WORD *)&v14[2 * v27] = v25;
              v22 = 2;
              *(_WORD *)&v14[2 * v28] = v25 + 3;
              v18 = v28 + 1;
            }
            if ( v26 != 60 )
              break;
            v8 = a2;
            if ( v54 != 46 || v51 )
              goto LABEL_41;
            v44 = v15;
            if ( v15 >= *(_WORD *)a2 )
            {
LABEL_61:
              v45 = v18++;
              *(_WORD *)&v14[2 * v45] = v25 + 3;
              v22 = 2;
            }
            else
            {
              while ( *(_WORD *)(*(_QWORD *)(a2 + 8) + 2 * ((unsigned __int64)v44 >> 1)) != 46 )
              {
                v44 += 2;
                if ( v44 >= *(_WORD *)a2 )
                  goto LABEL_61;
              }
LABEL_41:
              v36 = v18;
              v37 = v18 + 1;
              *(_WORD *)&v14[2 * v36] = v25;
              v22 = 2;
              *(_WORD *)&v14[2 * v37] = v25 + 3;
              v18 = v37 + 1;
            }
          }
          v32 = v25 + 4;
          if ( v26 != 62 )
            break;
          v22 = 2;
          v8 = a2;
          if ( !v51 )
          {
            if ( v54 != 46 )
            {
              v12 = v53;
              v46 = v18++;
              *(_WORD *)&v14[2 * v46] = v32;
              goto LABEL_18;
            }
            v22 = 2;
          }
        }
        if ( v26 != 34 )
        {
          if ( !v51 )
          {
            v33 = v26 == 63;
            goto LABEL_35;
          }
LABEL_28:
          v8 = a2;
LABEL_29:
          v12 = v53;
          goto LABEL_18;
        }
        if ( !v51 )
          break;
        v22 = 2;
        v8 = a2;
      }
      v33 = v54 == 46;
LABEL_35:
      if ( v33 )
      {
        v31 = v18++;
        *(_WORD *)&v14[2 * v31] = v32;
        goto LABEL_28;
      }
      if ( a3 )
        v34 = *(_WORD *)(v63 + 2LL * v54);
      else
        v34 = v54;
      v12 = v53;
      v33 = v26 == (__int16)v34;
      v8 = a2;
      if ( v33 )
      {
        v35 = v18++;
        *(_WORD *)&v14[2 * v35] = v32;
      }
LABEL_18:
      if ( (unsigned int)v17 < v58 )
      {
        while ( v19 < v18 )
        {
          do
          {
            if ( (unsigned __int16)v13[v17] >= *(_WORD *)&v14[2 * v19] )
              break;
            v17 = (unsigned int)(v17 + 1);
          }
          while ( (unsigned int)v17 < v58 );
          ++v19;
          if ( (unsigned int)v17 >= v58 )
            goto LABEL_22;
        }
        continue;
      }
      break;
    }
LABEL_22:
    if ( v18 )
    {
      v30 = v13;
      v13 = (__int16 *)v14;
      v58 = v18;
      v14 = (char *)v30;
      v11 = v18;
      if ( v51 )
        goto LABEL_43;
      continue;
    }
    break;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0;
}
