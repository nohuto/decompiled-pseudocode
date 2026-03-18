/*
 * XREFs of sub_1405870FC @ 0x1405870FC
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     StringCbLengthW @ 0x1401196B4 (StringCbLengthW.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     sub_140587464 @ 0x140587464 (sub_140587464.c)
 */

__int64 __fastcall sub_1405870FC(__int64 a1, size_t a2, int a3, __int64 a4)
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
  unsigned int *v20; // rax
  unsigned int k; // edx
  __int64 v22; // r10
  unsigned int *v23; // r8
  unsigned int v24; // edx
  int v25; // r13d
  unsigned int jj; // edx
  __int64 v27; // rax
  unsigned int *v28; // r8
  size_t v29; // rdx
  const wchar_t *v30; // rsi
  int v31; // ebx
  __int64 v32; // r12
  size_t v33; // rcx
  unsigned int v34; // ebx
  PVOID PoolWithTag; // rax
  unsigned int *v36; // rax
  unsigned int m; // ecx
  __int64 v38; // r8
  unsigned int *v39; // rdx
  unsigned int v40; // edx
  int *v41; // rcx
  int v42; // eax
  unsigned int *v44; // rax
  unsigned int kk; // ecx
  __int64 v46; // r8
  unsigned int *v47; // rdx
  unsigned int v48; // edx
  int *v49; // rcx
  unsigned int v50; // r15d
  unsigned int v51; // r12d
  PVOID v52; // rax
  int v53; // eax
  unsigned int v54; // eax
  _DWORD *v55; // rax
  __int64 v56; // r9
  unsigned int v57; // eax
  unsigned __int64 v58; // rdx
  unsigned int v59; // ecx
  unsigned int v60; // eax
  size_t v61; // xmm0_8
  __int64 v62; // r9
  unsigned int v63; // eax
  unsigned int v64; // ecx
  _DWORD *v65; // rdx
  unsigned int n; // ecx
  unsigned int v67; // eax
  __int64 v68; // r8
  unsigned int v69; // r15d
  unsigned int *v70; // rdx
  unsigned int ii; // ecx
  unsigned int v72; // eax
  PVOID P; // [rsp+40h] [rbp-20h]
  PVOID Src; // [rsp+48h] [rbp-18h]
  size_t v75; // [rsp+50h] [rbp-10h]
  int v76; // [rsp+A0h] [rbp+40h]
  size_t pcbLength; // [rsp+A8h] [rbp+48h] BYREF
  int v78; // [rsp+B0h] [rbp+50h] BYREF

  v78 = a3;
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
      v75 = *v12;
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
        v76 = *v19;
        goto LABEL_26;
      }
      return (unsigned int)-1073741789;
    }
    v13 = -1073741811;
