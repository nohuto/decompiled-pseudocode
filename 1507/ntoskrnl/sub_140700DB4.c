/*
 * XREFs of sub_140700DB4 @ 0x140700DB4
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     StringCbLengthW @ 0x1401196B4 (StringCbLengthW.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140700DB4(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  signed int v7; // ebx
  const wchar_t *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // r8d
  size_t *v14; // rdx
  unsigned int j; // edx
  __int64 v16; // rax
  unsigned int *v17; // r8
  size_t v18; // rdx
  size_t v19; // r14
  unsigned int *v20; // rax
  __int64 v21; // r15
  unsigned int v22; // eax
  size_t v23; // r14
  PVOID PoolWithTag; // rax
  PVOID v25; // rbx
  void *v26; // r15
  unsigned int k; // ecx
  __int64 v28; // r8
  unsigned int *v29; // rdx
  unsigned int v30; // edx
  unsigned int *v31; // rcx
  int v32; // r14d
  int v33; // edx
  unsigned int v34; // ecx
  _DWORD *v35; // rax
  int v36; // r14d
  __int64 v37; // r8
  unsigned int v38; // eax
  unsigned __int64 v40; // rdx
  unsigned int m; // ecx
  unsigned int v42; // eax
  size_t v43; // xmm0_8
  size_t v44; // [rsp+28h] [rbp-8h]
  size_t pcbLength; // [rsp+78h] [rbp+48h] BYREF
  unsigned int v46; // [rsp+80h] [rbp+50h] BYREF

  v46 = a3;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(const wchar_t **)(a1 + 8);
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v9 = (unsigned int *)v8;
    for ( i = 0; i < 3; ++i )
    {
      v11 = *v9;
      v12 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_17;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_17;
    }
    v13 = *v9;
    v14 = (size_t *)(v9 + 1);
    if ( v9 + 1 < v9 )
    {
LABEL_17:
      v7 = -1073741675;
      goto LABEL_18;
    }
    v7 = 0;
    if ( !v13 )
      v14 = 0LL;
    if ( v13 != 8 )
      return (unsigned int)-1073741789;
    v44 = *v14;
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_18:
  if ( v7 >= 0 )
  {
    if ( v8 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v16 = *(unsigned int *)v8;
        v17 = (unsigned int *)(v8 + 2);
        if ( v8 + 2 < v8 )
          goto LABEL_36;
        v8 = (const wchar_t *)((char *)v17 + v16);
        if ( (unsigned int *)((char *)v17 + v16) < v17 )
          goto LABEL_36;
      }
      v18 = *(unsigned int *)v8;
      v19 = (size_t)(v8 + 2);
      if ( v8 + 2 < v8 )
      {
LABEL_36:
        v7 = -1073741675;
        goto LABEL_37;
      }
      v7 = 0;
      if ( (_DWORD)v18 )
      {
        if ( (v18 & 1) == 0 )
        {
          v21 = *(unsigned int *)v8;
          if ( !*(_WORD *)(v19 + 2 * (v18 >> 1) - 2)
            && StringCbLengthW(v8 + 2, v18, &pcbLength) >= 0
            && pcbLength + 2 == v21 )
          {
            v46 = pcbLength >> 1;
            pcbLength = v19;
            goto LABEL_37;
          }
        }
      }
      return (unsigned int)-1073741762;
    }
    v7 = -1073741811;
LABEL_37:
    if ( v7 >= 0 )
    {
      v22 = 2 * v46 + 2;
      if ( 2 * v46 == -2 )
        return (unsigned int)-1073741762;
      v23 = v22;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x20534C53u);
      v25 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, (const void *)pcbLength, v23);
      v26 = v25;
      v20 = *(unsigned int **)(a1 + 8);
      if ( v20 && *(_DWORD *)a1 > 5u )
      {
        for ( k = 0; k < 5; ++k )
        {
          v28 = *v20;
          v29 = v20 + 1;
          if ( v20 + 1 < v20 )
            goto LABEL_53;
          v20 = (unsigned int *)((char *)v29 + v28);
          if ( (unsigned int *)((char *)v29 + v28) < v29 )
            goto LABEL_53;
        }
        v30 = *v20;
        v31 = v20 + 1;
        if ( v20 + 1 < v20 )
        {
LABEL_53:
          v7 = -1073741675;
          goto LABEL_54;
        }
        v7 = 0;
        if ( !v30 )
          v31 = 0LL;
        if ( v30 == 4 )
        {
          v46 = *v31;
          goto LABEL_54;
        }
        goto LABEL_51;
      }
      v7 = -1073741811;
LABEL_54:
      if ( v7 < 0 )
        goto LABEL_75;
      if ( qword_14077E410 )
        v32 = qword_14077E410(v26, v46);
      else
        v32 = -1073700223;
      v33 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
        goto LABEL_74;
      v34 = *(_DWORD *)(a2 + 16) + 52;
      if ( v34 < *(_DWORD *)(a2 + 16) + 48 )
        goto LABEL_74;
      v7 = v34 + v33 < v34 ? 0xC0000095 : 0;
      if ( v34 + v33 < v34 )
        goto LABEL_75;
      *(_DWORD *)(a4 + 4) = 20;
      v35 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
      if ( !v35 )
      {
        v7 = -1073741801;
        goto LABEL_75;
      }
      *(_QWORD *)(a4 + 8) = v35;
      *(_DWORD *)a4 = 0;
      v36 = v32 | 0x10000000;
      if ( &v46 )
      {
        if ( v35 + 1 < v35 )
          goto LABEL_74;
        v7 = 0;
        if ( v35 + 2 > (_DWORD *)((char *)v35 + *(unsigned int *)(a4 + 4)) )
          goto LABEL_51;
        *v35 = 4;
        v35[1] = v36;
        ++*(_DWORD *)a4;
      }
      else
      {
        v7 = -1073741811;
      }
      if ( v7 < 0 )
        goto LABEL_75;
      pcbLength = v44;
      if ( !&pcbLength )
      {
        v7 = -1073741811;
LABEL_75:
        if ( v26 )
          ExFreePoolWithTag(v26, 0x20534C53u);
        return (unsigned int)v7;
      }
      v37 = *(_QWORD *)(a4 + 8);
      if ( !v37 )
      {
        v38 = *(_DWORD *)(a4 + 4);
        if ( v38 + 12 >= v38 )
        {
          *(_DWORD *)(a4 + 4) = v38 + 12;
          v7 = 0;
          ++*(_DWORD *)a4;
          goto LABEL_75;
        }
        *(_DWORD *)(a4 + 4) = -1;
        goto LABEL_74;
      }
      v40 = *(_QWORD *)(a4 + 8);
      for ( m = 0; m < *(_DWORD *)a4; v40 += v42 )
      {
        v42 = *(_DWORD *)v40 + 4;
        if ( *(_DWORD *)v40 >= 0xFFFFFFFC || v40 + v42 < v40 )
          goto LABEL_74;
        ++m;
      }
      if ( v40 + 4 >= v40 )
      {
        v7 = 0;
        if ( v40 + 12 <= v37 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          v43 = pcbLength;
          *(_DWORD *)v40 = 8;
          *(_QWORD *)(v40 + 4) = v43;
          ++*(_DWORD *)a4;
          goto LABEL_75;
        }
LABEL_51:
        v7 = -1073741789;
        goto LABEL_75;
      }
LABEL_74:
      v7 = -1073741675;
      goto LABEL_75;
    }
  }
  return (unsigned int)v7;
}
