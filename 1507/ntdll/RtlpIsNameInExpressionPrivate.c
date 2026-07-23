/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x1800E26B4
 * Callers:
 *     RtlIsNameInExpression @ 0x1800E2610 (RtlIsNameInExpression.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memcmp @ 0x180087B20 (memcmp.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     RtlDoesNameContainWildCards @ 0x1800E25BC (RtlDoesNameContainWildCards.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  unsigned __int16 v4; // bx
  unsigned __int16 *v7; // r12
  unsigned __int16 *v8; // r8
  void *v9; // r10
  unsigned __int16 v10; // r14
  __m128i v12; // xmm0
  unsigned __int16 v13; // r9
  const void *v14; // r11
  unsigned __int64 v15; // r10
  unsigned __int16 v17; // r9
  char *v18; // r9
  char *v19; // r15
  int v20; // ebp
  unsigned __int16 v21; // r11
  __int16 v22; // r14
  unsigned __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // rdi
  __int16 v26; // cx
  int v27; // eax
  char v28; // dl
  __int16 v29; // bp
  __int16 v30; // r12
  _OWORD *Heap; // rax
  __int128 v32; // xmm1
  char *v33; // rcx
  char *v34; // rax
  __int64 v35; // rax
  unsigned __int16 v36; // cx
  __int16 v37; // bp
  unsigned __int16 v38; // ax
  __int64 v39; // rax
  unsigned int v40; // r8d
  char *v41; // rax
  unsigned __int16 v42; // cx
  __int16 v43; // di
  char v44; // [rsp+20h] [rbp-D8h]
  unsigned __int16 v45; // [rsp+22h] [rbp-D6h]
  int v48; // [rsp+30h] [rbp-C8h]
  unsigned __int16 v49; // [rsp+38h] [rbp-C0h]
  unsigned int v50; // [rsp+3Ch] [rbp-BCh]
  unsigned int v51; // [rsp+40h] [rbp-B8h]
  char *v52; // [rsp+48h] [rbp-B0h]
  int v53; // [rsp+50h] [rbp-A8h]
  _UNICODE_STRING Expression; // [rsp+60h] [rbp-98h] BYREF
  __int64 v56; // [rsp+70h] [rbp-88h]
  _WORD v57[16]; // [rsp+80h] [rbp-78h] BYREF
  char v58; // [rsp+A0h] [rbp-58h] BYREF

  v4 = 0;
  v7 = a2;
  v56 = a4;
  v8 = a1;
  v9 = 0LL;
  v45 = 0;
  v44 = 0;
  if ( !*a2 )
    return *a2 + *a1 == 0;
  v10 = *a1;
  if ( !*a1 )
    return *a2 + *a1 == 0;
  if ( v10 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) != 42 )
    goto LABEL_17;
  v12 = *(__m128i *)a1;
  *(_QWORD *)&Expression.Length = v12.m128i_i64[0];
  Expression.Length = v12.m128i_i16[0] - 2;
  Expression.Buffer = (unsigned __int16 *)(_mm_srli_si128(v12, 8).m128i_u64[0] + 2);
  if ( RtlDoesNameContainWildCards(&Expression) )
  {
    v8 = a1;
LABEL_17:
    v57[0] = 0;
    v18 = (char *)v57;
    v50 = 1;
    v52 = (char *)v57;
    v19 = &v58;
    v20 = 1;
    v49 = 0;
    v21 = 0;
    v22 = 2 * v10;
LABEL_18:
    if ( v21 >= *v7 )
    {
      v44 = 1;
      if ( *(_WORD *)&v18[2 * (v20 - 1)] == v22 )
        goto LABEL_75;
    }
    else
    {
      v23 = (unsigned __int64)v21 >> 1;
      v21 += 2;
      v49 = v21;
      v45 = *(_WORD *)(*((_QWORD *)v7 + 1) + 2 * v23);
    }
    v51 = 0;
    LODWORD(v24) = 0;
    LODWORD(v25) = 0;
    while ( 1 )
    {
      v26 = 0;
      v27 = (*(unsigned __int16 *)&v18[2 * (unsigned int)v24] + 1) / 2;
      v28 = v44;
      v24 = (unsigned int)(v24 + 1);
      while ( 1 )
      {
        if ( (_WORD)v27 == *v8 )
          goto LABEL_52;
        LOWORD(v27) = v26 + v27;
        v48 = v27;
        v29 = 2 * v27;
        if ( (_WORD)v27 == *v8 )
        {
          *(_WORD *)&v19[2 * (unsigned int)v25] = v22;
          goto LABEL_45;
        }
        v30 = *(_WORD *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v27 >> 1));
        if ( (unsigned int)v25 >= 0xE && !v9 )
        {
          v53 = *v8 >> 1;
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)(v53 + 1));
          v9 = Heap;
          if ( !Heap )
            RtlRaiseStatus(-1073741801);
          v8 = a1;
          v21 = v49;
          *Heap = *(_OWORD *)v19;
          v32 = *((_OWORD *)v19 + 1);
          v19 = (char *)Heap;
          v33 = (char *)Heap + 2 * (unsigned int)(2 * v53 + 2);
          Heap[1] = v32;
          v34 = v52;
          v18 = v33;
          v52 = v33;
          *(_OWORD *)v33 = *(_OWORD *)v34;
          *((_OWORD *)v33 + 1) = *((_OWORD *)v34 + 1);
        }
        if ( v30 == 42 )
          goto LABEL_30;
        if ( v30 == 60 )
        {
          if ( v44 )
          {
LABEL_30:
            v7 = a2;
            goto LABEL_31;
          }
          v7 = a2;
          if ( v45 == 46 )
          {
            v36 = v21;
            if ( v21 < *a2 )
            {
              while ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)v36 >> 1)) != 46 )
              {
                v36 += 2;
                if ( v36 >= *a2 )
                  goto LABEL_40;
              }
              goto LABEL_31;
            }
