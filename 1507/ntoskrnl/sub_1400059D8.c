/*
 * XREFs of sub_1400059D8 @ 0x1400059D8
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1400059D8(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int *v4; // r8
  PVOID PoolWithTag; // r12
  unsigned int *v9; // rax
  unsigned int i; // ecx
  __int64 v11; // r10
  unsigned int *v12; // rdx
  unsigned int v13; // edx
  __int64 *v14; // rcx
  signed int v15; // ebx
  unsigned int j; // ecx
  __int64 v17; // rax
  unsigned int *v18; // rdx
  unsigned int v19; // ecx
  unsigned int *v20; // rax
  unsigned int v21; // esi
  int v22; // ebx
  PVOID v23; // rcx
  int v24; // r14d
  unsigned int v25; // r13d
  unsigned int v26; // r8d
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // eax
  PVOID v32; // rax
  int v33; // r14d
  __int64 v34; // r9
  _DWORD *v35; // rdx
  unsigned int v36; // ecx
  __int64 v37; // r8
  unsigned __int64 v38; // rdx
  unsigned int v39; // ecx
  unsigned int v40; // eax
  __int64 v41; // xmm0_8
  __int64 v42; // r8
  unsigned int *v43; // rdx
  unsigned int v44; // ecx
  unsigned int v45; // eax
  unsigned int v46; // r11d
  __int64 v47; // r8
  unsigned int v48; // ecx
  _DWORD *k; // rdx
  unsigned int v50; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  __int64 v57; // [rsp+20h] [rbp-10h] BYREF
  __int64 v58; // [rsp+28h] [rbp-8h]
  unsigned int v59; // [rsp+70h] [rbp+40h] BYREF

  v59 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v59 = 0;
  PoolWithTag = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v9 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v11 = *v9;
      v12 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_99;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_99;
    }
    v13 = *v9;
    v14 = (__int64 *)(v9 + 1);
    if ( v9 + 1 < v9 )
    {
LABEL_99:
      v15 = -1073741675;
      goto LABEL_12;
    }
    v15 = 0;
    if ( !v13 )
      v14 = 0LL;
    if ( v13 == 8 )
    {
      v58 = *v14;
      goto LABEL_12;
    }
    return (unsigned int)-1073741789;
  }
  v15 = -1073741811;
LABEL_12:
  if ( v15 >= 0 )
  {
    if ( v4 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v17 = *v4;
        v18 = v4 + 1;
        if ( v4 + 1 < v4 )
          goto LABEL_101;
        v4 = (unsigned int *)((char *)v18 + v17);
        if ( (unsigned int *)((char *)v18 + v17) < v18 )
          goto LABEL_101;
      }
      v19 = *v4;
      v20 = v4 + 1;
      if ( v4 + 1 < v4 )
      {
LABEL_101:
        v15 = -1073741675;
        goto LABEL_102;
      }
      v15 = 0;
      if ( !v19 )
        v20 = 0LL;
      if ( v19 == 4 )
      {
        v21 = *v20;
        goto LABEL_24;
      }
      return (unsigned int)-1073741789;
    }
    v15 = -1073741811;
LABEL_102:
    v21 = v59;
LABEL_24:
    if ( v15 >= 0 )
    {
      if ( v21 )
      {
        v22 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v21, 0x20534C53u);
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
      }
      else
      {
        v22 = 1;
      }
      if ( qword_14077E440 )
      {
        v23 = PoolWithTag;
        if ( v22 )
          v23 = 0LL;
        v24 = qword_14077E440(v23, v21, &v59);
      }
      else
      {
        v24 = -1073741637;
      }
      v25 = v21 + 4;
      if ( v21 >= 0xFFFFFFFC )
      {
        v26 = v59;
        v15 = -1073741675;
      }
      else
      {
        if ( v25 >= 0xFFFFFFEC || (v26 = v21 + 32, v21 + 32 < v21 + 24) )
        {
          v15 = -1073741675;
          goto LABEL_91;
        }
        v15 = 0;
      }
      if ( v15 < 0 )
        goto LABEL_91;
      if ( v26 >= 0xFFFFFFF8 )
      {
        v15 = -1073741675;
        goto LABEL_91;
      }
      v27 = (v26 + 15) & 0xFFFFFFF8;
      if ( v27 < v26 + 8 )
      {
        v28 = v59;
        v15 = -1073741675;
      }
      else
      {
        v28 = v27 + 8;
        if ( v27 + 8 < v27 )
        {
          v15 = -1073741675;
          goto LABEL_46;
        }
        v15 = 0;
      }
      if ( v15 >= 0 )
      {
        v29 = v28 + 4;
        if ( v29 < 4 || (v30 = v29 + 4, v29 + 4 < v29) || (v31 = v30 + *(_DWORD *)(a2 + 16), v31 < v30) || v31 + 4 < v31 )
          v15 = -1073741675;
        else
          v15 = v31 + 4 + *(_DWORD *)(a2 + 32) < v31 + 4 ? 0xC0000095 : 0;
      }
LABEL_46:
      if ( v15 < 0 )
        goto LABEL_91;
      if ( !a4 )
        goto LABEL_111;
      *(_DWORD *)(a4 + 4) = v26;
      v15 = 0;
      if ( v26 )
      {
        v32 = ExAllocatePoolWithTag(PagedPool, v26, 0x20534C53u);
        if ( v32 )
        {
          *(_QWORD *)(a4 + 8) = v32;
          *(_DWORD *)a4 = 0;
        }
        else
        {
          v15 = -1073741801;
        }
      }
      else
      {
        v15 = -1073741762;
      }
      if ( v15 < 0 )
        goto LABEL_91;
      v33 = v24 | 0x10000000;
      if ( &v57 )
      {
        v34 = *(_QWORD *)(a4 + 8);
        if ( !v34 )
        {
          v52 = *(_DWORD *)(a4 + 4);
          if ( v52 + 8 < v52 )
            goto LABEL_116;
          *(_DWORD *)(a4 + 4) = v52 + 8;
          ++*(_DWORD *)a4;
LABEL_59:
          v57 = v58;
          if ( &v57 )
          {
            v37 = *(_QWORD *)(a4 + 8);
            if ( !v37 )
            {
              v54 = *(_DWORD *)(a4 + 4);
              if ( v54 + 12 < v54 )
                goto LABEL_116;
              *(_DWORD *)(a4 + 4) = v54 + 12;
              ++*(_DWORD *)a4;
LABEL_69:
              if ( PoolWithTag )
              {
                if ( v21 )
                {
LABEL_71:
                  v42 = *(_QWORD *)(a4 + 8);
                  if ( !v42 )
                  {
                    if ( v25 >= 4 )
                    {
                      v55 = *(_DWORD *)(a4 + 4);
                      if ( v55 + v25 < v55 )
                        goto LABEL_116;
                      *(_DWORD *)(a4 + 4) = v55 + v25;
                      ++*(_DWORD *)a4;
LABEL_82:
                      v46 = v59;
                      if ( &v57 )
                      {
                        v47 = *(_QWORD *)(a4 + 8);
                        if ( v47 )
                        {
                          v48 = 0;
                          for ( k = *(_DWORD **)(a4 + 8); v48 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v50) )
                          {
                            v50 = *k + 4;
                            if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v50) < k )
                              goto LABEL_94;
                            ++v48;
                          }
                          if ( k + 1 >= k )
                          {
                            v15 = 0;
                            if ( (unsigned __int64)(k + 2) <= v47 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                            {
                              *k = 4;
                              k[1] = v46;
                              ++*(_DWORD *)a4;
                              goto LABEL_91;
                            }
                            goto LABEL_95;
                          }
LABEL_94:
                          v15 = -1073741675;
                          goto LABEL_91;
                        }
                        v56 = *(_DWORD *)(a4 + 4);
                        if ( v56 + 8 >= v56 )
                        {
                          *(_DWORD *)(a4 + 4) = v56 + 8;
                          ++*(_DWORD *)a4;
                          v15 = 0;
LABEL_91:
                          if ( PoolWithTag )
                            ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
                          return (unsigned int)v15;
                        }
LABEL_116:
                        *(_DWORD *)(a4 + 4) = -1;
                        goto LABEL_94;
                      }
LABEL_111:
                      v15 = -1073741811;
                      goto LABEL_91;
                    }
                    goto LABEL_132;
                  }
                  v43 = *(unsigned int **)(a4 + 8);
                  v44 = 0;
                  if ( *(_DWORD *)a4 )
                  {
                    while ( 1 )
                    {
                      v45 = *v43 + 4;
                      if ( *v43 >= 0xFFFFFFFC )
                        break;
                      if ( (unsigned int *)((char *)v43 + v45) < v43 )
                        goto LABEL_94;
                      ++v44;
                      v43 = (unsigned int *)((char *)v43 + v45);
                      if ( v44 >= *(_DWORD *)a4 )
                        goto LABEL_76;
                    }
LABEL_132:
                    v15 = -1073741675;
                    goto LABEL_81;
                  }
LABEL_76:
                  if ( v43 + 1 < v43 )
                    goto LABEL_94;
                  v15 = 0;
                  if ( (unsigned __int64)v43 + v21 + 4 <= v42 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *v43 = v21;
                    if ( PoolWithTag )
                      memmove(v43 + 1, PoolWithTag, v21);
                    ++*(_DWORD *)a4;
LABEL_81:
                    if ( v15 < 0 )
                      goto LABEL_91;
                    goto LABEL_82;
                  }
LABEL_95:
                  v15 = -1073741789;
                  goto LABEL_91;
                }
              }
              else if ( !v21 )
              {
                goto LABEL_71;
              }
              v15 = -1073741811;
              goto LABEL_81;
            }
            v38 = *(_QWORD *)(a4 + 8);
            v39 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v40 = *(_DWORD *)v38 + 4;
                if ( *(_DWORD *)v38 >= 0xFFFFFFFC )
                  break;
                if ( v38 + v40 < v38 )
                  goto LABEL_94;
                ++v39;
                v38 += v40;
                if ( v39 >= *(_DWORD *)a4 )
                  goto LABEL_65;
              }
              v15 = -1073741675;
            }
            else
            {
LABEL_65:
              if ( v38 + 4 < v38 )
                goto LABEL_94;
              v15 = 0;
              if ( v38 + 12 > v37 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_95;
              v41 = v57;
              *(_DWORD *)v38 = 8;
              *(_QWORD *)(v38 + 4) = v41;
              ++*(_DWORD *)a4;
            }
          }
          else
          {
            v15 = -1073741811;
          }
          if ( v15 < 0 )
            goto LABEL_91;
          goto LABEL_69;
        }
        v35 = *(_DWORD **)(a4 + 8);
        v36 = 0;
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v53 = *v35 + 4;
            if ( *v35 >= 0xFFFFFFFC )
              break;
            if ( (_DWORD *)((char *)v35 + v53) < v35 )
              goto LABEL_94;
            ++v36;
            v35 = (_DWORD *)((char *)v35 + v53);
            if ( v36 >= *(_DWORD *)a4 )
              goto LABEL_55;
          }
          v15 = -1073741675;
        }
        else
        {
LABEL_55:
          if ( v35 + 1 < v35 )
            goto LABEL_94;
          v15 = 0;
          if ( (unsigned __int64)(v35 + 2) > v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_95;
          *v35 = 4;
          v35[1] = v33;
          ++*(_DWORD *)a4;
        }
      }
      else
      {
        v15 = -1073741811;
      }
      if ( v15 < 0 )
        goto LABEL_91;
      goto LABEL_59;
    }
  }
  return (unsigned int)v15;
}
