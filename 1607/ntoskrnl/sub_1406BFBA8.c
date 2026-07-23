/*
 * XREFs of sub_1406BFBA8 @ 0x1406BFBA8
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     StringCbLengthW @ 0x14010D2B8 (StringCbLengthW.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406BFBA8(__int64 a1, SIZE_T a2, int a3, __int64 a4)
{
  int v6; // ebx
  const wchar_t *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r9
  unsigned int *v11; // r8
  unsigned int v12; // r8d
  __int64 *v13; // rdx
  unsigned int *v14; // rax
  unsigned int j; // edx
  __int64 v16; // r9
  unsigned int *v17; // r8
  unsigned int v18; // r8d
  _DWORD *v19; // rdx
  unsigned int *v20; // rax
  unsigned int k; // edx
  __int64 v22; // r10
  unsigned int *v23; // r8
  unsigned int v24; // edx
  unsigned int *v25; // r13
  int v26; // ebx
  unsigned int m; // edx
  __int64 v28; // rax
  unsigned int *v29; // r8
  size_t v30; // rdx
  size_t v31; // rsi
  __int64 v32; // r12
  size_t v33; // rcx
  unsigned int v34; // ebx
  PVOID PoolWithTag; // rax
  void *v36; // r12
  unsigned int *v37; // rax
  unsigned int n; // ecx
  __int64 v39; // r8
  unsigned int *v40; // rdx
  unsigned int v41; // edx
  int *v42; // rcx
  unsigned int *v43; // rax
  unsigned int kk; // ecx
  __int64 v45; // r8
  unsigned int *v46; // rdx
  unsigned int v47; // edx
  int *v48; // rcx
  int v49; // eax
  int v50; // eax
  unsigned int v51; // r15d
  PVOID v52; // rax
  unsigned int v53; // eax
  unsigned int v54; // eax
  _DWORD *v55; // rax
  __int64 v56; // r9
  unsigned int v57; // eax
  unsigned __int64 v58; // rdx
  unsigned int v59; // ecx
  unsigned int v60; // eax
  __int64 v61; // xmm0_8
  __int64 v62; // r9
  unsigned int v63; // eax
  _DWORD *v64; // rdx
  unsigned int ii; // ecx
  unsigned int v66; // eax
  __int64 v67; // r8
  unsigned int v68; // ecx
  unsigned int v69; // eax
  unsigned int *v70; // rdx
  unsigned int jj; // ecx
  unsigned int v72; // eax
  PVOID P; // [rsp+40h] [rbp-20h]
  size_t pcbLength; // [rsp+48h] [rbp-18h] BYREF
  __int64 v76; // [rsp+50h] [rbp-10h]
  __int64 v77; // [rsp+A0h] [rbp+40h] BYREF
  SIZE_T NumberOfBytes; // [rsp+A8h] [rbp+48h] BYREF
  int v79; // [rsp+B0h] [rbp+50h] BYREF

  v79 = a3;
  NumberOfBytes = a2;
  P = 0LL;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(const wchar_t **)(a1 + 8);
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v8 = (unsigned int *)v7;
    for ( i = 0; i < 3; ++i )
    {
      v10 = *v8;
      v11 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_17;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_17;
    }
    v12 = *v8;
    v13 = (__int64 *)(v8 + 1);
    if ( v8 + 1 < v8 )
    {
LABEL_17:
      v6 = -1073741675;
      goto LABEL_18;
    }
    v6 = 0;
    if ( !v12 )
      v13 = 0LL;
    if ( v12 == 8 )
    {
      v76 = *v13;
      goto LABEL_18;
    }
    return (unsigned int)-1073741789;
  }
  v6 = -1073741811;
LABEL_18:
  if ( v6 >= 0 )
  {
    if ( v7 && *(_DWORD *)a1 > 4u )
    {
      v14 = (unsigned int *)v7;
      for ( j = 0; j < 4; ++j )
      {
        v16 = *v14;
        v17 = v14 + 1;
        if ( v14 + 1 < v14 )
          goto LABEL_31;
        v14 = (unsigned int *)((char *)v17 + v16);
        if ( (unsigned int *)((char *)v17 + v16) < v17 )
          goto LABEL_31;
      }
      v18 = *v14;
      v19 = v14 + 1;
      if ( v14 + 1 < v14 )
      {
LABEL_31:
        v6 = -1073741675;
        goto LABEL_32;
      }
      v6 = 0;
      if ( !v18 )
        v19 = 0LL;
      if ( v18 == 4 )
      {
        LODWORD(v77) = *v19;
        goto LABEL_32;
      }
      return (unsigned int)-1073741789;
    }
    v6 = -1073741811;
LABEL_32:
    if ( v6 >= 0 )
    {
      if ( !v7 || *(_DWORD *)a1 <= 5u )
        return (unsigned int)-1073741811;
      v20 = (unsigned int *)v7;
      for ( k = 0; k < 5; ++k )
      {
        v22 = *v20;
        v23 = v20 + 1;
        if ( v20 + 1 < v20 )
          return (unsigned int)-1073741675;
        v20 = (unsigned int *)((char *)v23 + v22);
        if ( (unsigned int *)((char *)v23 + v22) < v23 )
          return (unsigned int)-1073741675;
      }
      v24 = *v20;
      v25 = v20 + 1;
      if ( v20 + 1 < v20 )
        return (unsigned int)-1073741675;
      if ( !v24 )
        v25 = 0LL;
      if ( v24 != 32 )
        return (unsigned int)-1073741811;
      if ( *(_DWORD *)a1 > 6u )
      {
        for ( m = 0; m < 6; ++m )
        {
          v28 = *(unsigned int *)v7;
          v29 = (unsigned int *)(v7 + 2);
          if ( v7 + 2 < v7 )
            goto LABEL_57;
          v7 = (const wchar_t *)((char *)v29 + v28);
          if ( (unsigned int *)((char *)v29 + v28) < v29 )
            goto LABEL_57;
        }
        v30 = *(unsigned int *)v7;
        v31 = (size_t)(v7 + 2);
        if ( v7 + 2 < v7 )
        {
LABEL_57:
          v26 = -1073741675;
          goto LABEL_58;
        }
        v26 = 0;
        if ( (_DWORD)v30 )
        {
          if ( (v30 & 1) == 0 )
          {
            v32 = (unsigned int)v30;
            if ( !*(_WORD *)(v31 + 2 * ((unsigned __int64)(unsigned int)v30 >> 1) - 2)
              && StringCbLengthW(v7 + 2, v30, &pcbLength) >= 0
              && pcbLength + 2 == v32 )
            {
              v33 = pcbLength >> 1;
              pcbLength = v31;
              v79 = v33;
              goto LABEL_58;
            }
          }
        }
      }
      else
      {
        v26 = -1073741811;
LABEL_58:
        if ( v26 >= 0 && 2 * v79 != -2 )
        {
          v34 = 2 * v79 + 2;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v34, 0x20534C53u);
          v36 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, (const void *)pcbLength, v34);
            v37 = *(unsigned int **)(a1 + 8);
            if ( v37 && *(_DWORD *)a1 > 7u )
            {
              for ( n = 0; n < 7; ++n )
              {
                v39 = *v37;
                v40 = v37 + 1;
                if ( v37 + 1 < v37 )
                  goto LABEL_74;
                v37 = (unsigned int *)((char *)v40 + v39);
                if ( (unsigned int *)((char *)v40 + v39) < v40 )
                  goto LABEL_74;
              }
              v41 = *v37;
              v42 = (int *)(v37 + 1);
              if ( v37 + 1 < v37 )
              {
LABEL_74:
                v6 = -1073741675;
                goto LABEL_75;
              }
              v6 = 0;
              if ( !v41 )
                v42 = 0LL;
              if ( v41 != 4 )
              {
                v6 = -1073741789;
                goto LABEL_123;
              }
              v79 = *v42;
            }
            else
            {
              v6 = -1073741811;
            }
LABEL_75:
            if ( v6 < 0 )
              goto LABEL_123;
LABEL_91:
            v49 = qword_140747430((unsigned int)v77, v25, v36, 0LL, 0, 0LL, &NumberOfBytes);
            v6 = v49;
            if ( v49 >= 0 )
            {
LABEL_92:
              v6 = -1073741823;
              goto LABEL_123;
            }
            if ( v49 != -1073741789 )
            {
LABEL_123:
              if ( v36 )
                ExFreePoolWithTag(v36, 0x20534C53u);
              return (unsigned int)v6;
            }
            v50 = NumberOfBytes;
            if ( !(_DWORD)NumberOfBytes )
              goto LABEL_92;
            v51 = NumberOfBytes;
            if ( !v79 )
            {
              v52 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20534C53u);
              P = v52;
              if ( !v52 )
              {
                v6 = -1073741801;
                goto LABEL_123;
              }
              v6 = qword_140747430((unsigned int)v77, v25, v36, 0LL, v51, v52, &NumberOfBytes);
              if ( v6 < 0 )
              {
LABEL_121:
                if ( P )
                  ExFreePoolWithTag(P, 0x20534C53u);
                goto LABEL_123;
              }
              v50 = NumberOfBytes;
              if ( v51 < (unsigned int)NumberOfBytes )
              {
                v6 = -1073741762;
                goto LABEL_121;
              }
              v51 = NumberOfBytes;
            }
            if ( v79 )
            {
              v53 = 8;
            }
            else
            {
              v53 = v50 + 4;
              if ( v53 < 4 )
                goto LABEL_120;
            }
            v54 = v53 + 20;
            if ( v54 < 0x14 )
              goto LABEL_120;
            *(_DWORD *)(a4 + 4) = v54;
            v55 = ExAllocatePoolWithTag(PagedPool, v54, 0x20534C53u);
            if ( !v55 )
            {
              v6 = -1073741801;
              goto LABEL_121;
            }
            *(_QWORD *)(a4 + 8) = v55;
            *(_DWORD *)a4 = 0;
            if ( &v77 )
            {
              if ( v55 + 1 < v55 )
                goto LABEL_120;
              v6 = 0;
              if ( v55 + 2 > (_DWORD *)((char *)v55 + *(unsigned int *)(a4 + 4)) )
              {
LABEL_111:
                v6 = -1073741789;
                goto LABEL_121;
              }
              *v55 = 4;
              v55[1] = 0;
              ++*(_DWORD *)a4;
            }
            else
            {
              v6 = -1073741811;
            }
            if ( v6 < 0 )
              goto LABEL_121;
            v77 = v76;
            if ( &v77 )
            {
              v56 = *(_QWORD *)(a4 + 8);
              if ( !v56 )
              {
                v57 = *(_DWORD *)(a4 + 4);
                if ( v57 + 12 < v57 )
                {
LABEL_119:
                  *(_DWORD *)(a4 + 4) = -1;
                  goto LABEL_120;
                }
                *(_DWORD *)(a4 + 4) = v57 + 12;
                ++*(_DWORD *)a4;
LABEL_135:
                if ( v79 )
                {
                  if ( &v79 )
                  {
                    v62 = *(_QWORD *)(a4 + 8);
                    if ( !v62 )
                    {
                      v63 = *(_DWORD *)(a4 + 4);
                      if ( v63 + 8 >= v63 )
                      {
                        *(_DWORD *)(a4 + 4) = v63 + 8;
LABEL_140:
                        ++*(_DWORD *)a4;
                        v6 = 0;
                        goto LABEL_121;
                      }
                      goto LABEL_119;
                    }
                    v64 = *(_DWORD **)(a4 + 8);
                    for ( ii = 0; ii < *(_DWORD *)a4; v64 = (_DWORD *)((char *)v64 + v66) )
                    {
                      v66 = *v64 + 4;
                      if ( *v64 >= 0xFFFFFFFC || (_DWORD *)((char *)v64 + v66) < v64 )
                        goto LABEL_120;
                      ++ii;
                    }
                    if ( v64 + 1 >= v64 )
                    {
                      v6 = 0;
                      if ( (unsigned __int64)(v64 + 2) > v62 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        goto LABEL_111;
                      *v64 = 4;
                      v64[1] = v51;
                      goto LABEL_148;
                    }
                    goto LABEL_120;
                  }
                  goto LABEL_151;
                }
                if ( P )
                {
                  if ( !v51 )
                    goto LABEL_151;
                }
                else if ( v51 )
                {
LABEL_151:
                  v6 = -1073741811;
                  goto LABEL_121;
                }
                v67 = *(_QWORD *)(a4 + 8);
                if ( !v67 )
                {
                  v68 = v51 + 4;
                  if ( v51 >= 0xFFFFFFFC )
                    goto LABEL_120;
                  v69 = *(_DWORD *)(a4 + 4);
                  if ( v69 + v68 >= v69 )
                  {
                    *(_DWORD *)(a4 + 4) = v69 + v68;
                    goto LABEL_140;
                  }
                  goto LABEL_119;
                }
                v70 = *(unsigned int **)(a4 + 8);
                for ( jj = 0; jj < *(_DWORD *)a4; v70 = (unsigned int *)((char *)v70 + v72) )
                {
                  v72 = *v70 + 4;
                  if ( *v70 >= 0xFFFFFFFC || (unsigned int *)((char *)v70 + v72) < v70 )
                    goto LABEL_120;
                  ++jj;
                }
                if ( v70 + 1 >= v70 )
                {
                  v6 = 0;
                  if ( (unsigned __int64)v70 + v51 + 4 > v67 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_111;
                  *v70 = v51;
                  if ( P )
                    memmove(v70 + 1, P, v51);
LABEL_148:
                  ++*(_DWORD *)a4;
                  goto LABEL_121;
                }
LABEL_120:
                v6 = -1073741675;
                goto LABEL_121;
              }
              v58 = *(_QWORD *)(a4 + 8);
              v59 = 0;
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v60 = *(_DWORD *)v58 + 4;
                  if ( *(_DWORD *)v58 >= 0xFFFFFFFC )
                    break;
                  if ( v58 + v60 < v58 )
                    goto LABEL_120;
                  ++v59;
                  v58 += v60;
                  if ( v59 >= *(_DWORD *)a4 )
                    goto LABEL_129;
                }
                v6 = -1073741675;
              }
              else
              {
LABEL_129:
                if ( v58 + 4 < v58 )
                  goto LABEL_120;
                v6 = 0;
                if ( v58 + 12 > v56 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_111;
                v61 = v77;
                *(_DWORD *)v58 = 8;
                *(_QWORD *)(v58 + 4) = v61;
                ++*(_DWORD *)a4;
              }
            }
            else
            {
              v6 = -1073741811;
            }
            if ( v6 < 0 )
              goto LABEL_121;
            goto LABEL_135;
          }
        }
      }
      v43 = *(unsigned int **)(a1 + 8);
      v36 = 0LL;
      if ( v43 && *(_DWORD *)a1 > 6u )
      {
        for ( kk = 0; kk < 6; ++kk )
        {
          v45 = *v43;
          v46 = v43 + 1;
          if ( v43 + 1 < v43 )
            goto LABEL_89;
          v43 = (unsigned int *)((char *)v46 + v45);
          if ( (unsigned int *)((char *)v46 + v45) < v46 )
            goto LABEL_89;
        }
        v47 = *v43;
        v48 = (int *)(v43 + 1);
        if ( v43 + 1 < v43 )
        {
LABEL_89:
          v6 = -1073741675;
          goto LABEL_90;
        }
        v6 = 0;
        if ( !v47 )
          v48 = 0LL;
        if ( v47 == 4 )
        {
          v79 = *v48;
          goto LABEL_90;
        }
        return (unsigned int)-1073741789;
      }
      v6 = -1073741811;
LABEL_90:
      if ( v6 >= 0 )
        goto LABEL_91;
    }
  }
  return (unsigned int)v6;
}
