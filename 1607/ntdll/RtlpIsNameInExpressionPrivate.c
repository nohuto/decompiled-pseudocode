/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x1800F0934
 * Callers:
 *     RtlIsNameInExpression @ 0x1800F0890 (RtlIsNameInExpression.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memcmp @ 0x18009A690 (memcmp.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     RtlDoesNameContainWildCards @ 0x1800F083C (RtlDoesNameContainWildCards.c)
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
  char v27; // dl
  int v28; // eax
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
  char v44; // [rsp+20h] [rbp-C8h]
  unsigned __int16 v45; // [rsp+22h] [rbp-C6h]
  int v47; // [rsp+28h] [rbp-C0h]
  unsigned __int16 v49; // [rsp+38h] [rbp-B0h]
  unsigned int v50; // [rsp+3Ch] [rbp-ACh]
  unsigned int v51; // [rsp+40h] [rbp-A8h]
  int v52; // [rsp+44h] [rbp-A4h]
  char *v54; // [rsp+50h] [rbp-98h]
  _UNICODE_STRING Expression; // [rsp+58h] [rbp-90h] BYREF
  __int64 v56; // [rsp+68h] [rbp-80h]
  _WORD v57[16]; // [rsp+70h] [rbp-78h] BYREF
  char v58; // [rsp+90h] [rbp-58h] BYREF

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
  Expression.Buffer = (wchar_t *)(_mm_srli_si128(v12, 8).m128i_u64[0] + 2);
  if ( RtlDoesNameContainWildCards(&Expression) )
  {
    v8 = a1;
LABEL_17:
    v57[0] = 0;
    v51 = 1;
    v49 = 0;
    v18 = (char *)v57;
    v54 = (char *)v57;
    v19 = &v58;
    v20 = 1;
    v21 = 0;
    if ( v10 > 0x7FFFu )
      return 0;
    v22 = 2 * v10;
LABEL_19:
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
    v50 = 0;
    LODWORD(v24) = 0;
    LODWORD(v25) = 0;
    while ( 1 )
    {
      v26 = 0;
      v27 = v44;
      v28 = (*(unsigned __int16 *)&v18[2 * (unsigned int)v24] + 1) / 2;
      v24 = (unsigned int)(v24 + 1);
      while ( 1 )
      {
        if ( (_WORD)v28 == *v8 )
          goto LABEL_53;
        LOWORD(v28) = v26 + v28;
        v47 = v28;
        v29 = 2 * v28;
        if ( (_WORD)v28 == *v8 )
        {
          *(_WORD *)&v19[2 * (unsigned int)v25] = v22;
          goto LABEL_46;
        }
        v30 = *(_WORD *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v28 >> 1));
        if ( (unsigned int)v25 >= 0xE && !v9 )
        {
          v52 = *v8 >> 1;
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)(v52 + 1));
          v9 = Heap;
          if ( !Heap )
            RtlRaiseStatus(-1073741801);
          v8 = a1;
          v21 = v49;
          *Heap = *(_OWORD *)v19;
          v32 = *((_OWORD *)v19 + 1);
          v19 = (char *)Heap;
          v33 = (char *)Heap + 2 * (unsigned int)(2 * v52 + 2);
          Heap[1] = v32;
          v34 = v54;
          v18 = v33;
          v54 = v33;
          *(_OWORD *)v33 = *(_OWORD *)v34;
          *((_OWORD *)v33 + 1) = *((_OWORD *)v34 + 1);
        }
        if ( v30 == 42 )
          goto LABEL_31;
        if ( v30 == 60 )
        {
          if ( v44 )
          {
LABEL_31:
            v7 = a2;
            goto LABEL_32;
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
                  goto LABEL_41;
              }
              goto LABEL_32;
            }
LABEL_41:
            *(_WORD *)&v19[2 * (unsigned int)v25] = v29 + 3;
          }
          else
          {
LABEL_32:
            v35 = (unsigned int)v25;
            v25 = (unsigned int)(v25 + 1);
            *(_WORD *)&v19[2 * v35] = v29;
            *(_WORD *)&v19[2 * v25] = v29 + 3;
          }
          v27 = v44;
          LODWORD(v25) = v25 + 1;
          goto LABEL_34;
        }
        v27 = v44;
        v37 = v29 + 4;
        if ( v30 != 62 )
          break;
        v28 = v47;
        v7 = a2;
        v26 = 2;
        if ( !v44 )
        {
          if ( v45 != 46 )
          {
            *(_WORD *)&v19[2 * (unsigned int)v25] = v37;
LABEL_46:
            LODWORD(v25) = v25 + 1;
            goto LABEL_53;
          }
LABEL_34:
          v28 = v47;
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
          goto LABEL_67;
        }
LABEL_51:
        v39 = (unsigned int)v25;
        LODWORD(v25) = v25 + 1;
        *(_WORD *)&v19[2 * v39] = v37;
      }
LABEL_52:
      v7 = a2;
LABEL_53:
      if ( (unsigned int)v24 < v51 )
      {
        v40 = v50;
        do
        {
          if ( v40 >= (unsigned int)v25 )
            break;
          for ( ; (unsigned int)v24 < v51; v24 = (unsigned int)(v24 + 1) )
          {
            if ( *(_WORD *)&v18[2 * v24] >= *(_WORD *)&v19[2 * v40] )
              break;
          }
          ++v40;
        }
        while ( (unsigned int)v24 < v51 );
        v50 = v40;
        v8 = a1;
        if ( (unsigned int)v24 < v51 )
          continue;
      }
      if ( (_DWORD)v25 )
      {
        v54 = v19;
        v41 = v18;
        v51 = v25;
        v18 = v19;
        v19 = v41;
        v20 = v25;
        if ( v27 )
        {
LABEL_75:
          v43 = *(_WORD *)&v18[2 * (v20 - 1)];
          if ( v9 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
          return v43 == v22;
        }
        goto LABEL_19;
      }
      if ( v9 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      return 0;
    }
    if ( !v44 )
    {
      v38 = v45;
      if ( v45 == 46 )
        goto LABEL_51;
LABEL_67:
      if ( a3 )
        v42 = *(_WORD *)(v56 + 2LL * v38);
      else
        v42 = v38;
      if ( v30 == v42 )
        goto LABEL_51;
      goto LABEL_52;
    }
    v7 = a2;
    goto LABEL_34;
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
