/*
 * XREFs of sub_140511984 @ 0x140511984
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     StringCbLengthW @ 0x1401196B4 (StringCbLengthW.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140511984(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  const wchar_t *v6; // rcx
  unsigned int *v7; // rax
  unsigned int k; // edx
  __int64 v9; // r10
  unsigned int *v10; // r9
  unsigned int v11; // r9d
  size_t *v12; // rdx
  int v13; // ebx
  unsigned int i; // edx
  __int64 v15; // rax
  unsigned int *v16; // r8
  size_t v17; // rdx
  size_t v18; // r14
  __int64 v19; // r15
  unsigned int v20; // r14d
  PVOID PoolWithTag; // rax
  PVOID v22; // rbx
  void *v23; // r12
  int v24; // r14d
  _DWORD *v25; // rax
  int v26; // r14d
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  size_t v31; // xmm0_8
  int v32; // r11d
  __int64 v33; // r8
  _DWORD *v34; // rdx
  unsigned int j; // ecx
  unsigned int v36; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  size_t v40; // [rsp+20h] [rbp-10h]
  size_t pcbLength; // [rsp+70h] [rbp+40h] BYREF
  __int64 v42; // [rsp+78h] [rbp+48h] BYREF
  int v43; // [rsp+80h] [rbp+50h] BYREF

  v43 = a3;
  v42 = a2;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  v6 = *(const wchar_t **)(a1 + 8);
  if ( !v6 || *(_DWORD *)a1 <= 3u )
  {
    v13 = -1073741811;
LABEL_14:
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( v6 && *(_DWORD *)a1 > 4u )
    {
      for ( i = 0; i < 4; ++i )
      {
        v15 = *(unsigned int *)v6;
        v16 = (unsigned int *)(v6 + 2);
        if ( v6 + 2 < v6 )
          goto LABEL_70;
        v6 = (const wchar_t *)((char *)v16 + v15);
        if ( (unsigned int *)((char *)v16 + v15) < v16 )
          goto LABEL_70;
      }
      v17 = *(unsigned int *)v6;
      v18 = (size_t)(v6 + 2);
      if ( v6 + 2 < v6 )
      {
LABEL_70:
        v13 = -1073741675;
        goto LABEL_28;
      }
      v13 = 0;
      if ( (_DWORD)v17 )
      {
        if ( (v17 & 1) == 0 )
        {
          v19 = (unsigned int)v17;
          if ( !*(_WORD *)(v18 + 2 * ((unsigned __int64)(unsigned int)v17 >> 1) - 2)
            && StringCbLengthW(v6 + 2, v17, &pcbLength) >= 0
            && pcbLength + 2 == v19 )
          {
            v43 = pcbLength >> 1;
            pcbLength = v18;
            goto LABEL_28;
          }
        }
      }
      return (unsigned int)-1073741762;
    }
    v13 = -1073741811;
LABEL_28:
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( 2 * v43 == -2 )
      return (unsigned int)-1073741762;
    v20 = 2 * v43 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x20534C53u);
    v22 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    memmove(PoolWithTag, (const void *)pcbLength, v20);
    v23 = v22;
    if ( qword_14077E428 )
      v24 = qword_14077E428(v22, &v42);
    else
      v24 = -1073700223;
    *(_DWORD *)(a4 + 4) = 28;
    v25 = ExAllocatePoolWithTag(PagedPool, 0x1CuLL, 0x20534C53u);
    if ( !v25 )
    {
      v13 = -1073741801;
      goto LABEL_58;
    }
    *(_QWORD *)(a4 + 8) = v25;
    *(_DWORD *)a4 = 0;
    v26 = v24 | 0x10000000;
    if ( &v43 )
    {
      if ( v25 + 1 < v25 )
        goto LABEL_61;
      v13 = 0;
      if ( v25 + 2 > (_DWORD *)((char *)v25 + *(unsigned int *)(a4 + 4)) )
        goto LABEL_62;
      *v25 = 4;
      v25[1] = v26;
      ++*(_DWORD *)a4;
    }
    else
    {
      v13 = -1073741811;
    }
    if ( v13 < 0 )
      goto LABEL_58;
    pcbLength = v40;
    if ( !&pcbLength )
    {
      v13 = -1073741811;
      goto LABEL_48;
    }
    v27 = *(_QWORD *)(a4 + 8);
    if ( !v27 )
    {
      v38 = *(_DWORD *)(a4 + 4);
      if ( v38 + 12 < v38 )
        goto LABEL_81;
      *(_DWORD *)(a4 + 4) = v38 + 12;
      ++*(_DWORD *)a4;
LABEL_49:
      v32 = v42;
      if ( !&v43 )
      {
        v13 = -1073741811;
        goto LABEL_58;
      }
      v33 = *(_QWORD *)(a4 + 8);
      if ( v33 )
      {
        v34 = *(_DWORD **)(a4 + 8);
        for ( j = 0; j < *(_DWORD *)a4; v34 = (_DWORD *)((char *)v34 + v36) )
        {
          v36 = *v34 + 4;
          if ( *v34 >= 0xFFFFFFFC || (_DWORD *)((char *)v34 + v36) < v34 )
            goto LABEL_61;
          ++j;
        }
        if ( v34 + 1 >= v34 )
        {
          v13 = 0;
          if ( (unsigned __int64)(v34 + 2) <= v33 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *v34 = 4;
            v34[1] = v32;
            ++*(_DWORD *)a4;
            goto LABEL_58;
          }
          goto LABEL_62;
        }
LABEL_61:
        v13 = -1073741675;
        goto LABEL_58;
      }
      v39 = *(_DWORD *)(a4 + 4);
      if ( v39 + 8 >= v39 )
      {
        *(_DWORD *)(a4 + 4) = v39 + 8;
        v13 = 0;
        ++*(_DWORD *)a4;
LABEL_58:
        if ( v23 )
          ExFreePoolWithTag(v23, 0x20534C53u);
        return (unsigned int)v13;
      }
LABEL_81:
      *(_DWORD *)(a4 + 4) = -1;
      goto LABEL_61;
    }
    v28 = *(_QWORD *)(a4 + 8);
    v29 = 0;
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v30 = *(_DWORD *)v28 + 4;
        if ( *(_DWORD *)v28 >= 0xFFFFFFFC )
          break;
        if ( v28 + v30 < v28 )
          goto LABEL_61;
        ++v29;
        v28 += v30;
        if ( v29 >= *(_DWORD *)a4 )
          goto LABEL_45;
      }
      v13 = -1073741675;
LABEL_48:
      if ( v13 < 0 )
        goto LABEL_58;
      goto LABEL_49;
    }
LABEL_45:
    if ( v28 + 4 < v28 )
      goto LABEL_61;
    v13 = 0;
    if ( v28 + 12 <= v27 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      v31 = pcbLength;
      *(_DWORD *)v28 = 8;
      *(_QWORD *)(v28 + 4) = v31;
      ++*(_DWORD *)a4;
      goto LABEL_48;
    }
LABEL_62:
    v13 = -1073741789;
    goto LABEL_58;
  }
  v7 = (unsigned int *)v6;
  for ( k = 0; k < 3; ++k )
  {
    v9 = *v7;
    v10 = v7 + 1;
    if ( v7 + 1 < v7 )
      goto LABEL_67;
    v7 = (unsigned int *)((char *)v10 + v9);
    if ( (unsigned int *)((char *)v10 + v9) < v10 )
      goto LABEL_67;
  }
  v11 = *v7;
  v12 = (size_t *)(v7 + 1);
  if ( v7 + 1 < v7 )
  {
LABEL_67:
    v13 = -1073741675;
    goto LABEL_14;
  }
  v13 = 0;
  if ( !v11 )
    v12 = 0LL;
  if ( v11 == 8 )
  {
    v40 = *v12;
    goto LABEL_14;
  }
  return (unsigned int)-1073741789;
}