LABEL_40:
            *(_WORD *)&v19[2 * (unsigned int)v25] = v29 + 3;
          }
          else
          {
LABEL_31:
            v35 = (unsigned int)v25;
            v25 = (unsigned int)(v25 + 1);
            *(_WORD *)&v19[2 * v35] = v29;
            *(_WORD *)&v19[2 * v25] = v29 + 3;
          }
          v28 = v44;
          LODWORD(v25) = v25 + 1;
          goto LABEL_33;
        }
        v28 = v44;
        v37 = v29 + 4;
        if ( v30 != 62 )
          break;
        v27 = v48;
        v7 = a2;
        v26 = 2;
        if ( !v44 )
        {
          if ( v45 != 46 )
          {
            *(_WORD *)&v19[2 * (unsigned int)v25] = v37;
LABEL_45:
            LODWORD(v25) = v25 + 1;
            goto LABEL_52;
          }
LABEL_33:
          v27 = v48;
          v26 = 2;
        }
      }
      if ( v30 == 34 )
        break;
      if ( !v44 )
      {
        if ( v30 != 63 )
        {
          v38 = v45;
          goto LABEL_66;
        }
LABEL_50:
        v39 = (unsigned int)v25;
        LODWORD(v25) = v25 + 1;
        *(_WORD *)&v19[2 * v39] = v37;
      }
LABEL_51:
      v7 = a2;
LABEL_52:
      if ( (unsigned int)v24 < v50 )
      {
        v40 = v51;
        do
        {
          if ( v40 >= (unsigned int)v25 )
            break;
          for ( ; (unsigned int)v24 < v50; v24 = (unsigned int)(v24 + 1) )
          {
            if ( *(_WORD *)&v18[2 * v24] >= *(_WORD *)&v19[2 * v40] )
              break;
          }
          ++v40;
        }
        while ( (unsigned int)v24 < v50 );
        v51 = v40;
        v8 = a1;
        if ( (unsigned int)v24 < v50 )
          continue;
      }
      if ( (_DWORD)v25 )
      {
        v52 = v19;
        v41 = v18;
        v50 = v25;
        v18 = v19;
        v19 = v41;
        v20 = v25;
        if ( v28 )
        {
LABEL_75:
          v43 = *(_WORD *)&v18[2 * (v20 - 1)];
          if ( v9 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
          return v43 == v22;
        }
        goto LABEL_18;
      }
      if ( v9 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      return 0;
    }
    if ( !v44 )
    {
      v38 = v45;
      if ( v45 == 46 )
        goto LABEL_50;
LABEL_66:
      if ( a3 )
        v42 = *(_WORD *)(v56 + 2LL * v38);
      else
        v42 = v38;
      if ( v30 == v42 )
        goto LABEL_50;
      goto LABEL_51;
    }
    v7 = a2;
    goto LABEL_33;
  }
  if ( *v7 < (unsigned __int16)(v10 - 2) )
    return 0;
  v15 = (unsigned __int64)(*v7 - v13) >> 1;
  if ( !a3 )
    return memcmp(v14, (const void *)(*((_QWORD *)v7 + 1) + 2LL * (unsigned int)v15), v13) == 0;
  v17 = v13 >> 1;
  if ( v17 )
  {
    while ( *(_WORD *)(a4 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v7 + 1) + 2LL * ((unsigned int)v15 + v4))) == *((_WORD *)v14 + v4) )
    {
      if ( ++v4 >= v17 )
        return 1;
    }
    return 0;
  }
  return 1;
}
