/*
 * XREFs of sub_140232D04 @ 0x140232D04
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140232D04(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
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
  unsigned int v35; // eax
  _DWORD *v36; // rdx
  unsigned int v37; // ecx
  unsigned int v38; // eax
  __int64 v39; // r8
  unsigned int v40; // eax
  unsigned __int64 v41; // rdx
  unsigned int v42; // ecx
  unsigned int v43; // eax
  __int64 v44; // xmm0_8
  unsigned int v45; // r11d
  __int64 v46; // r8
  unsigned int v47; // eax
  __int64 v48; // r8
  unsigned int v49; // eax
  unsigned int *v50; // rdx
  unsigned int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  _DWORD *k; // rdx
  unsigned int v55; // eax
  __int64 v57; // [rsp+20h] [rbp-10h] BYREF
  __int64 v58; // [rsp+28h] [rbp-8h]
  unsigned int v59; // [rsp+70h] [rbp+40h] BYREF

  v59 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v59 = 0;
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
      v58 = *v15;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v9 = -1073741811;
LABEL_15:
  if ( v9 >= 0 )
  {
    if ( v4 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v17 = *v4;
        v18 = v4 + 1;
        if ( v4 + 1 < v4 )
          goto LABEL_28;
        v4 = (unsigned int *)((char *)v18 + v17);
        if ( (unsigned int *)((char *)v18 + v17) < v18 )
          goto LABEL_28;
      }
      v19 = *v4;
      v20 = v4 + 1;
      if ( v4 + 1 < v4 )
      {
LABEL_28:
        v9 = -1073741675;
        goto LABEL_29;
      }
      v9 = 0;
      if ( !v19 )
        v20 = 0LL;
      if ( v19 == 4 )
      {
        v21 = *v20;
        goto LABEL_30;
      }
      return (unsigned int)-1073741789;
    }
    v9 = -1073741811;
LABEL_29:
    v21 = v59;
LABEL_30:
    if ( v9 >= 0 )
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
      if ( qword_140747428 )
      {
        v23 = PoolWithTag;
        if ( v22 )
          v23 = 0LL;
        v24 = qword_140747428(v23, v21, &v59);
      }
      else
      {
        v24 = -1073741637;
      }
      v25 = v21 + 4;
      if ( v21 >= 0xFFFFFFFC )
      {
        v26 = v59;
        v9 = -1073741675;
      }
      else
      {
        if ( v25 >= 0xFFFFFFEC || (v26 = v21 + 32, v21 + 32 < v21 + 24) )
        {
          v9 = -1073741675;
          goto LABEL_131;
        }
        v9 = 0;
      }
      if ( v9 >= 0 )
      {
        if ( v26 < 0xFFFFFFF8 )
        {
          v27 = (v26 + 15) & 0xFFFFFFF8;
          if ( v27 >= v26 + 8 )
          {
            v28 = v27 + 8;
            if ( v27 + 8 < v27 )
            {
              v9 = -1073741675;
              goto LABEL_58;
            }
            v9 = 0;
          }
          else
          {
            v28 = v59;
            v9 = -1073741675;
          }
          if ( v9 >= 0 )
          {
            v29 = v28 + 4;
            if ( v29 < 4
              || (v30 = v29 + 4, v29 + 4 < v29)
              || (v31 = v30 + *(_DWORD *)(a2 + 16), v31 < v30)
              || v31 + 4 < v31 )
            {
              v9 = -1073741675;
            }
            else
            {
              v9 = v31 + 4 + *(_DWORD *)(a2 + 32) < v31 + 4 ? 0xC0000095 : 0;
            }
          }
LABEL_58:
          if ( v9 < 0 )
            goto LABEL_131;
          if ( !a4 )
            goto LABEL_60;
          *(_DWORD *)(a4 + 4) = v26;
          v9 = 0;
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
              v9 = -1073741801;
            }
          }
          else
          {
            v9 = -1073741762;
          }
          if ( v9 < 0 )
            goto LABEL_131;
          v33 = v24 | 0x10000000;
          if ( &v57 )
          {
            v34 = *(_QWORD *)(a4 + 8);
            if ( !v34 )
            {
              v35 = *(_DWORD *)(a4 + 4);
              if ( v35 + 8 < v35 )
                goto LABEL_73;
              *(_DWORD *)(a4 + 4) = v35 + 8;
              ++*(_DWORD *)a4;
LABEL_86:
              v57 = v58;
              if ( &v57 )
              {
                v39 = *(_QWORD *)(a4 + 8);
                if ( !v39 )
                {
                  v40 = *(_DWORD *)(a4 + 4);
                  if ( v40 + 12 < v40 )
                    goto LABEL_73;
                  *(_DWORD *)(a4 + 4) = v40 + 12;
                  ++*(_DWORD *)a4;
LABEL_100:
                  if ( PoolWithTag )
                  {
                    if ( !v21 )
                      goto LABEL_102;
                  }
                  else if ( v21 )
                  {
LABEL_102:
                    v9 = -1073741811;
                    goto LABEL_103;
                  }
                  v48 = *(_QWORD *)(a4 + 8);
                  if ( v48 )
                  {
                    v50 = *(unsigned int **)(a4 + 8);
                    v51 = 0;
                    if ( !*(_DWORD *)a4 )
                    {
LABEL_118:
                      if ( v50 + 1 < v50 )
                        goto LABEL_74;
                      v9 = 0;
                      if ( (unsigned __int64)v50 + v21 + 4 > v48 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        goto LABEL_81;
                      *v50 = v21;
                      if ( PoolWithTag )
                        memmove(v50 + 1, PoolWithTag, v21);
                      ++*(_DWORD *)a4;
                      goto LABEL_103;
                    }
                    while ( 1 )
                    {
                      v52 = *v50 + 4;
                      if ( *v50 >= 0xFFFFFFFC )
                        break;
                      if ( (unsigned int *)((char *)v50 + v52) < v50 )
                        goto LABEL_74;
                      ++v51;
                      v50 = (unsigned int *)((char *)v50 + v52);
                      if ( v51 >= *(_DWORD *)a4 )
                        goto LABEL_118;
                    }
                  }
                  else if ( v25 >= 4 )
                  {
                    v49 = *(_DWORD *)(a4 + 4);
                    if ( v49 + v25 >= v49 )
                    {
                      *(_DWORD *)(a4 + 4) = v49 + v25;
                      ++*(_DWORD *)a4;
                      goto LABEL_104;
                    }
LABEL_73:
                    *(_DWORD *)(a4 + 4) = -1;
                    goto LABEL_74;
                  }
                  v9 = -1073741675;
LABEL_103:
                  if ( v9 < 0 )
                    goto LABEL_131;
LABEL_104:
                  v45 = v59;
                  if ( !&v57 )
                  {
LABEL_60:
                    v9 = -1073741811;
                    goto LABEL_131;
                  }
                  v46 = *(_QWORD *)(a4 + 8);
                  if ( !v46 )
                  {
                    v47 = *(_DWORD *)(a4 + 4);
                    if ( v47 + 8 >= v47 )
                    {
                      *(_DWORD *)(a4 + 4) = v47 + 8;
                      ++*(_DWORD *)a4;
                      v9 = 0;
                      goto LABEL_131;
                    }
                    goto LABEL_73;
                  }
                  v53 = 0;
                  for ( k = *(_DWORD **)(a4 + 8); v53 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v55) )
                  {
                    v55 = *k + 4;
                    if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v55) < k )
                      goto LABEL_74;
                    ++v53;
                  }
                  if ( k + 1 < k )
                  {
LABEL_74:
                    v9 = -1073741675;
                    goto LABEL_131;
                  }
                  v9 = 0;
                  if ( (unsigned __int64)(k + 2) <= v46 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *k = 4;
                    k[1] = v45;
                    ++*(_DWORD *)a4;
                    goto LABEL_131;
                  }
LABEL_81:
                  v9 = -1073741789;
                  goto LABEL_131;
                }
                v41 = *(_QWORD *)(a4 + 8);
                v42 = 0;
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v43 = *(_DWORD *)v41 + 4;
                    if ( *(_DWORD *)v41 >= 0xFFFFFFFC )
                      break;
                    if ( v41 + v43 < v41 )
                      goto LABEL_74;
                    ++v42;
                    v41 += v43;
                    if ( v42 >= *(_DWORD *)a4 )
                      goto LABEL_94;
                  }
                  v9 = -1073741675;
                }
                else
                {
LABEL_94:
                  if ( v41 + 4 < v41 )
                    goto LABEL_74;
                  v9 = 0;
                  if ( v41 + 12 > v39 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_81;
                  v44 = v57;
                  *(_DWORD *)v41 = 8;
                  *(_QWORD *)(v41 + 4) = v44;
                  ++*(_DWORD *)a4;
                }
              }
              else
              {
                v9 = -1073741811;
              }
              if ( v9 < 0 )
                goto LABEL_131;
              goto LABEL_100;
            }
            v36 = *(_DWORD **)(a4 + 8);
            v37 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v38 = *v36 + 4;
                if ( *v36 >= 0xFFFFFFFC )
                  break;
                if ( (_DWORD *)((char *)v36 + v38) < v36 )
                  goto LABEL_74;
                ++v37;
                v36 = (_DWORD *)((char *)v36 + v38);
                if ( v37 >= *(_DWORD *)a4 )
                  goto LABEL_79;
              }
              v9 = -1073741675;
            }
            else
            {
LABEL_79:
              if ( v36 + 1 < v36 )
                goto LABEL_74;
              v9 = 0;
              if ( (unsigned __int64)(v36 + 2) > v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_81;
              *v36 = 4;
              v36[1] = v33;
              ++*(_DWORD *)a4;
            }
          }
          else
          {
            v9 = -1073741811;
          }
          if ( v9 < 0 )
            goto LABEL_131;
          goto LABEL_86;
        }
        v9 = -1073741675;
      }
LABEL_131:
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
    }
  }
  return (unsigned int)v9;
}
