/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x1400C2D40
 * Callers:
 *     RtlIsNameInExpression @ 0x1400C2CC0 (RtlIsNameInExpression.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     RtlDoesNameContainWildCards @ 0x1400C31F0 (RtlDoesNameContainWildCards.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // si
  __int64 v8; // r15
  __int16 v10; // r11
  int v12; // r9d
  __int16 v13; // r11
  __int16 *v14; // r12
  unsigned __int16 v15; // r10
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned int v18; // ebx
  unsigned int v19; // r14d
  __int64 v20; // rax
  int v21; // esi
  __int16 v22; // ax
  _OWORD *v23; // r8
  unsigned __int16 v24; // dx
  __int16 v25; // bp
  __int16 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int16 v31; // bp
  bool v32; // zf
  unsigned __int16 v33; // cx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  __int16 v37; // bx
  __m128i v38; // xmm0
  unsigned __int16 v39; // di
  unsigned __int64 v40; // xmm1_8
  unsigned __int64 v41; // r9
  unsigned __int16 v42; // di
  unsigned __int16 v43; // cx
  __int64 v44; // rax
  __int64 v45; // rax
  _OWORD *PoolWithTag; // rax
  _OWORD *v47; // rcx
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
  UNICODE_STRING Name; // [rsp+48h] [rbp-A0h] BYREF
  int v61; // [rsp+58h] [rbp-90h]
  __int64 v62; // [rsp+60h] [rbp-88h]
  __int16 v63; // [rsp+70h] [rbp-78h] BYREF
  char v64; // [rsp+90h] [rbp-58h] BYREF

  v4 = *(_WORD *)a2;
  v5 = 0;
  v62 = a4;
  v8 = a2;
  v54 = 0;
  P = 0LL;
  v51 = 0;
  if ( !v4 )
    return v4 + *a1 == 0;
  v10 = *a1;
  v52 = *a1;
  if ( !*a1 )
    return v4 + *a1 == 0;
  if ( v10 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) == 42 )
  {
    v38 = *(__m128i *)a1;
    *(_QWORD *)&Name.Length = v38.m128i_i64[0];
    v39 = v38.m128i_i16[0] - 2;
    v40 = _mm_srli_si128(v38, 8).m128i_u64[0];
    Name.Length = v38.m128i_i16[0] - 2;
    Name.Buffer = (wchar_t *)(v40 + 2);
    if ( !RtlDoesNameContainWildCards(&Name) )
    {
      if ( v4 >= (unsigned __int16)(v52 - 2) )
      {
        v41 = (unsigned __int64)(v4 - v39) >> 1;
        if ( !a3 )
          return memcmp((const void *)(v40 + 2), (const void *)(*(_QWORD *)(v8 + 8) + 2LL * (unsigned int)v41), v39) == 0;
        v42 = v39 >> 1;
        if ( !v42 )
          return 1;
        while ( *(_WORD *)(a4 + 2LL * *(unsigned __int16 *)(*(_QWORD *)(v8 + 8) + 2LL * ((unsigned int)v41 + v5))) == *(_WORD *)(v40 + 2 + 2LL * v5) )
        {
          if ( ++v5 >= v42 )
            return 1;
        }
      }
      return 0;
    }
    v10 = v52;
  }
  v63 = 0;
  v12 = 1;
  *(_QWORD *)&Name.Length = &v64;
  v13 = 2 * v10;
  v58 = 1;
  v53 = v13;
  v14 = &v63;
  v15 = 0;
  v57 = 0;
  while ( 2 )
  {
    if ( v15 >= *(_WORD *)v8 )
    {
      v51 = 1;
      if ( v14[v12 - 1] == v13 )
        break;
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
      v21 = ((unsigned __int16)v14[v20] + 1) / 2;
      v22 = 0;
      v23 = *(_OWORD **)&Name.Length;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v24 = *a1;
              if ( (_WORD)v21 == *a1 )
                goto LABEL_30;
              LOWORD(v21) = v22 + v21;
              v25 = 2 * v21;
              if ( (_WORD)v21 == v24 )
              {
                v13 = v53;
                v29 = v18++;
                *((_WORD *)v23 + v29) = v53;
                goto LABEL_18;
              }
              v26 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v21 >> 1));
              if ( v18 >= 0xE && !P )
              {
                v61 = v24 >> 1;
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v61 + 1), 0x6E725346u);
                P = PoolWithTag;
                if ( !PoolWithTag )
                  RtlRaiseStatus(-1073741801);
                v47 = *(_OWORD **)&Name.Length;
                v23 = PoolWithTag;
                v15 = v57;
                *(_QWORD *)&Name.Length = PoolWithTag;
                *PoolWithTag = *v47;
                v48 = v47[1];
                LODWORD(v47) = v61;
                PoolWithTag[1] = v48;
                v49 = (__int16 *)PoolWithTag + (unsigned int)(2 * (_DWORD)v47 + 2);
                *(_OWORD *)v49 = *(_OWORD *)v14;
                v50 = *((_OWORD *)v14 + 1);
                v14 = v49;
                *((_OWORD *)v49 + 1) = v50;
              }
              if ( v26 != 42 )
                break;
              v8 = a2;
              v27 = v18;
              v28 = v18 + 1;
              *((_WORD *)v23 + v27) = v25;
              v22 = 2;
              *((_WORD *)v23 + v28) = v25 + 3;
              v18 = v28 + 1;
            }
            if ( v26 != 60 )
              break;
            v8 = a2;
            if ( v54 != 46 || v51 )
              goto LABEL_42;
            v43 = v15;
            if ( v15 >= *(_WORD *)a2 )
            {
LABEL_62:
              v44 = v18++;
              *((_WORD *)v23 + v44) = v25 + 3;
              v22 = 2;
            }
            else
            {
              while ( *(_WORD *)(*(_QWORD *)(a2 + 8) + 2 * ((unsigned __int64)v43 >> 1)) != 46 )
              {
                v43 += 2;
                if ( v43 >= *(_WORD *)a2 )
                  goto LABEL_62;
              }
LABEL_42:
              v35 = v18;
              v36 = v18 + 1;
              *((_WORD *)v23 + v35) = v25;
              v22 = 2;
              *((_WORD *)v23 + v36) = v25 + 3;
              v18 = v36 + 1;
            }
          }
          v31 = v25 + 4;
          if ( v26 != 62 )
            break;
          v22 = 2;
          v8 = a2;
          if ( !v51 )
          {
            if ( v54 != 46 )
            {
              v13 = v53;
              v45 = v18++;
              *((_WORD *)v23 + v45) = v31;
              goto LABEL_18;
            }
            v22 = 2;
          }
        }
        if ( v26 != 34 )
        {
          if ( !v51 )
          {
            v32 = v26 == 63;
            goto LABEL_36;
          }
LABEL_29:
          v8 = a2;
LABEL_30:
          v13 = v53;
          goto LABEL_18;
        }
        if ( !v51 )
          break;
        v22 = 2;
        v8 = a2;
      }
      v32 = v54 == 46;
