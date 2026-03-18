/*
 * XREFs of sub_140516C6C @ 0x140516C6C
 * Callers:
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 * Callees:
 *     StringCbLengthW @ 0x1400E6560 (StringCbLengthW.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     sub_140516FC8 @ 0x140516FC8 (sub_140516FC8.c)
 */

__int64 __fastcall sub_140516C6C(__int64 a1, size_t a2, int a3, __int64 a4)
{
  unsigned int *v6; // rcx
  unsigned int *v7; // rax
  unsigned int i; // edx
  __int64 v9; // r9
  unsigned int *v10; // r8
  unsigned int v11; // r8d
  size_t *v12; // rdx
  int v13; // ebx
  unsigned int *v14; // rax
  unsigned int j; // edx
  __int64 v16; // r9
  unsigned int *v17; // r8
  unsigned int v18; // r8d
  int *v19; // rdx
  unsigned int v20; // r9d
  unsigned int *v21; // rax
  unsigned int k; // edx
  __int64 v23; // r10
  unsigned int *v24; // r8
  unsigned int v25; // edx
  int v26; // r13d
  unsigned int jj; // edx
  __int64 v28; // rax
  size_t v29; // rdx
  const wchar_t *v30; // rsi
  int v31; // ebx
  __int64 v32; // r12
  unsigned int v33; // ebx
  PVOID PoolWithTag; // rax
  unsigned int *v35; // rax
  unsigned int m; // ecx
  unsigned int *v37; // rdx
  unsigned int v38; // edx
  int *v39; // rcx
  int v40; // eax
  unsigned int *v42; // rax
  unsigned int kk; // ecx
  unsigned int *v44; // rdx
  unsigned int v45; // edx
  int *v46; // rcx
  unsigned int v47; // r15d
  unsigned int v48; // r12d
  PVOID v49; // rax
  int v50; // r8d
  int v51; // r9d
  int v52; // eax
  unsigned int v53; // eax
  _DWORD *v54; // rax
  __int64 v55; // r9
  unsigned int v56; // eax
  unsigned __int64 v57; // rdx
  unsigned int v58; // ecx
  unsigned int v59; // eax
  size_t v60; // xmm0_8
  __int64 v61; // r9
  unsigned int v62; // eax
  unsigned int v63; // ecx
  _DWORD *v64; // rdx
  unsigned int n; // ecx
  unsigned int v66; // eax
  __int64 v67; // r8
  unsigned int v68; // r15d
  unsigned int *v69; // rdx
  unsigned int ii; // ecx
  unsigned int v71; // eax
  PVOID Src; // [rsp+40h] [rbp-20h]
  PVOID P; // [rsp+48h] [rbp-18h]
  size_t v74; // [rsp+50h] [rbp-10h]
  int v75; // [rsp+A0h] [rbp+40h]
  size_t pcbLength; // [rsp+A8h] [rbp+48h] BYREF
  int v77; // [rsp+B0h] [rbp+50h] BYREF

  v77 = a3;
  pcbLength = a2;
  Src = 0LL;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned int **)(a1 + 8);
  if ( v6 && *(_DWORD *)a1 > 3u )
  {
    v7 = v6;
    for ( i = 0; i < 3; ++i )
    {
      v9 = *v7;
      v10 = v7 + 1;
      if ( v7 + 1 < v7 )
        goto LABEL_77;
      v7 = (unsigned int *)((char *)v10 + v9);
      if ( (unsigned int *)((char *)v10 + v9) < v10 )
        goto LABEL_77;
    }
    v11 = *v7;
    v12 = (size_t *)(v7 + 1);
    if ( v7 + 1 < v7 )
    {
LABEL_77:
      v13 = -1073741675;
      goto LABEL_14;
    }
    v13 = 0;
    if ( !v11 )
      v12 = 0LL;
    if ( v11 == 8 )
    {
      v74 = *v12;
      goto LABEL_14;
    }
    return (unsigned int)-1073741789;
  }
  v13 = -1073741811;
