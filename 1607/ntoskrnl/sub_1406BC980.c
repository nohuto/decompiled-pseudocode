/*
 * XREFs of sub_1406BC980 @ 0x1406BC980
 * Callers:
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1406BC980(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rax
  signed int v7; // ebx
  unsigned int i; // ecx
  __int64 v9; // r8
  unsigned int *v10; // rdx
  unsigned int v11; // edx
  __int64 *v12; // rcx
  int v13; // esi
  int v14; // edx
  unsigned int v15; // ecx
  PVOID PoolWithTag; // rax
  int v17; // esi
  __int64 v18; // r8
  unsigned int v19; // eax
  _DWORD *v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // r8
  unsigned int v25; // eax
  unsigned __int64 v26; // rdx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  __int64 v29; // xmm0_8
  _BYTE v30[32]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v31; // [rsp+20h] [rbp-38h]

  v4 = *(unsigned int **)(a1 + 8);
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; i < 3; ++i )
    {
      v9 = *v4;
      v10 = v4 + 1;
      if ( v4 + 1 < v4 )
        goto LABEL_14;
      v4 = (unsigned int *)((char *)v10 + v9);
      if ( (unsigned int *)((char *)v10 + v9) < v10 )
        goto LABEL_14;
    }
    v11 = *v4;
    v12 = (__int64 *)(v4 + 1);
    if ( v4 + 1 < v4 )
    {
LABEL_14:
      v7 = -1073741675;
      goto LABEL_15;
    }
    v7 = 0;
    if ( !v11 )
      v12 = 0LL;
    if ( v11 == 8 )
    {
      v31 = *v12;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v7 = -1073741811;
LABEL_15:
  if ( v7 >= 0 )
  {
    v13 = qword_140747370 ? qword_140747370() : -1073741637;
    v7 = v13;
    if ( v13 >= 0 )
    {
      v14 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
        return (unsigned int)-1073741675;
      v15 = *(_DWORD *)(a2 + 16) + 52;
      if ( v15 < *(_DWORD *)(a2 + 16) + 48 )
        return (unsigned int)-1073741675;
      v7 = v15 + v14 < v15 ? 0xC0000095 : 0;
      if ( v15 + v14 < v15 )
        return (unsigned int)v7;
      if ( !a4 )
        return (unsigned int)-1073741811;
      *(_DWORD *)(a4 + 4) = 20;
      v7 = 0;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
      if ( PoolWithTag )
      {
        *(_QWORD *)(a4 + 8) = PoolWithTag;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v7 = -1073741801;
      }
      if ( v7 >= 0 )
      {
        v17 = v13 | 0x10000000;
        if ( v30 == (_BYTE *)-112LL )
        {
          v7 = -1073741811;
        }
        else
        {
          v18 = *(_QWORD *)(a4 + 8);
          if ( !v18 )
          {
            v19 = *(_DWORD *)(a4 + 4);
            if ( v19 + 8 < v19 )
              goto LABEL_33;
            *(_DWORD *)(a4 + 4) = v19 + 8;
            ++*(_DWORD *)a4;
LABEL_46:
            if ( v30 == (_BYTE *)-32LL )
              return (unsigned int)-1073741811;
            v24 = *(_QWORD *)(a4 + 8);
            if ( v24 )
            {
              v26 = *(_QWORD *)(a4 + 8);
              v27 = 0;
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v28 = *(_DWORD *)v26 + 4;
                  if ( *(_DWORD *)v26 >= 0xFFFFFFFC || v26 + v28 < v26 )
                    break;
                  ++v27;
                  v26 += v28;
                  if ( v27 >= *(_DWORD *)a4 )
                    goto LABEL_54;
                }
              }
              else
              {
LABEL_54:
                if ( v26 + 4 >= v26 )
                {
                  v7 = 0;
                  if ( v26 + 12 <= v24 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    v29 = v31;
                    *(_DWORD *)v26 = 8;
                    *(_QWORD *)(v26 + 4) = v29;
                    ++*(_DWORD *)a4;
                    return (unsigned int)v7;
                  }
                  return (unsigned int)-1073741789;
                }
              }
              return (unsigned int)-1073741675;
            }
            v25 = *(_DWORD *)(a4 + 4);
            if ( v25 + 12 >= v25 )
            {
              *(_DWORD *)(a4 + 4) = v25 + 12;
              v7 = 0;
              ++*(_DWORD *)a4;
              return (unsigned int)v7;
            }
LABEL_33:
            *(_DWORD *)(a4 + 4) = -1;
            return (unsigned int)-1073741675;
          }
          v21 = *(_DWORD **)(a4 + 8);
          v22 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v23 = *v21 + 4;
              if ( *v21 >= 0xFFFFFFFC )
                break;
              if ( (_DWORD *)((char *)v21 + v23) < v21 )
                return (unsigned int)-1073741675;
              ++v22;
              v21 = (_DWORD *)((char *)v21 + v23);
              if ( v22 >= *(_DWORD *)a4 )
                goto LABEL_40;
            }
            v7 = -1073741675;
          }
          else
          {
LABEL_40:
            if ( v21 + 1 < v21 )
              return (unsigned int)-1073741675;
            v7 = 0;
            if ( (unsigned __int64)(v21 + 2) > v18 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              return (unsigned int)-1073741789;
            *v21 = 4;
            v21[1] = v17;
            ++*(_DWORD *)a4;
          }
        }
        if ( v7 < 0 )
          return (unsigned int)v7;
        goto LABEL_46;
      }
    }
  }
  return (unsigned int)v7;
}
