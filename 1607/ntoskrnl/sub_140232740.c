/*
 * XREFs of sub_140232740 @ 0x140232740
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140232740(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int *v4; // r8
  PVOID PoolWithTag; // r12
  signed int v9; // ebx
  unsigned int *v10; // rax
  unsigned int i; // ecx
  __int64 v12; // r10
  unsigned int *v13; // rdx
  unsigned int v14; // edx
  __int64 *v15; // rcx
  unsigned int v16; // r10d
  unsigned int *v17; // rax
  unsigned int j; // ecx
  __int64 v19; // r9
  unsigned int *v20; // rdx
  unsigned int v21; // r15d
  unsigned int *v22; // r14
  unsigned int k; // ecx
  __int64 v24; // rax
  unsigned int *v25; // rdx
  unsigned int v26; // ecx
  unsigned int *v27; // rax
  unsigned int v28; // esi
  int v29; // ebx
  PVOID v30; // r8
  int v31; // r14d
  unsigned int v32; // r15d
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // edx
  unsigned int v36; // edx
  unsigned int v37; // r8d
  unsigned int v38; // eax
  PVOID v39; // rax
  int v40; // r14d
  __int64 v41; // r8
  unsigned int v42; // eax
  _DWORD *v43; // rdx
  unsigned int v44; // ecx
  unsigned int v45; // eax
  __int64 v46; // r8
  unsigned int v47; // eax
  unsigned __int64 v48; // rdx
  unsigned int v49; // ecx
  unsigned int v50; // eax
  __int64 v51; // xmm0_8
  unsigned int v52; // r11d
  __int64 v53; // r8
  unsigned int v54; // eax
  __int64 v55; // r8
  unsigned int v56; // eax
  unsigned int *v57; // rdx
  unsigned int v58; // ecx
  unsigned int v59; // eax
  unsigned int v60; // ecx
  _DWORD *m; // rdx
  unsigned int v62; // eax
  __int64 v64; // [rsp+30h] [rbp-10h] BYREF
  __int64 v65; // [rsp+38h] [rbp-8h]
  unsigned int v66; // [rsp+80h] [rbp+40h] BYREF

  v66 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v66 = 0;
  PoolWithTag = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v10 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v12 = *v10;
      v13 = v10 + 1;
      if ( v10 + 1 < v10 )
        goto LABEL_14;
      v10 = (unsigned int *)((char *)v13 + v12);
      if ( (unsigned int *)((char *)v13 + v12) < v13 )
        goto LABEL_14;
    }
    v14 = *v10;
    v15 = (__int64 *)(v10 + 1);
    if ( v10 + 1 < v10 )
    {
LABEL_14:
      v9 = -1073741675;
      goto LABEL_15;
    }
    v9 = 0;
    if ( !v14 )
      v15 = 0LL;
    if ( v14 == 8 )
    {
      v65 = *v15;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v9 = -1073741811;
LABEL_15:
  if ( v9 >= 0 )
  {
    if ( !v4 )
      return (unsigned int)-1073741811;
    v16 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    v17 = v4;
    for ( j = 0; j < 4; ++j )
    {
      v19 = *v17;
      v20 = v17 + 1;
      if ( v17 + 1 < v17 )
        return (unsigned int)-1073741675;
      v17 = (unsigned int *)((char *)v20 + v19);
      if ( (unsigned int *)((char *)v20 + v19) < v20 )
        return (unsigned int)-1073741675;
    }
    v21 = *v17;
    v22 = v17 + 1;
    if ( v17 + 1 < v17 )
      return (unsigned int)-1073741675;
    if ( !v21 )
      v22 = 0LL;
    if ( v16 > 5 )
    {
      for ( k = 0; k < 5; ++k )
      {
        v24 = *v4;
        v25 = v4 + 1;
        if ( v4 + 1 < v4 )
          goto LABEL_37;
        v4 = (unsigned int *)((char *)v25 + v24);
        if ( (unsigned int *)((char *)v25 + v24) < v25 )
          goto LABEL_37;
      }
      v26 = *v4;
      v27 = v4 + 1;
      if ( v4 + 1 < v4 )
      {
LABEL_37:
        v9 = -1073741675;
        goto LABEL_38;
      }
      v9 = 0;
      if ( !v26 )
        v27 = 0LL;
      if ( v26 == 4 )
      {
        v28 = *v27;
        goto LABEL_39;
      }
      return (unsigned int)-1073741789;
    }
    v9 = -1073741811;
LABEL_38:
    v28 = v66;
LABEL_39:
    if ( v9 >= 0 )
    {
      if ( v28 )
      {
        v29 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v28, 0x20534C53u);
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
      }
      else
      {
        v29 = 1;
      }
      if ( qword_1407473C8 )
      {
        v30 = PoolWithTag;
        if ( v29 )
          v30 = 0LL;
        v31 = qword_1407473C8(v22, v21, v30, v28, &v66);
      }
      else
      {
        v31 = -1073741637;
      }
      v32 = v28 + 4;
      if ( v28 >= 0xFFFFFFFC )
      {
        v33 = v66;
        v9 = -1073741675;
      }
      else
      {
        if ( v32 >= 0xFFFFFFEC || (v33 = v28 + 32, v28 + 32 < v28 + 24) )
        {
          v9 = -1073741675;
          goto LABEL_140;
        }
        v9 = 0;
      }
      if ( v9 >= 0 )
      {
        if ( v33 < 0xFFFFFFF8 )
        {
          v34 = (v33 + 15) & 0xFFFFFFF8;
          if ( v34 >= v33 + 8 )
          {
            v35 = v34 + 8;
            if ( v34 + 8 < v34 )
            {
              v9 = -1073741675;
              goto LABEL_67;
            }
            v9 = 0;
          }
          else
          {
            v35 = v66;
            v9 = -1073741675;
          }
          if ( v9 >= 0 )
          {
            v36 = v35 + 4;
            if ( v36 < 4
              || (v37 = v36 + 4, v36 + 4 < v36)
              || (v38 = v37 + *(_DWORD *)(a2 + 16), v38 < v37)
              || v38 + 4 < v38 )
            {
              v9 = -1073741675;
            }
            else
            {
              v9 = v38 + 4 + *(_DWORD *)(a2 + 32) < v38 + 4 ? 0xC0000095 : 0;
            }
          }
LABEL_67:
          if ( v9 < 0 )
            goto LABEL_140;
          if ( !a4 )
            goto LABEL_69;
          *(_DWORD *)(a4 + 4) = v33;
          v9 = 0;
          if ( v33 )
          {
            v39 = ExAllocatePoolWithTag(PagedPool, v33, 0x20534C53u);
            if ( v39 )
            {
              *(_QWORD *)(a4 + 8) = v39;
              *(_DWORD *)a4 = 0;
            }
            else
            {
              v9 = -1073741801;
            }
          }
          else
          {
            v9 = -1073741762;
          }
          if ( v9 < 0 )
            goto LABEL_140;
          v40 = v31 | 0x10000000;
          if ( &v64 )
          {
            v41 = *(_QWORD *)(a4 + 8);
            if ( !v41 )
            {
              v42 = *(_DWORD *)(a4 + 4);
              if ( v42 + 8 < v42 )
                goto LABEL_82;
              *(_DWORD *)(a4 + 4) = v42 + 8;
              ++*(_DWORD *)a4;
LABEL_95:
              v64 = v65;
              if ( &v64 )
              {
                v46 = *(_QWORD *)(a4 + 8);
                if ( !v46 )
                {
                  v47 = *(_DWORD *)(a4 + 4);
                  if ( v47 + 12 < v47 )
                    goto LABEL_82;
                  *(_DWORD *)(a4 + 4) = v47 + 12;
                  ++*(_DWORD *)a4;
LABEL_109:
                  if ( PoolWithTag )
                  {
                    if ( !v28 )
                      goto LABEL_111;
                  }
                  else if ( v28 )
                  {
LABEL_111:
                    v9 = -1073741811;
                    goto LABEL_112;
                  }
                  v55 = *(_QWORD *)(a4 + 8);
                  if ( v55 )
                  {
                    v57 = *(unsigned int **)(a4 + 8);
                    v58 = 0;
                    if ( !*(_DWORD *)a4 )
                    {
LABEL_127:
                      if ( v57 + 1 < v57 )
                        goto LABEL_83;
                      v9 = 0;
                      if ( (unsigned __int64)v57 + v28 + 4 > v55 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        goto LABEL_90;
                      *v57 = v28;
                      if ( PoolWithTag )
                        memmove(v57 + 1, PoolWithTag, v28);
                      ++*(_DWORD *)a4;
                      goto LABEL_112;
                    }
                    while ( 1 )
                    {
                      v59 = *v57 + 4;
                      if ( *v57 >= 0xFFFFFFFC )
                        break;
                      if ( (unsigned int *)((char *)v57 + v59) < v57 )
                        goto LABEL_83;
                      ++v58;
                      v57 = (unsigned int *)((char *)v57 + v59);
                      if ( v58 >= *(_DWORD *)a4 )
                        goto LABEL_127;
                    }
                  }
                  else if ( v32 >= 4 )
                  {
                    v56 = *(_DWORD *)(a4 + 4);
                    if ( v56 + v32 >= v56 )
                    {
                      *(_DWORD *)(a4 + 4) = v56 + v32;
                      ++*(_DWORD *)a4;
                      goto LABEL_113;
                    }
LABEL_82:
                    *(_DWORD *)(a4 + 4) = -1;
                    goto LABEL_83;
                  }
                  v9 = -1073741675;
LABEL_112:
                  if ( v9 < 0 )
                    goto LABEL_140;
LABEL_113:
                  v52 = v66;
                  if ( !&v64 )
                  {
LABEL_69:
                    v9 = -1073741811;
                    goto LABEL_140;
                  }
                  v53 = *(_QWORD *)(a4 + 8);
                  if ( !v53 )
                  {
                    v54 = *(_DWORD *)(a4 + 4);
                    if ( v54 + 8 >= v54 )
                    {
                      *(_DWORD *)(a4 + 4) = v54 + 8;
                      ++*(_DWORD *)a4;
                      v9 = 0;
                      goto LABEL_140;
                    }
                    goto LABEL_82;
                  }
                  v60 = 0;
                  for ( m = *(_DWORD **)(a4 + 8); v60 < *(_DWORD *)a4; m = (_DWORD *)((char *)m + v62) )
                  {
                    v62 = *m + 4;
                    if ( *m >= 0xFFFFFFFC || (_DWORD *)((char *)m + v62) < m )
                      goto LABEL_83;
                    ++v60;
                  }
                  if ( m + 1 < m )
                  {
LABEL_83:
                    v9 = -1073741675;
                    goto LABEL_140;
                  }
                  v9 = 0;
                  if ( (unsigned __int64)(m + 2) <= v53 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *m = 4;
                    m[1] = v52;
                    ++*(_DWORD *)a4;
                    goto LABEL_140;
                  }
LABEL_90:
                  v9 = -1073741789;
                  goto LABEL_140;
                }
                v48 = *(_QWORD *)(a4 + 8);
                v49 = 0;
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v50 = *(_DWORD *)v48 + 4;
                    if ( *(_DWORD *)v48 >= 0xFFFFFFFC )
                      break;
                    if ( v48 + v50 < v48 )
                      goto LABEL_83;
                    ++v49;
                    v48 += v50;
                    if ( v49 >= *(_DWORD *)a4 )
                      goto LABEL_103;
                  }
                  v9 = -1073741675;
                }
                else
                {
LABEL_103:
                  if ( v48 + 4 < v48 )
                    goto LABEL_83;
                  v9 = 0;
                  if ( v48 + 12 > v46 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_90;
                  v51 = v64;
                  *(_DWORD *)v48 = 8;
                  *(_QWORD *)(v48 + 4) = v51;
                  ++*(_DWORD *)a4;
                }
              }
              else
              {
                v9 = -1073741811;
              }
              if ( v9 < 0 )
                goto LABEL_140;
              goto LABEL_109;
            }
            v43 = *(_DWORD **)(a4 + 8);
            v44 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v45 = *v43 + 4;
                if ( *v43 >= 0xFFFFFFFC )
                  break;
                if ( (_DWORD *)((char *)v43 + v45) < v43 )
                  goto LABEL_83;
                ++v44;
                v43 = (_DWORD *)((char *)v43 + v45);
                if ( v44 >= *(_DWORD *)a4 )
                  goto LABEL_88;
              }
              v9 = -1073741675;
            }
            else
            {
LABEL_88:
              if ( v43 + 1 < v43 )
                goto LABEL_83;
              v9 = 0;
              if ( (unsigned __int64)(v43 + 2) > v41 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_90;
              *v43 = 4;
              v43[1] = v40;
              ++*(_DWORD *)a4;
            }
          }
          else
          {
            v9 = -1073741811;
          }
          if ( v9 < 0 )
            goto LABEL_140;
          goto LABEL_95;
        }
        v9 = -1073741675;
      }
LABEL_140:
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
    }
  }
  return (unsigned int)v9;
}
