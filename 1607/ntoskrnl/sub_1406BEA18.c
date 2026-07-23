/*
 * XREFs of sub_1406BEA18 @ 0x1406BEA18
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     StringCbLengthW @ 0x14010D2B8 (StringCbLengthW.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406BEA18(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int *v4; // r8
  PVOID v7; // r13
  signed int v8; // ebx
  unsigned int *v9; // rax
  unsigned int i; // ecx
  __int64 v11; // r9
  unsigned int *v12; // rdx
  unsigned int v13; // edx
  size_t *v14; // rcx
  void *v15; // r12
  unsigned int *v16; // rax
  unsigned int j; // ecx
  __int64 v18; // r9
  unsigned int *v19; // rdx
  unsigned int v20; // edx
  unsigned int *v21; // rcx
  unsigned int k; // ecx
  __int64 v23; // rax
  unsigned int *v24; // rdx
  unsigned __int64 v25; // rcx
  wchar_t *v26; // rsi
  unsigned int *v27; // rcx
  __int64 v28; // r14
  unsigned int v29; // eax
  size_t v30; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v32; // r9d
  unsigned int *v33; // rax
  unsigned int m; // edx
  __int64 v35; // r10
  unsigned int *v36; // r8
  unsigned int v37; // r13d
  unsigned int *v38; // r15
  unsigned int *v40; // rax
  unsigned int n; // edx
  __int64 v42; // r10
  unsigned int *v43; // r8
  unsigned int v44; // r12d
  unsigned int *v45; // r14
  unsigned int ii; // r8d
  __int64 v47; // rax
  unsigned int *v48; // rdx
  unsigned int v49; // edx
  unsigned int *v50; // rax
  unsigned int v51; // esi
  int v52; // ebx
  PVOID v53; // r11
  PVOID v54; // rax
  int v55; // r14d
  unsigned int v56; // r15d
  unsigned int v57; // ecx
  unsigned int v58; // eax
  unsigned int v59; // edx
  unsigned int v60; // edx
  unsigned int v61; // r8d
  unsigned int v62; // eax
  PVOID v63; // rax
  int v64; // r14d
  __int64 v65; // r8
  unsigned int v66; // eax
  _DWORD *v67; // rdx
  unsigned int v68; // ecx
  unsigned int v69; // eax
  __int64 v70; // r8
  unsigned int v71; // eax
  unsigned __int64 v72; // rdx
  unsigned int v73; // ecx
  unsigned int v74; // eax
  size_t v75; // xmm0_8
  PVOID v76; // r11
  int v77; // r11d
  __int64 v78; // r8
  unsigned int v79; // eax
  __int64 v80; // r8
  unsigned int v81; // eax
  unsigned int *v82; // rdx
  unsigned int v83; // ecx
  unsigned int v84; // eax
  _DWORD *v85; // rdx
  unsigned int jj; // ecx
  unsigned int v87; // eax
  unsigned int v88; // [rsp+28h] [rbp-58h]
  int v89; // [rsp+50h] [rbp-30h] BYREF
  size_t pcbLength; // [rsp+58h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp-20h]
  void *Src; // [rsp+68h] [rbp-18h]
  size_t v93; // [rsp+70h] [rbp-10h]
  unsigned int v95; // [rsp+D0h] [rbp+50h] BYREF

  v95 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v95 = 0;
  P = 0LL;
  v89 = 0;
  v7 = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v9 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v11 = *v9;
      v12 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_15;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_15;
    }
    v13 = *v9;
    v14 = (size_t *)(v9 + 1);
    if ( v9 + 1 < v9 )
    {
LABEL_15:
      v8 = -1073741675;
    }
    else
    {
      v8 = 0;
      if ( !v13 )
        v14 = 0LL;
      if ( v13 != 8 )
        goto LABEL_12;
      v93 = *v14;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_13;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    v16 = v4;
    for ( j = 0; j < 4; ++j )
    {
      v18 = *v16;
      v19 = v16 + 1;
      if ( v16 + 1 < v16 )
        goto LABEL_29;
      v16 = (unsigned int *)((char *)v19 + v18);
      if ( (unsigned int *)((char *)v19 + v18) < v19 )
        goto LABEL_29;
    }
    v20 = *v16;
    v21 = v16 + 1;
    if ( v16 + 1 < v16 )
    {
LABEL_29:
      v8 = -1073741675;
    }
    else
    {
      v8 = 0;
      if ( !v20 )
        v21 = 0LL;
      if ( v20 != 4 )
      {
LABEL_12:
        v8 = -1073741789;
LABEL_13:
        v15 = P;
        goto LABEL_68;
      }
      v95 = *v21;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_13;
  if ( v4 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; k < 5; ++k )
    {
      v23 = *v4;
      v24 = v4 + 1;
      if ( v4 + 1 < v4 )
        goto LABEL_50;
      v4 = (unsigned int *)((char *)v24 + v23);
      if ( (unsigned int *)((char *)v24 + v23) < v24 )
        goto LABEL_50;
    }
    v25 = *v4;
    v26 = (wchar_t *)(v4 + 1);
    if ( v4 + 1 < v4 )
    {
LABEL_50:
      v8 = -1073741675;
    }
    else
    {
      v8 = 0;
      if ( !(_DWORD)v25 || (v25 & 1) != 0 || (v28 = *v4, v26[(v25 >> 1) - 1]) )
      {
LABEL_40:
        v8 = -1073741762;
        goto LABEL_13;
      }
      if ( StringCbLengthW(v26, *v4, &pcbLength) < 0 || pcbLength + 2 != v28 )
      {
        v8 = -1073741762;
        goto LABEL_13;
      }
      LODWORD(pcbLength) = pcbLength >> 1;
      Src = v26;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_13;
  v29 = 2 * pcbLength + 2;
  if ( 2 * (_DWORD)pcbLength == -2 )
    goto LABEL_40;
  v30 = v29;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v29, 0x20534C53u);
  pcbLength = (size_t)PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741801;
    goto LABEL_13;
  }
  memmove(PoolWithTag, Src, v30);
  v27 = *(unsigned int **)(a1 + 8);
  if ( !v27 || (v32 = *(_DWORD *)a1, *(_DWORD *)a1 <= 6u) )
  {
    v8 = -1073741811;
LABEL_43:
    v15 = (void *)pcbLength;
    goto LABEL_68;
  }
  v33 = *(unsigned int **)(a1 + 8);
  for ( m = 0; m < 6; ++m )
  {
    v35 = *v33;
    v36 = v33 + 1;
    if ( v33 + 1 >= v33 )
    {
      v33 = (unsigned int *)((char *)v36 + v35);
      if ( (unsigned int *)((char *)v36 + v35) >= v36 )
        continue;
    }
    v8 = -1073741675;
    goto LABEL_43;
  }
  v37 = *v33;
  v38 = v33 + 1;
  if ( v33 + 1 < v33 )
  {
LABEL_197:
    v8 = -1073741675;
LABEL_66:
    v15 = (void *)pcbLength;
    goto LABEL_67;
  }
  if ( !v37 )
    v38 = 0LL;
  if ( v32 <= 7 )
  {
    v8 = -1073741811;
    goto LABEL_66;
  }
  v40 = v27;
  for ( n = 0; n < 7; ++n )
  {
    v42 = *v40;
    v43 = v40 + 1;
    if ( v40 + 1 < v40 )
      goto LABEL_197;
    v40 = (unsigned int *)((char *)v43 + v42);
    if ( (unsigned int *)((char *)v43 + v42) < v43 )
      goto LABEL_197;
  }
  v44 = *v40;
  v45 = v40 + 1;
  if ( v40 + 1 < v40 )
    goto LABEL_197;
  if ( !v44 )
    v45 = 0LL;
  if ( v32 > 8 )
  {
    for ( ii = 0; ii < 8; ++ii )
    {
      v47 = *v27;
      v48 = v27 + 1;
      if ( v27 + 1 < v27 )
        goto LABEL_92;
      v27 = (unsigned int *)((char *)v48 + v47);
      if ( (unsigned int *)((char *)v48 + v47) < v48 )
        goto LABEL_92;
    }
    v49 = *v27;
    v50 = v27 + 1;
    if ( v27 + 1 < v27 )
    {
LABEL_92:
      v8 = -1073741675;
      goto LABEL_93;
    }
    v8 = 0;
    if ( !v49 )
      v50 = 0LL;
    if ( v49 != 4 )
    {
      v15 = (void *)pcbLength;
      v8 = -1073741789;
      v7 = 0LL;
      goto LABEL_68;
    }
    v51 = *v50;
  }
  else
  {
    v8 = -1073741811;
LABEL_93:
    v51 = v95;
  }
  if ( v8 < 0 )
    goto LABEL_66;
  if ( v51 )
  {
    v52 = 0;
    P = ExAllocatePoolWithTag(PagedPool, v51, 0x20534C53u);
    v53 = P;
    if ( !P )
    {
      v15 = (void *)pcbLength;
      v8 = -1073741801;
      v7 = 0LL;
      goto LABEL_68;
    }
  }
  else
  {
    v53 = P;
    v52 = 1;
  }
  if ( qword_1407473B0 )
  {
    v54 = v53;
    if ( v52 )
      v54 = 0LL;
    v88 = v44;
    v15 = (void *)pcbLength;
    v55 = qword_1407473B0(v95, pcbLength, v38, v37, v45, v88, v54, v51, &v89);
  }
  else
  {
    v15 = (void *)pcbLength;
    v55 = -1073741637;
  }
  v56 = v51 + 4;
  if ( v51 >= 0xFFFFFFFC )
  {
    v57 = v95;
    v8 = -1073741675;
LABEL_109:
    if ( v8 < 0 )
      goto LABEL_67;
    if ( v57 >= 0xFFFFFFF8 )
    {
      v8 = -1073741675;
      goto LABEL_67;
    }
    v58 = (v57 + 15) & 0xFFFFFFF8;
    if ( v58 >= v57 + 8 )
    {
      v59 = v58 + 8;
      if ( v58 + 8 < v58 )
        goto LABEL_121;
      v8 = 0;
    }
    else
    {
      v59 = v95;
      v8 = -1073741675;
    }
    if ( v8 < 0 )
      goto LABEL_67;
    v60 = v59 + 4;
    if ( v60 >= 4 )
    {
      v61 = v60 + 4;
      if ( v60 + 4 >= v60 )
      {
        v62 = v61 + *(_DWORD *)(a2 + 16);
        if ( v62 >= v61 && v62 + 4 >= v62 )
        {
          v8 = v62 + 4 + *(_DWORD *)(a2 + 32) < v62 + 4 ? 0xC0000095 : 0;
          goto LABEL_122;
        }
      }
    }
LABEL_121:
    v8 = -1073741675;
LABEL_122:
    if ( v8 < 0 )
      goto LABEL_67;
    if ( !a4 )
      goto LABEL_124;
    *(_DWORD *)(a4 + 4) = v57;
    v8 = 0;
    if ( v57 )
    {
      v63 = ExAllocatePoolWithTag(PagedPool, v57, 0x20534C53u);
      if ( v63 )
      {
        *(_QWORD *)(a4 + 8) = v63;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v8 = -1073741801;
      }
    }
    else
    {
      v8 = -1073741762;
    }
    if ( v8 < 0 )
      goto LABEL_67;
    v64 = v55 | 0x10000000;
    if ( &v95 )
    {
      v65 = *(_QWORD *)(a4 + 8);
      if ( !v65 )
      {
        v66 = *(_DWORD *)(a4 + 4);
        if ( v66 + 8 < v66 )
          goto LABEL_135;
        *(_DWORD *)(a4 + 4) = v66 + 8;
        ++*(_DWORD *)a4;
LABEL_148:
        pcbLength = v93;
        if ( &pcbLength )
        {
          v70 = *(_QWORD *)(a4 + 8);
          if ( !v70 )
          {
            v71 = *(_DWORD *)(a4 + 4);
            if ( v71 + 12 < v71 )
              goto LABEL_135;
            *(_DWORD *)(a4 + 4) = v71 + 12;
            ++*(_DWORD *)a4;
LABEL_162:
            v76 = P;
            if ( P )
            {
              if ( !v51 )
                goto LABEL_164;
            }
            else if ( v51 )
            {
LABEL_164:
              v8 = -1073741811;
              goto LABEL_165;
            }
            v80 = *(_QWORD *)(a4 + 8);
            if ( v80 )
            {
              v82 = *(unsigned int **)(a4 + 8);
              v83 = 0;
              if ( !*(_DWORD *)a4 )
              {
LABEL_183:
                if ( v82 + 1 < v82 )
                {
LABEL_176:
                  v8 = -1073741675;
LABEL_177:
                  v7 = v76;
                  goto LABEL_68;
                }
                v8 = 0;
                if ( (unsigned __int64)v82 + v51 + 4 > v80 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  v8 = -1073741789;
                  goto LABEL_177;
                }
                *v82 = v51;
                if ( v76 )
                  memmove(v82 + 1, v76, v51);
                ++*(_DWORD *)a4;
LABEL_165:
                if ( v8 < 0 )
                  goto LABEL_67;
                goto LABEL_166;
              }
              while ( 1 )
              {
                v84 = *v82 + 4;
                if ( *v82 >= 0xFFFFFFFC )
                  break;
                if ( (unsigned int *)((char *)v82 + v84) < v82 )
                  goto LABEL_176;
                ++v83;
                v82 = (unsigned int *)((char *)v82 + v84);
                if ( v83 >= *(_DWORD *)a4 )
                  goto LABEL_183;
              }
            }
            else if ( v56 >= 4 )
            {
              v81 = *(_DWORD *)(a4 + 4);
              if ( v81 + v56 >= v81 )
              {
                *(_DWORD *)(a4 + 4) = v81 + v56;
                ++*(_DWORD *)a4;
LABEL_166:
                v77 = v89;
                if ( !&v95 )
                {
LABEL_124:
                  v8 = -1073741811;
                  goto LABEL_67;
                }
                v78 = *(_QWORD *)(a4 + 8);
                if ( !v78 )
                {
                  v79 = *(_DWORD *)(a4 + 4);
                  if ( v79 + 8 >= v79 )
                  {
                    *(_DWORD *)(a4 + 4) = v79 + 8;
                    v8 = 0;
                    ++*(_DWORD *)a4;
                    goto LABEL_67;
                  }
LABEL_135:
                  *(_DWORD *)(a4 + 4) = -1;
                  goto LABEL_136;
                }
                v85 = *(_DWORD **)(a4 + 8);
                for ( jj = 0; jj < *(_DWORD *)a4; v85 = (_DWORD *)((char *)v85 + v87) )
                {
                  v87 = *v85 + 4;
                  if ( *v85 >= 0xFFFFFFFC || (_DWORD *)((char *)v85 + v87) < v85 )
                    goto LABEL_136;
                  ++jj;
                }
                if ( v85 + 1 < v85 )
                  goto LABEL_136;
                v8 = 0;
                if ( (unsigned __int64)(v85 + 2) <= v78 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *v85 = 4;
                  v85[1] = v77;
                  ++*(_DWORD *)a4;
                  goto LABEL_67;
                }
LABEL_143:
                v8 = -1073741789;
                goto LABEL_67;
              }
              *(_DWORD *)(a4 + 4) = -1;
              goto LABEL_176;
            }
            v8 = -1073741675;
            goto LABEL_165;
          }
          v72 = *(_QWORD *)(a4 + 8);
          v73 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v74 = *(_DWORD *)v72 + 4;
              if ( *(_DWORD *)v72 >= 0xFFFFFFFC )
                break;
              if ( v72 + v74 < v72 )
                goto LABEL_136;
              ++v73;
              v72 += v74;
              if ( v73 >= *(_DWORD *)a4 )
                goto LABEL_156;
            }
            v8 = -1073741675;
          }
          else
          {
LABEL_156:
            if ( v72 + 4 < v72 )
              goto LABEL_136;
            v8 = 0;
            if ( v72 + 12 > v70 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_143;
            v75 = pcbLength;
            *(_DWORD *)v72 = 8;
            *(_QWORD *)(v72 + 4) = v75;
            ++*(_DWORD *)a4;
          }
        }
        else
        {
          v8 = -1073741811;
        }
        if ( v8 < 0 )
          goto LABEL_67;
        goto LABEL_162;
      }
      v67 = *(_DWORD **)(a4 + 8);
      v68 = 0;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v69 = *v67 + 4;
          if ( *v67 >= 0xFFFFFFFC )
            break;
          if ( (_DWORD *)((char *)v67 + v69) < v67 )
            goto LABEL_136;
          ++v68;
          v67 = (_DWORD *)((char *)v67 + v69);
          if ( v68 >= *(_DWORD *)a4 )
            goto LABEL_141;
        }
        v8 = -1073741675;
      }
      else
      {
LABEL_141:
        if ( v67 + 1 < v67 )
          goto LABEL_136;
        v8 = 0;
        if ( (unsigned __int64)(v67 + 2) > v65 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_143;
        *v67 = 4;
        v67[1] = v64;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v8 = -1073741811;
    }
    if ( v8 < 0 )
      goto LABEL_67;
    goto LABEL_148;
  }
  if ( v56 < 0xFFFFFFEC )
  {
    v57 = v51 + 32;
    if ( v51 + 32 >= v51 + 24 )
    {
      v8 = 0;
      goto LABEL_109;
    }
  }
LABEL_136:
  v8 = -1073741675;
LABEL_67:
  v7 = P;
LABEL_68:
  if ( v15 )
    ExFreePoolWithTag(v15, 0x20534C53u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  return (unsigned int)v8;
}