LABEL_36:
      if ( v32 )
      {
        v30 = v18++;
        *((_WORD *)v23 + v30) = v31;
        goto LABEL_29;
      }
      if ( a3 )
        v33 = *(_WORD *)(v62 + 2LL * v54);
      else
        v33 = v54;
      v13 = v53;
      v32 = v26 == (__int16)v33;
      v8 = a2;
      if ( v32 )
      {
        v34 = v18++;
        *((_WORD *)v23 + v34) = v31;
      }
LABEL_18:
      if ( (unsigned int)v17 < v58 )
      {
        while ( v19 < v18 )
        {
          do
          {
            if ( (unsigned __int16)v14[v17] >= *((_WORD *)v23 + v19) )
              break;
            v17 = (unsigned int)(v17 + 1);
          }
          while ( (unsigned int)v17 < v58 );
          ++v19;
          if ( (unsigned int)v17 >= v58 )
            goto LABEL_19;
        }
        continue;
      }
      break;
    }
LABEL_19:
    if ( !v18 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
      return 0;
    }
    v12 = v18;
    *(_QWORD *)&Name.Length = v14;
    v14 = (__int16 *)v23;
    v58 = v18;
    if ( !v51 )
      continue;
    break;
  }
  v37 = v14[v12 - 1];
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    v13 = v53;
  }
  return v37 == v13;
}