LABEL_14:
  if ( v13 >= 0 )
  {
    if ( v6 && *(_DWORD *)a1 > 4u )
    {
      v14 = v6;
      for ( j = 0; j < 4; ++j )
      {
        v16 = *v14;
        v17 = v14 + 1;
        if ( v14 + 1 < v14 )
          goto LABEL_79;
        v14 = (unsigned int *)((char *)v17 + v16);
        if ( (unsigned int *)((char *)v17 + v16) < v17 )
          goto LABEL_79;
      }
      v18 = *v14;
      v19 = (int *)(v14 + 1);
      if ( v14 + 1 < v14 )
      {
LABEL_79:
        v13 = -1073741675;
        goto LABEL_26;
      }
      v13 = 0;
      if ( !v18 )
        v19 = 0LL;
      if ( v18 == 4 )
      {
        v75 = *v19;
        goto LABEL_26;
      }
      return (unsigned int)-1073741789;
    }
    v13 = -1073741811;
LABEL_26:
    if ( v13 >= 0 )
    {
      if ( !v6 )
        return (unsigned int)-1073741811;
      v20 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 <= 5u )
        return (unsigned int)-1073741811;
      v21 = v6;
      for ( k = 0; k < 5; ++k )
      {
        v23 = *v21;
        v24 = v21 + 1;
        if ( v21 + 1 < v21 )
          return (unsigned int)-1073741675;
        v21 = (unsigned int *)((char *)v24 + v23);
        if ( (unsigned int *)((char *)v24 + v23) < v24 )
          return (unsigned int)-1073741675;
      }
      v25 = *v21;
      v26 = (_DWORD)v21 + 4;
      if ( v21 + 1 < v21 )
        return (unsigned int)-1073741675;
      if ( !v25 )
        v26 = 0;
      if ( v25 != 32 )
        return (unsigned int)-1073741811;
      if ( v20 <= 6 )
      {
        v31 = -1073741811;
LABEL_49:
        if ( v31 >= 0 && 2 * v77 != -2 )
        {
          v33 = 2 * v77 + 2;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v33, 0x20534C53u);
          P = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, (const void *)pcbLength, v33);
            v35 = *(unsigned int **)(a1 + 8);
            if ( v35 && *(_DWORD *)a1 > 7u )
            {
              for ( m = 0; m < 7; ++m )
              {
                v24 = (unsigned int *)*v35;
                v37 = v35 + 1;
                if ( v35 + 1 < v35 )
                  goto LABEL_82;
                v35 = (unsigned int *)((char *)v24 + (_QWORD)v37);
                if ( (char *)v24 + (unsigned __int64)v37 < (char *)v37 )
                  goto LABEL_82;
              }
              v38 = *v35;
              v39 = (int *)(v35 + 1);
              if ( v35 + 1 < v35 )
              {
LABEL_82:
                v13 = -1073741675;
                goto LABEL_63;
              }
              v13 = 0;
              if ( !v38 )
                v39 = 0LL;
              if ( v38 == 4 )
              {
                v77 = *v39;
                goto LABEL_63;
              }
              v13 = -1073741789;
              goto LABEL_66;
            }
            v13 = -1073741811;
LABEL_63:
            if ( v13 < 0 )
            {
LABEL_66:
              if ( P )
                ExFreePoolWithTag(P, 0x20534C53u);
              return (unsigned int)v13;
            }
LABEL_64:
            v40 = sub_140516FC8(v75, v26, (_DWORD)v24, v20, 0, 0LL, (__int64)&pcbLength);
            v13 = v40;
            if ( v40 >= 0 )
              goto LABEL_72;
            if ( v40 != -1073741789 )
              goto LABEL_66;
            v47 = pcbLength;
            if ( !(_DWORD)pcbLength )
            {
LABEL_72:
              v13 = -1073741823;
              goto LABEL_66;
            }
            v48 = pcbLength;
            if ( !v77 )
            {
              v49 = ExAllocatePoolWithTag(PagedPool, (unsigned int)pcbLength, 0x20534C53u);
              Src = v49;
              if ( !v49 )
              {
                v13 = -1073741801;
                goto LABEL_66;
              }
              v13 = sub_140516FC8(v75, v26, v50, v51, v47, v49, (__int64)&pcbLength);
              if ( v13 < 0 )
                goto LABEL_124;
              v47 = pcbLength;
              if ( v48 < (unsigned int)pcbLength )
              {
                v13 = -1073741762;
                goto LABEL_124;
              }
            }
            if ( v77 )
            {
              v52 = 8;
            }
            else
            {
              v52 = v47 + 4;
              if ( v47 >= 0xFFFFFFFC )
                goto LABEL_123;
            }
            v53 = v52 + 20;
            if ( v53 < 0x14 )
              goto LABEL_123;
            *(_DWORD *)(a4 + 4) = v53;
            v54 = ExAllocatePoolWithTag(PagedPool, v53, 0x20534C53u);
            if ( !v54 )
            {
              v13 = -1073741801;
              goto LABEL_124;
            }
            *(_QWORD *)(a4 + 8) = v54;
            *(_DWORD *)a4 = 0;
            if ( &pcbLength )
            {
              if ( v54 + 1 < v54 )
                goto LABEL_123;
              v13 = 0;
              if ( v54 + 2 > (_DWORD *)((char *)v54 + *(unsigned int *)(a4 + 4)) )
                goto LABEL_115;
              *v54 = 4;
              v54[1] = 0;
              ++*(_DWORD *)a4;
            }
            else
            {
              v13 = -1073741811;
            }
            if ( v13 < 0 )
              goto LABEL_124;
            pcbLength = v74;
            if ( &pcbLength )
            {
              v55 = *(_QWORD *)(a4 + 8);
              if ( !v55 )
              {
                v56 = *(_DWORD *)(a4 + 4);
                if ( v56 + 12 < v56 )
                {
LABEL_122:
                  *(_DWORD *)(a4 + 4) = -1;
                  goto LABEL_123;
                }
                *(_DWORD *)(a4 + 4) = v56 + 12;
                ++*(_DWORD *)a4;
                goto LABEL_136;
              }
              v57 = *(_QWORD *)(a4 + 8);
              v58 = 0;
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v59 = *(_DWORD *)v57 + 4;
                  if ( *(_DWORD *)v57 >= 0xFFFFFFFC )
                    break;
                  if ( v57 + v59 < v57 )
                    goto LABEL_123;
                  ++v58;
                  v57 += v59;
                  if ( v58 >= *(_DWORD *)a4 )
                    goto LABEL_130;
                }
                v13 = -1073741675;
              }
              else
              {
LABEL_130:
                if ( v57 + 4 < v57 )
                  goto LABEL_123;
                v13 = 0;
                if ( v57 + 12 > v55 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_115;
                v60 = pcbLength;
                *(_DWORD *)v57 = 8;
                *(_QWORD *)(v57 + 4) = v60;
                ++*(_DWORD *)a4;
              }
            }
            else
            {
              v13 = -1073741811;
            }
            if ( v13 < 0 )
              goto LABEL_124;
