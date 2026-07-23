/*
 * XREFs of sub_1406BE068 @ 0x1406BE068
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     StringCbLengthW @ 0x14010D2B8 (StringCbLengthW.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406BE068(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
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
  unsigned int j; // ecx
  __int64 v17; // rax
  unsigned int *v18; // rdx
  unsigned __int64 v19; // rcx
  wchar_t *v20; // rsi
  unsigned int *v21; // rcx
  __int64 v22; // r14
  unsigned int v23; // eax
  size_t v24; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v26; // r10d
  unsigned int *v27; // rax
  unsigned int k; // edx
  __int64 v29; // r9
  unsigned int *v30; // r8
  unsigned int v31; // r13d
  unsigned int *v32; // r12
  unsigned int *v33; // rax
  unsigned int m; // edx
  __int64 v35; // r9
  unsigned int *v36; // r8
  unsigned int v37; // r8d
  unsigned int *v38; // rdx
  unsigned int *v40; // rax
  unsigned int n; // edx
  __int64 v42; // r9
  unsigned int *v43; // r8
  unsigned int v44; // r15d
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
  unsigned int *v55; // rdx
  int v56; // r14d
  unsigned int v57; // r15d
  unsigned int v58; // ecx
  unsigned int v59; // eax
  unsigned int v60; // edx
  unsigned int v61; // edx
  unsigned int v62; // r8d
  unsigned int v63; // eax
  PVOID v64; // rax
  int v65; // r14d
  __int64 v66; // r8
  unsigned int v67; // eax
  _DWORD *v68; // rdx
  unsigned int v69; // ecx
  unsigned int v70; // eax
  __int64 v71; // r8
  unsigned int v72; // eax
  unsigned __int64 v73; // rdx
  unsigned int v74; // ecx
  unsigned int v75; // eax
  size_t v76; // xmm0_8
  PVOID v77; // r11
  int v78; // r11d
  __int64 v79; // r8
  unsigned int v80; // eax
  __int64 v81; // r8
  unsigned int v82; // eax
  unsigned int *v83; // rdx
  unsigned int v84; // ecx
  unsigned int v85; // eax
  _DWORD *v86; // rdx
  unsigned int v87; // ecx
  unsigned int v88; // eax
  int v89; // r11d
  __int64 v90; // r8
  unsigned int v91; // eax
  _DWORD *v92; // rdx
  unsigned int v93; // ecx
  unsigned int v94; // eax
  int v95; // r11d
  __int64 v96; // r8
  unsigned int v97; // eax
  _DWORD *v98; // rdx
  unsigned int jj; // ecx
  unsigned int v100; // eax
  int v101; // [rsp+68h] [rbp-9h] BYREF
  int v102; // [rsp+6Ch] [rbp-5h] BYREF
  int v103; // [rsp+70h] [rbp-1h] BYREF
  size_t pcbLength; // [rsp+78h] [rbp+7h] BYREF
  PVOID P; // [rsp+80h] [rbp+Fh]
  void *Src; // [rsp+88h] [rbp+17h]
  size_t v107; // [rsp+90h] [rbp+1Fh]
  unsigned int v109; // [rsp+E8h] [rbp+77h] BYREF

  v109 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v109 = 0;
  P = 0LL;
  v101 = 0;
  v7 = 0LL;
  v102 = 0;
  v103 = 0;
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
      {
        v8 = -1073741789;
LABEL_13:
        v15 = P;
        goto LABEL_68;
      }
      v107 = *v14;
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
    for ( j = 0; j < 4; ++j )
    {
      v17 = *v4;
      v18 = v4 + 1;
      if ( v4 + 1 < v4 )
        goto LABEL_36;
      v4 = (unsigned int *)((char *)v18 + v17);
      if ( (unsigned int *)((char *)v18 + v17) < v18 )
        goto LABEL_36;
    }
    v19 = *v4;
    v20 = (wchar_t *)(v4 + 1);
    if ( v4 + 1 < v4 )
    {
LABEL_36:
      v8 = -1073741675;
    }
    else
    {
      v8 = 0;
      if ( !(_DWORD)v19 || (v19 & 1) != 0 || (v22 = *v4, v20[(v19 >> 1) - 1]) )
      {
LABEL_26:
        v8 = -1073741762;
        goto LABEL_13;
      }
      if ( StringCbLengthW(v20, *v4, &pcbLength) < 0 || pcbLength + 2 != v22 )
      {
        v8 = -1073741762;
        goto LABEL_13;
      }
      LODWORD(pcbLength) = pcbLength >> 1;
      Src = v20;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_13;
  v23 = 2 * pcbLength + 2;
  if ( 2 * (_DWORD)pcbLength == -2 )
    goto LABEL_26;
  v24 = v23;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v23, 0x20534C53u);
  pcbLength = (size_t)PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741801;
    goto LABEL_13;
  }
  memmove(PoolWithTag, Src, v24);
  v21 = *(unsigned int **)(a1 + 8);
  if ( !v21 || (v26 = *(_DWORD *)a1, *(_DWORD *)a1 <= 5u) )
  {
    v8 = -1073741811;
LABEL_29:
    v15 = (void *)pcbLength;
    goto LABEL_68;
  }
  v27 = *(unsigned int **)(a1 + 8);
  for ( k = 0; k < 5; ++k )
  {
    v29 = *v27;
    v30 = v27 + 1;
    if ( v27 + 1 >= v27 )
    {
      v27 = (unsigned int *)((char *)v30 + v29);
      if ( (unsigned int *)((char *)v30 + v29) >= v30 )
        continue;
    }
    v8 = -1073741675;
    goto LABEL_29;
  }
  v31 = *v27;
  v32 = v27 + 1;
  if ( v27 + 1 < v27 )
  {
    v8 = -1073741675;
    goto LABEL_66;
  }
  v8 = 0;
  if ( !v31 )
    v32 = 0LL;
  if ( v26 <= 6 )
  {
    v8 = -1073741811;
    goto LABEL_63;
  }
  v33 = *(unsigned int **)(a1 + 8);
  for ( m = 0; m < 6; ++m )
  {
    v35 = *v33;
    v36 = v33 + 1;
    if ( v33 + 1 < v33 )
      goto LABEL_62;
    v33 = (unsigned int *)((char *)v36 + v35);
    if ( (unsigned int *)((char *)v36 + v35) < v36 )
      goto LABEL_62;
  }
  v37 = *v33;
  v38 = v33 + 1;
  if ( v33 + 1 < v33 )
  {
LABEL_62:
    v8 = -1073741675;
  }
  else
  {
    if ( !v37 )
      v38 = 0LL;
    if ( v37 != 4 )
    {
      v15 = (void *)pcbLength;
      v8 = -1073741789;
      v7 = 0LL;
      goto LABEL_68;
    }
    v109 = *v38;
  }
LABEL_63:
  if ( v8 < 0 )
    goto LABEL_66;
  if ( v26 <= 7 )
  {
    v8 = -1073741811;
    goto LABEL_66;
  }
  v8 = 0;
  v40 = v21;
  for ( n = 0; n < 7; ++n )
  {
    v42 = *v40;
    v43 = v40 + 1;
    if ( v40 + 1 < v40 )
      goto LABEL_229;
    v40 = (unsigned int *)((char *)v43 + v42);
    if ( (unsigned int *)((char *)v43 + v42) < v43 )
      goto LABEL_229;
  }
  v44 = *v40;
  v45 = v40 + 1;
  if ( v40 + 1 < v40 )
  {
LABEL_229:
    v8 = -1073741675;
LABEL_66:
    v15 = (void *)pcbLength;
    goto LABEL_67;
  }
  if ( !v44 )
    v45 = 0LL;
  if ( v26 > 8 )
  {
    for ( ii = 0; ii < 8; ++ii )
    {
      v47 = *v21;
      v48 = v21 + 1;
      if ( v21 + 1 < v21 )
        goto LABEL_92;
      v21 = (unsigned int *)((char *)v48 + v47);
      if ( (unsigned int *)((char *)v48 + v47) < v48 )
        goto LABEL_92;
    }
    v49 = *v21;
    v50 = v21 + 1;
    if ( v21 + 1 < v21 )
    {
LABEL_92:
      v8 = -1073741675;
      goto LABEL_93;
    }
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
    v51 = v109;
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
  if ( qword_1407473B8 )
  {
    v54 = v53;
    v55 = v32;
    v15 = (void *)pcbLength;
    if ( v52 )
      v54 = 0LL;
    v56 = qword_1407473B8(pcbLength, v55, v31, v109, v45, v44, v54, v51, &v101, &v102, &v103);
  }
  else
  {
    v15 = (void *)pcbLength;
    v56 = -1073741637;
  }
  v57 = v51 + 4;
  if ( v51 >= 0xFFFFFFFC )
  {
    v58 = v109;
    v8 = -1073741675;
LABEL_111:
    if ( v8 < 0 )
      goto LABEL_67;
    if ( v58 >= 0xFFFFFFF8 )
    {
      v8 = -1073741675;
      goto LABEL_67;
    }
    v59 = (v58 + 15) & 0xFFFFFFF8;
    if ( v59 >= v58 + 8 )
    {
      v60 = v59 + 8;
      if ( v59 + 8 < v59 )
        goto LABEL_123;
      v8 = 0;
    }
    else
    {
      v60 = v109;
      v8 = -1073741675;
    }
    if ( v8 < 0 )
      goto LABEL_67;
    v61 = v60 + 4;
    if ( v61 >= 4 )
    {
      v62 = v61 + 4;
      if ( v61 + 4 >= v61 )
      {
        v63 = v62 + *(_DWORD *)(a2 + 16);
        if ( v63 >= v62 && v63 + 4 >= v63 )
        {
          v8 = v63 + 4 + *(_DWORD *)(a2 + 32) < v63 + 4 ? 0xC0000095 : 0;
          goto LABEL_124;
        }
      }
    }
LABEL_123:
    v8 = -1073741675;
LABEL_124:
    if ( v8 < 0 )
      goto LABEL_67;
    if ( !a4 )
      goto LABEL_126;
    *(_DWORD *)(a4 + 4) = v58;
    v8 = 0;
    if ( v58 )
    {
      v64 = ExAllocatePoolWithTag(PagedPool, v58, 0x20534C53u);
      if ( v64 )
      {
        *(_QWORD *)(a4 + 8) = v64;
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
    v65 = v56 | 0x10000000;
    if ( &v109 )
    {
      v66 = *(_QWORD *)(a4 + 8);
      if ( !v66 )
      {
        v67 = *(_DWORD *)(a4 + 4);
        if ( v67 + 8 < v67 )
        {
          *(_DWORD *)(a4 + 4) = -1;
          goto LABEL_138;
        }
        *(_DWORD *)(a4 + 4) = v67 + 8;
        ++*(_DWORD *)a4;
        goto LABEL_150;
      }
      v68 = *(_DWORD **)(a4 + 8);
      v69 = 0;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v70 = *v68 + 4;
          if ( *v68 >= 0xFFFFFFFC )
            break;
          if ( (_DWORD *)((char *)v68 + v70) < v68 )
            goto LABEL_138;
          ++v69;
          v68 = (_DWORD *)((char *)v68 + v70);
          if ( v69 >= *(_DWORD *)a4 )
            goto LABEL_143;
        }
        v8 = -1073741675;
      }
      else
      {
LABEL_143:
        if ( v68 + 1 < v68 )
          goto LABEL_138;
        v8 = 0;
        if ( (unsigned __int64)(v68 + 2) > v66 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_145;
        *v68 = 4;
        v68[1] = v65;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v8 = -1073741811;
    }
    if ( v8 < 0 )
      goto LABEL_67;
LABEL_150:
    pcbLength = v107;
    if ( &pcbLength )
    {
      v71 = *(_QWORD *)(a4 + 8);
      if ( !v71 )
      {
        v72 = *(_DWORD *)(a4 + 4);
        if ( v72 + 12 < v72 )
          goto LABEL_154;
        *(_DWORD *)(a4 + 4) = v72 + 12;
        ++*(_DWORD *)a4;
LABEL_166:
        v77 = P;
        if ( P )
        {
          if ( !v51 )
            goto LABEL_168;
        }
        else if ( v51 )
        {
LABEL_168:
          v8 = -1073741811;
          goto LABEL_169;
        }
        v81 = *(_QWORD *)(a4 + 8);
        if ( v81 )
        {
          v83 = *(unsigned int **)(a4 + 8);
          v84 = 0;
          if ( !*(_DWORD *)a4 )
          {
LABEL_187:
            if ( v83 + 1 < v83 )
            {
LABEL_180:
              v8 = -1073741675;
LABEL_181:
              v7 = v77;
              goto LABEL_68;
            }
            v8 = 0;
            if ( (unsigned __int64)v83 + v51 + 4 > v81 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              v8 = -1073741789;
              goto LABEL_181;
            }
            *v83 = v51;
            if ( v77 )
              memmove(v83 + 1, v77, v51);
            ++*(_DWORD *)a4;
LABEL_169:
            if ( v8 < 0 )
              goto LABEL_67;
LABEL_170:
            v78 = v101;
            if ( &v109 )
            {
              v79 = *(_QWORD *)(a4 + 8);
              if ( !v79 )
              {
                v80 = *(_DWORD *)(a4 + 4);
                if ( v80 + 8 < v80 )
                  goto LABEL_154;
                *(_DWORD *)(a4 + 4) = v80 + 8;
                ++*(_DWORD *)a4;
LABEL_203:
                v89 = v102;
                if ( &v109 )
                {
                  v90 = *(_QWORD *)(a4 + 8);
                  if ( !v90 )
                  {
                    v91 = *(_DWORD *)(a4 + 4);
                    if ( v91 + 8 >= v91 )
                    {
                      *(_DWORD *)(a4 + 4) = v91 + 8;
                      ++*(_DWORD *)a4;
LABEL_217:
                      v95 = v103;
                      if ( !&v109 )
                      {
LABEL_126:
                        v8 = -1073741811;
                        goto LABEL_67;
                      }
                      v96 = *(_QWORD *)(a4 + 8);
                      if ( !v96 )
                      {
                        v97 = *(_DWORD *)(a4 + 4);
                        if ( v97 + 8 >= v97 )
                        {
                          *(_DWORD *)(a4 + 4) = v97 + 8;
                          v8 = 0;
                          ++*(_DWORD *)a4;
                          goto LABEL_67;
                        }
                        goto LABEL_154;
                      }
                      v98 = *(_DWORD **)(a4 + 8);
                      for ( jj = 0; jj < *(_DWORD *)a4; v98 = (_DWORD *)((char *)v98 + v100) )
                      {
                        v100 = *v98 + 4;
                        if ( *v98 >= 0xFFFFFFFC || (_DWORD *)((char *)v98 + v100) < v98 )
                          goto LABEL_155;
                        ++jj;
                      }
                      if ( v98 + 1 < v98 )
                      {
LABEL_155:
                        v8 = -1073741675;
                        goto LABEL_67;
                      }
                      v8 = 0;
                      if ( (unsigned __int64)(v98 + 2) <= v96 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      {
                        *v98 = 4;
                        v98[1] = v95;
                        ++*(_DWORD *)a4;
                        goto LABEL_67;
                      }
LABEL_145:
                      v8 = -1073741789;
                      goto LABEL_67;
                    }
LABEL_154:
                    *(_DWORD *)(a4 + 4) = -1;
                    goto LABEL_155;
                  }
                  v92 = *(_DWORD **)(a4 + 8);
                  v93 = 0;
                  if ( *(_DWORD *)a4 )
                  {
                    while ( 1 )
                    {
                      v94 = *v92 + 4;
                      if ( *v92 >= 0xFFFFFFFC )
                        break;
                      if ( (_DWORD *)((char *)v92 + v94) < v92 )
                        goto LABEL_155;
                      ++v93;
                      v92 = (_DWORD *)((char *)v92 + v94);
                      if ( v93 >= *(_DWORD *)a4 )
                        goto LABEL_211;
                    }
                    v8 = -1073741675;
                  }
                  else
                  {
LABEL_211:
                    if ( v92 + 1 < v92 )
                      goto LABEL_155;
                    v8 = 0;
                    if ( (unsigned __int64)(v92 + 2) > v90 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      goto LABEL_145;
                    *v92 = 4;
                    v92[1] = v89;
                    ++*(_DWORD *)a4;
                  }
                }
                else
                {
                  v8 = -1073741811;
                }
                if ( v8 < 0 )
                  goto LABEL_67;
                goto LABEL_217;
              }
              v86 = *(_DWORD **)(a4 + 8);
              v87 = 0;
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v88 = *v86 + 4;
                  if ( *v86 >= 0xFFFFFFFC )
                    break;
                  if ( (_DWORD *)((char *)v86 + v88) < v86 )
                    goto LABEL_155;
                  ++v87;
                  v86 = (_DWORD *)((char *)v86 + v88);
                  if ( v87 >= *(_DWORD *)a4 )
                    goto LABEL_197;
                }
                v8 = -1073741675;
              }
              else
              {
LABEL_197:
                if ( v86 + 1 < v86 )
                  goto LABEL_155;
                v8 = 0;
                if ( (unsigned __int64)(v86 + 2) > v79 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_145;
                *v86 = 4;
                v86[1] = v78;
                ++*(_DWORD *)a4;
              }
            }
            else
            {
              v8 = -1073741811;
            }
            if ( v8 < 0 )
              goto LABEL_67;
            goto LABEL_203;
          }
          while ( 1 )
          {
            v85 = *v83 + 4;
            if ( *v83 >= 0xFFFFFFFC )
              break;
            if ( (unsigned int *)((char *)v83 + v85) < v83 )
              goto LABEL_180;
            ++v84;
            v83 = (unsigned int *)((char *)v83 + v85);
            if ( v84 >= *(_DWORD *)a4 )
              goto LABEL_187;
          }
        }
        else if ( v57 >= 4 )
        {
          v82 = *(_DWORD *)(a4 + 4);
          if ( v82 + v57 >= v82 )
          {
            *(_DWORD *)(a4 + 4) = v82 + v57;
            ++*(_DWORD *)a4;
            goto LABEL_170;
          }
          *(_DWORD *)(a4 + 4) = -1;
          goto LABEL_180;
        }
        v8 = -1073741675;
        goto LABEL_169;
      }
      v73 = *(_QWORD *)(a4 + 8);
      v74 = 0;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v75 = *(_DWORD *)v73 + 4;
          if ( *(_DWORD *)v73 >= 0xFFFFFFFC )
            break;
          if ( v73 + v75 < v73 )
            goto LABEL_155;
          ++v74;
          v73 += v75;
          if ( v74 >= *(_DWORD *)a4 )
            goto LABEL_160;
        }
        v8 = -1073741675;
      }
      else
      {
LABEL_160:
        if ( v73 + 4 < v73 )
          goto LABEL_155;
        v8 = 0;
        if ( v73 + 12 > v71 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_145;
        v76 = pcbLength;
        *(_DWORD *)v73 = 8;
        *(_QWORD *)(v73 + 4) = v76;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v8 = -1073741811;
    }
    if ( v8 < 0 )
      goto LABEL_67;
    goto LABEL_166;
  }
  if ( v57 < 0xFFFFFFEC && v51 + 32 >= v51 + 24 && v51 + 40 >= v51 + 32 )
  {
    v58 = v51 + 48;
    if ( v51 + 48 >= v51 + 40 )
    {
      v8 = 0;
      goto LABEL_111;
    }
  }
LABEL_138:
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
