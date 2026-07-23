/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x1400815C0
 * Callers:
 *     RtlIsNameInExpression @ 0x140081540 (RtlIsNameInExpression.c)
 * Callees:
 *     RtlDoesNameContainWildCards @ 0x140081B10 (RtlDoesNameContainWildCards.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  unsigned __int16 v4; // r12
  unsigned __int16 *v5; // r14
  char v7; // r9
  unsigned __int16 v9; // si
  unsigned __int16 v10; // r11
  void *v11; // r10
  unsigned __int16 v12; // di
  __m128i v14; // xmm0
  unsigned __int16 v15; // bx
  unsigned __int64 v16; // xmm1_8
  unsigned __int64 v17; // r9
  unsigned __int16 v18; // bx
  char *v19; // r8
  char *v20; // r15
  unsigned int v21; // r13d
  unsigned __int16 v22; // bp
  __int16 v23; // di
  unsigned __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned int v26; // edi
  __int64 v27; // rax
  int v28; // r12d
  __int16 v29; // ax
  unsigned __int16 *v30; // r8
  unsigned __int16 v31; // dx
  __int16 v32; // si
  __int16 v33; // bp
  int v34; // r14d
  _OWORD *PoolWithTag; // rax
  __int64 v36; // rcx
  char *v37; // rcx
  __int128 v38; // xmm1
  char *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdi
  unsigned __int16 v42; // ax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdi
  __int16 v46; // si
  __int64 v47; // rax
  bool v48; // zf
  __int64 v49; // rax
  unsigned int v50; // r9d
  char *v51; // rax
  unsigned __int16 v52; // cx
  __int64 v53; // rax
  __int16 v54; // bx
  unsigned __int16 v55; // [rsp+20h] [rbp-C8h]
  char v56; // [rsp+22h] [rbp-C6h]
  unsigned __int16 v57; // [rsp+24h] [rbp-C4h]
  __int16 v58; // [rsp+24h] [rbp-C4h]
  unsigned __int16 v60; // [rsp+28h] [rbp-C0h]
  char *v61; // [rsp+30h] [rbp-B8h]
  unsigned int v62; // [rsp+38h] [rbp-B0h]
  UNICODE_STRING Name; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int16 *v65; // [rsp+58h] [rbp-90h]
  __int64 v66; // [rsp+60h] [rbp-88h]
  _WORD v67[16]; // [rsp+70h] [rbp-78h] BYREF
  char v68; // [rsp+90h] [rbp-58h] BYREF

  v4 = 0;
  v66 = a4;
  v5 = a2;
  v65 = a2;
  v7 = 0;
  v60 = 0;
  v9 = *a2;
  v10 = 0;
  v56 = 0;
  v11 = 0LL;
  if ( !*a2 )
    return *a1 + v9 == 0;
  v12 = *a1;
  v57 = *a1;
  if ( !*a1 )
    return *a1 + v9 == 0;
  if ( v12 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) != 42 )
    goto LABEL_17;
  v14 = *(__m128i *)a1;
  *(_QWORD *)&Name.Length = v14.m128i_i64[0];
  v15 = v14.m128i_i16[0] - 2;
  v16 = _mm_srli_si128(v14, 8).m128i_u64[0];
  Name.Length = v14.m128i_i16[0] - 2;
  Name.Buffer = (wchar_t *)(v16 + 2);
  if ( RtlDoesNameContainWildCards(&Name) )
  {
    v12 = v57;
    v11 = 0LL;
    v10 = 0;
    v7 = 0;
LABEL_17:
    v67[0] = 0;
    v19 = (char *)v67;
    v61 = (char *)v67;
    v20 = &v68;
    v55 = 0;
    v21 = 1;
    v22 = 0;
    if ( v12 <= 0x7FFFu )
    {
      v23 = 2 * v12;
      v58 = v23;
      while ( 1 )
      {
        if ( v22 >= *v5 )
        {
          v7 = 1;
          v56 = 1;
          if ( *(_WORD *)&v19[2 * v21 - 2] == v23 )
            goto LABEL_75;
        }
        else
        {
          v24 = (unsigned __int64)v22 >> 1;
          v22 += 2;
          v55 = v22;
          v10 = *(_WORD *)(*((_QWORD *)v5 + 1) + 2 * v24);
          v60 = v10;
        }
        v62 = 0;
        LODWORD(v25) = 0;
        v26 = 0;
        while ( 2 )
        {
          v27 = (unsigned int)v25;
          v25 = (unsigned int)(v25 + 1);
          v28 = (*(unsigned __int16 *)&v19[2 * v27] + 1) / 2;
          v29 = 0;
LABEL_24:
          v30 = a1;
          while ( 1 )
          {
            v31 = *v30;
            if ( (_WORD)v28 == *v30 )
              goto LABEL_53;
            LOWORD(v28) = v29 + v28;
            v32 = 2 * v28;
            if ( (_WORD)v28 == v31 )
              break;
            v33 = *(_WORD *)(*((_QWORD *)v30 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v28 >> 1));
            if ( v26 >= 0xE && !v11 )
            {
              v34 = v31 >> 1;
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v34 + 1), 0x6E725346u);
              v11 = PoolWithTag;
              if ( !PoolWithTag )
                RtlRaiseStatus(-1073741801);
              v7 = v56;
              v36 = (unsigned int)(2 * v34 + 2);
              v10 = v60;
              v5 = v65;
              v30 = a1;
              *PoolWithTag = *(_OWORD *)v20;
              v37 = (char *)PoolWithTag + 2 * v36;
              v38 = *((_OWORD *)v20 + 1);
              v20 = (char *)PoolWithTag;
              PoolWithTag[1] = v38;
              v39 = v61;
              v61 = v37;
              *(_OWORD *)v37 = *(_OWORD *)v39;
              *((_OWORD *)v37 + 1) = *((_OWORD *)v39 + 1);
            }
            if ( v33 == 42 )
            {
              v22 = v55;
              v40 = v26;
              v41 = v26 + 1;
              *(_WORD *)&v20[2 * v40] = v32;
              v29 = 2;
              *(_WORD *)&v20[2 * v41] = v32 + 3;
              v26 = v41 + 1;
            }
            else
            {
              if ( v33 == 60 )
              {
                v22 = v55;
                if ( !v7 && v10 == 46 )
                {
                  v42 = v55;
                  if ( v55 >= *v5 )
                  {
LABEL_39:
                    v43 = v26++;
                    *(_WORD *)&v20[2 * v43] = v32 + 3;
                    v29 = 2;
                    goto LABEL_24;
                  }
                  while ( *(_WORD *)(*((_QWORD *)v5 + 1) + 2 * ((unsigned __int64)v42 >> 1)) != 46 )
                  {
                    v42 += 2;
                    if ( v42 >= *v5 )
                      goto LABEL_39;
                  }
                }
                v44 = v26;
                v45 = v26 + 1;
                *(_WORD *)&v20[2 * v44] = v32;
                v29 = 2;
                *(_WORD *)&v20[2 * v45] = v32 + 3;
                v26 = v45 + 1;
                goto LABEL_24;
              }
              v46 = v32 + 4;
              if ( v33 == 62 )
              {
                v29 = 2;
                v22 = v55;
                if ( !v7 && v10 != 46 )
                {
                  v47 = v26++;
                  *(_WORD *)&v20[2 * v47] = v46;
                  goto LABEL_53;
                }
              }
              else
              {
                if ( v33 != 34 )
                {
                  if ( !v7 )
                  {
                    v48 = v33 == 63;
LABEL_50:
                    if ( v48 || (!a3 ? (v52 = v10) : (v52 = *(_WORD *)(v66 + 2LL * v10)), v33 == v52) )
                    {
                      v49 = v26++;
                      *(_WORD *)&v20[2 * v49] = v46;
                    }
                  }
                  v22 = v55;
                  goto LABEL_53;
                }
                if ( !v7 )
                {
                  v48 = v10 == 46;
                  goto LABEL_50;
                }
                v29 = 2;
                v22 = v55;
              }
            }
          }
          v53 = v26++;
          *(_WORD *)&v20[2 * v53] = v58;
LABEL_53:
          v19 = v61;
          if ( (unsigned int)v25 < v21 )
          {
            v50 = v62;
            while ( v50 < v26 )
            {
              do
              {
                if ( *(_WORD *)&v61[2 * v25] >= *(_WORD *)&v20[2 * v50] )
                  break;
                v25 = (unsigned int)(v25 + 1);
              }
              while ( (unsigned int)v25 < v21 );
              v62 = ++v50;
              if ( (unsigned int)v25 >= v21 )
              {
                v7 = v56;
                goto LABEL_60;
              }
            }
            v7 = v56;
            continue;
          }
          break;
        }
LABEL_60:
        if ( !v26 )
          break;
        v61 = v20;
        v51 = v19;
        v19 = v20;
        v21 = v26;
        v23 = v58;
        v20 = v51;
        if ( v7 )
        {
LABEL_75:
          v54 = *(_WORD *)&v19[2 * v21 - 2];
          if ( v11 )
            ExFreePoolWithTag(v11, 0);
          return v54 == v23;
        }
      }
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
    }
    return 0;
  }
  if ( v9 >= (unsigned __int16)(v57 - 2) )
  {
    v17 = (unsigned __int64)(v9 - v15) >> 1;
    if ( !a3 )
      return memcmp((const void *)(v16 + 2), (const void *)(*((_QWORD *)v5 + 1) + 2LL * (unsigned int)v17), v15) == 0;
    v18 = v15 >> 1;
    if ( !v18 )
      return 1;
    while ( *(_WORD *)(a4 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v5 + 1) + 2LL * ((unsigned int)v17 + v4))) == *(_WORD *)(v16 + 2 + 2LL * v4) )
    {
      if ( ++v4 >= v18 )
        return 1;
    }
  }
  return 0;
}