LABEL_136:
            if ( v77 )
            {
              if ( &v77 )
              {
                v61 = *(_QWORD *)(a4 + 8);
                if ( !v61 )
                {
                  v62 = *(_DWORD *)(a4 + 4);
                  v63 = v62 + 8;
LABEL_156:
                  if ( v63 < v62 )
                    goto LABEL_122;
                  *(_DWORD *)(a4 + 4) = v63;
                  v13 = 0;
                  ++*(_DWORD *)a4;
LABEL_124:
                  if ( Src )
                    ExFreePoolWithTag(Src, 0x20534C53u);
                  goto LABEL_66;
                }
                v64 = *(_DWORD **)(a4 + 8);
                for ( n = 0; n < *(_DWORD *)a4; v64 = (_DWORD *)((char *)v64 + v66) )
                {
                  v66 = *v64 + 4;
                  if ( *v64 >= 0xFFFFFFFC || (_DWORD *)((char *)v64 + v66) < v64 )
                    goto LABEL_123;
                  ++n;
                }
                if ( v64 + 1 >= v64 )
                {
                  v13 = 0;
                  if ( (unsigned __int64)(v64 + 2) <= v61 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *v64 = 4;
                    v64[1] = v47;
LABEL_148:
                    ++*(_DWORD *)a4;
                    goto LABEL_124;
                  }
                  goto LABEL_115;
                }
                goto LABEL_123;
              }
LABEL_151:
              v13 = -1073741811;
              goto LABEL_124;
            }
            if ( Src )
            {
              if ( !v47 )
                goto LABEL_151;
            }
            else if ( v47 )
            {
              goto LABEL_151;
            }
            v67 = *(_QWORD *)(a4 + 8);
            if ( !v67 )
            {
              v68 = v47 + 4;
              if ( v68 < 4 )
                goto LABEL_123;
              v62 = *(_DWORD *)(a4 + 4);
              v63 = v62 + v68;
              goto LABEL_156;
            }
            v69 = *(unsigned int **)(a4 + 8);
            for ( ii = 0; ii < *(_DWORD *)a4; v69 = (unsigned int *)((char *)v69 + v71) )
            {
              v71 = *v69 + 4;
              if ( *v69 >= 0xFFFFFFFC || (unsigned int *)((char *)v69 + v71) < v69 )
                goto LABEL_123;
              ++ii;
            }
            if ( v69 + 1 >= v69 )
            {
              v13 = 0;
              if ( (unsigned __int64)v69 + v47 + 4 <= v67 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *v69 = v47;
                if ( Src )
                  memmove(v69 + 1, Src, v47);
                goto LABEL_148;
              }
LABEL_115:
              v13 = -1073741789;
              goto LABEL_124;
            }