LABEL_26:
    if ( v13 >= 0 )
    {
      if ( !v6 || *(_DWORD *)a1 <= 5u )
        return (unsigned int)-1073741811;
      v20 = v6;
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
      v25 = (_DWORD)v20 + 4;
      if ( v20 + 1 < v20 )
        return (unsigned int)-1073741675;
      if ( !v24 )
        v25 = 0;
      if ( v24 != 32 )
        return (unsigned int)-1073741811;
      if ( *(_DWORD *)a1 <= 6u )
      {
        v31 = -1073741811;
LABEL_49:
        if ( v31 >= 0 && 2 * v78 != -2 )
        {
          v34 = 2 * v78 + 2;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v34, 0x20534C53u);
          P = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, (const void *)pcbLength, v34);
            v36 = *(unsigned int **)(a1 + 8);
            if ( v36 && *(_DWORD *)a1 > 7u )
            {
              for ( m = 0; m < 7; ++m )
              {
                v38 = *v36;
                v39 = v36 + 1;
                if ( v36 + 1 < v36 )
                  goto LABEL_71;
                v36 = (unsigned int *)((char *)v39 + v38);
                if ( (unsigned int *)((char *)v39 + v38) < v39 )
                  goto LABEL_71;
              }
              v40 = *v36;
              v41 = (int *)(v36 + 1);
              if ( v36 + 1 < v36 )
              {
LABEL_71:
                v13 = -1073741675;
                goto LABEL_63;
              }
              v13 = 0;
              if ( !v40 )
                v41 = 0LL;
              if ( v40 == 4 )
              {
                v78 = *v41;
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
            v42 = sub_140587464(v76, v25, 0, 0LL, (__int64)&pcbLength);
            v13 = v42;
            if ( v42 >= 0 )
              goto LABEL_72;
            if ( v42 != -1073741789 )
              goto LABEL_66;
            v50 = pcbLength;
            if ( !(_DWORD)pcbLength )
            {
LABEL_72:
              v13 = -1073741823;
              goto LABEL_66;
            }
            v51 = pcbLength;
            if ( !v78 )
            {
              v52 = ExAllocatePoolWithTag(PagedPool, (unsigned int)pcbLength, 0x20534C53u);
              Src = v52;
              if ( !v52 )
              {
                v13 = -1073741801;
                goto LABEL_66;
              }
              v13 = sub_140587464(v76, v25, v50, v52, (__int64)&pcbLength);
              if ( v13 < 0 )
                goto LABEL_124;
              v50 = pcbLength;
              if ( v51 < (unsigned int)pcbLength )
              {
                v13 = -1073741762;
                goto LABEL_124;
              }
            }
            if ( v78 )
            {
              v53 = 8;
            }
            else
            {
              v53 = v50 + 4;
              if ( v50 >= 0xFFFFFFFC )
                goto LABEL_123;
            }
            v54 = v53 + 20;
            if ( v54 < 0x14 )
              goto LABEL_123;
            *(_DWORD *)(a4 + 4) = v54;
            v55 = ExAllocatePoolWithTag(PagedPool, v54, 0x20534C53u);
            if ( !v55 )
            {
              v13 = -1073741801;
              goto LABEL_124;
            }
            *(_QWORD *)(a4 + 8) = v55;
            *(_DWORD *)a4 = 0;
            if ( &pcbLength )
            {
              if ( v55 + 1 < v55 )
                goto LABEL_123;
              v13 = 0;
              if ( v55 + 2 > (_DWORD *)((char *)v55 + *(unsigned int *)(a4 + 4)) )
                goto LABEL_115;
              *v55 = 4;
              v55[1] = 0;
              ++*(_DWORD *)a4;
            }
            else
            {
              v13 = -1073741811;
            }
            if ( v13 < 0 )
              goto LABEL_124;
            pcbLength = v75;
            if ( &pcbLength )
            {
              v56 = *(_QWORD *)(a4 + 8);
              if ( !v56 )
              {
                v57 = *(_DWORD *)(a4 + 4);
                if ( v57 + 12 < v57 )
                {
LABEL_122:
                  *(_DWORD *)(a4 + 4) = -1;
                  goto LABEL_123;
                }
                *(_DWORD *)(a4 + 4) = v57 + 12;
                ++*(_DWORD *)a4;
                goto LABEL_136;
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
                    goto LABEL_123;
                  ++v59;
                  v58 += v60;
                  if ( v59 >= *(_DWORD *)a4 )
                    goto LABEL_130;
                }
                v13 = -1073741675;
              }
              else
              {
LABEL_130:
                if ( v58 + 4 < v58 )
                  goto LABEL_123;
                v13 = 0;
                if ( v58 + 12 > v56 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_115;
                v61 = pcbLength;
                *(_DWORD *)v58 = 8;
                *(_QWORD *)(v58 + 4) = v61;
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
            if ( v78 )
            {
              if ( &v78 )
              {
                v62 = *(_QWORD *)(a4 + 8);
                if ( !v62 )
                {
                  v63 = *(_DWORD *)(a4 + 4);
                  v64 = v63 + 8;
LABEL_156:
                  if ( v64 < v63 )
                    goto LABEL_122;
                  *(_DWORD *)(a4 + 4) = v64;
                  v13 = 0;
                  ++*(_DWORD *)a4;
LABEL_124:
                  if ( Src )
                    ExFreePoolWithTag(Src, 0x20534C53u);
                  goto LABEL_66;
                }
                v65 = *(_DWORD **)(a4 + 8);
                for ( n = 0; n < *(_DWORD *)a4; v65 = (_DWORD *)((char *)v65 + v67) )
                {
                  v67 = *v65 + 4;
                  if ( *v65 >= 0xFFFFFFFC || (_DWORD *)((char *)v65 + v67) < v65 )
                    goto LABEL_123;
                  ++n;
                }
                if ( v65 + 1 >= v65 )
                {
                  v13 = 0;
                  if ( (unsigned __int64)(v65 + 2) <= v62 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *v65 = 4;
                    v65[1] = v50;
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
              if ( !v50 )
                goto LABEL_151;
            }
            else if ( v50 )
            {
              goto LABEL_151;
            }
            v68 = *(_QWORD *)(a4 + 8);
            if ( !v68 )
            {
              v69 = v50 + 4;
              if ( v69 < 4 )
                goto LABEL_123;
              v63 = *(_DWORD *)(a4 + 4);
              v64 = v63 + v69;
              goto LABEL_156;
            }
            v70 = *(unsigned int **)(a4 + 8);
            for ( ii = 0; ii < *(_DWORD *)a4; v70 = (unsigned int *)((char *)v70 + v72) )
            {
              v72 = *v70 + 4;
              if ( *v70 >= 0xFFFFFFFC || (unsigned int *)((char *)v70 + v72) < v70 )
                goto LABEL_123;
              ++ii;
            }
            if ( v70 + 1 >= v70 )
            {
              v13 = 0;
              if ( (unsigned __int64)v70 + v50 + 4 <= v68 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *v70 = v50;
                if ( Src )
                  memmove(v70 + 1, Src, v50);
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
          v27 = *v6;
          v28 = v6 + 1;
          if ( v6 + 1 < v6 )
            goto LABEL_81;
          v6 = (unsigned int *)((char *)v28 + v27);
          if ( (unsigned int *)((char *)v28 + v27) < v28 )
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
              v33 = pcbLength >> 1;
              pcbLength = (size_t)v30;
              v78 = v33;
              goto LABEL_49;
            }
          }
        }
      }
      v44 = *(unsigned int **)(a1 + 8);
      P = 0LL;
      if ( v44 && *(_DWORD *)a1 > 6u )
      {
        for ( kk = 0; kk < 6; ++kk )
        {
          v46 = *v44;
          v47 = v44 + 1;
          if ( v44 + 1 < v44 )
            goto LABEL_95;
          v44 = (unsigned int *)((char *)v47 + v46);
          if ( (unsigned int *)((char *)v47 + v46) < v47 )
            goto LABEL_95;
        }
        v48 = *v44;
        v49 = (int *)(v44 + 1);
        if ( v44 + 1 < v44 )
        {
LABEL_95:
          v13 = -1073741675;
          goto LABEL_96;
        }
        v13 = 0;
        if ( !v48 )
          v49 = 0LL;
        if ( v48 == 4 )
        {
          v78 = *v49;
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