LABEL_123:
            v13 = -1073741675;
            goto LABEL_124;
          }
        }
      }
      else
      {
        for ( jj = 0; jj < 6; ++jj )
        {
          v28 = *v6;
          v24 = v6 + 1;
          if ( v6 + 1 < v6 )
            goto LABEL_81;
          v6 = (unsigned int *)((char *)v24 + v28);
          if ( (unsigned int *)((char *)v24 + v28) < v24 )
            goto LABEL_81;
        }
        v29 = *v6;
        v30 = (const wchar_t *)(v6 + 1);
        if ( v6 + 1 < v6 )
        {
LABEL_81:
          v31 = -1073741675;
          goto LABEL_49;
        }
        v31 = 0;
        if ( (_DWORD)v29 )
        {
          if ( (v29 & 1) == 0 )
          {
            v32 = (unsigned int)v29;
            if ( !v30[((unsigned __int64)(unsigned int)v29 >> 1) - 1]
              && StringCbLengthW(v30, v29, &pcbLength) >= 0
              && pcbLength + 2 == v32 )
            {
              v77 = pcbLength >> 1;
              pcbLength = (size_t)v30;
              goto LABEL_49;
            }
          }
        }
      }
      v42 = *(unsigned int **)(a1 + 8);
      P = 0LL;
      if ( v42 && *(_DWORD *)a1 > 6u )
      {
        for ( kk = 0; kk < 6; ++kk )
        {
          v24 = (unsigned int *)*v42;
          v44 = v42 + 1;
          if ( v42 + 1 < v42 )
            goto LABEL_95;
          v42 = (unsigned int *)((char *)v24 + (_QWORD)v44);
          if ( (char *)v24 + (unsigned __int64)v44 < (char *)v44 )
            goto LABEL_95;
        }
        v45 = *v42;
        v46 = (int *)(v42 + 1);
        if ( v42 + 1 < v42 )
        {
LABEL_95:
          v13 = -1073741675;
          goto LABEL_96;
        }
        v13 = 0;
        if ( !v45 )
          v46 = 0LL;
        if ( v45 == 4 )
        {
          v77 = *v46;
          goto LABEL_96;
        }
        return (unsigned int)-1073741789;
      }
      v13 = -1073741811;
LABEL_96:
      if ( v13 >= 0 )
        goto LABEL_64;
    }
  }
  return (unsigned int)v13;
}
