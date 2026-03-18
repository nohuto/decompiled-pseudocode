/*
 * XREFs of sub_1406FF044 @ 0x1406FF044
 * Callers:
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     StringCbLengthW @ 0x1401196B4 (StringCbLengthW.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExQueryFastCacheAppOrigin @ 0x1406EBA8C (ExQueryFastCacheAppOrigin.c)
 */

__int64 __fastcall sub_1406FF044(__int64 a1, size_t a2, int a3, __int64 a4)
{
  int v6; // ebx
  const wchar_t *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r10
  unsigned int *v11; // r9
  unsigned int v12; // r9d
  size_t *v13; // rdx
  unsigned int j; // edx
  __int64 v15; // rax
  unsigned int *v16; // r8
  size_t v17; // rdx
  size_t v18; // r14
  _DWORD *v19; // rax
  __int64 v20; // r15
  unsigned int v21; // eax
  size_t v22; // r14
  WCHAR *PoolWithTag; // rax
  const WCHAR *v24; // rbx
  WCHAR *v25; // r12
  __int64 v26; // r8
  unsigned int v27; // eax
  unsigned __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  size_t v31; // xmm0_8
  int v32; // r11d
  __int64 v33; // r8
  unsigned int v34; // eax
  _DWORD *v35; // rdx
  unsigned int k; // ecx
  unsigned int v37; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  size_t v40; // [rsp+70h] [rbp+40h]
  size_t pcbLength; // [rsp+78h] [rbp+48h] BYREF
  int v42; // [rsp+80h] [rbp+50h] BYREF

  v42 = a3;
  pcbLength = a2;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(const wchar_t **)(a1 + 8);
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v8 = (unsigned int *)v7;
    for ( i = 0; i < 3; ++i )
    {
      v10 = *v8;
      v11 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_17;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_17;
    }
    v12 = *v8;
    v13 = (size_t *)(v8 + 1);
    if ( v8 + 1 < v8 )
    {
LABEL_17:
      v6 = -1073741675;
      goto LABEL_18;
    }
    v6 = 0;
    if ( !v12 )
      v13 = 0LL;
    if ( v12 != 8 )
      return (unsigned int)-1073741789;
    v40 = *v13;
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_18:
  if ( v6 >= 0 )
  {
    if ( v7 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v15 = *(unsigned int *)v7;
        v16 = (unsigned int *)(v7 + 2);
        if ( v7 + 2 < v7 )
          goto LABEL_37;
        v7 = (const wchar_t *)((char *)v16 + v15);
        if ( (unsigned int *)((char *)v16 + v15) < v16 )
          goto LABEL_37;
      }
      v17 = *(unsigned int *)v7;
      v18 = (size_t)(v7 + 2);
      if ( v7 + 2 < v7 )
      {
LABEL_37:
        v6 = -1073741675;
        goto LABEL_38;
      }
      v6 = 0;
      if ( (_DWORD)v17 )
      {
        if ( (v17 & 1) == 0 )
        {
          v20 = *(unsigned int *)v7;
          if ( !*(_WORD *)(v18 + 2 * (v17 >> 1) - 2)
            && StringCbLengthW(v7 + 2, v17, &pcbLength) >= 0
            && pcbLength + 2 == v20 )
          {
            v42 = pcbLength >> 1;
            pcbLength = v18;
            goto LABEL_38;
          }
        }
      }
      return (unsigned int)-1073741762;
    }
    v6 = -1073741811;
LABEL_38:
    if ( v6 >= 0 )
    {
      v21 = 2 * v42 + 2;
      if ( 2 * v42 == -2 )
        return (unsigned int)-1073741762;
      v22 = v21;
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v21, 0x20534C53u);
      v24 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, (const void *)pcbLength, v22);
      v25 = (WCHAR *)v24;
      RtlInitUnicodeString(&DestinationString, v24);
      v6 = ExQueryFastCacheAppOrigin(&DestinationString.Length, &v42);
      if ( v6 < 0 )
        goto LABEL_78;
      *(_DWORD *)(a4 + 4) = 28;
      v19 = ExAllocatePoolWithTag(PagedPool, 0x1CuLL, 0x20534C53u);
      if ( !v19 )
      {
        v6 = -1073741801;
        goto LABEL_78;
      }
      *(_QWORD *)(a4 + 8) = v19;
      *(_DWORD *)a4 = 0;
      if ( &pcbLength )
      {
        if ( v19 + 1 < v19 )
          goto LABEL_68;
        v6 = 0;
        if ( v19 + 2 > (_DWORD *)((char *)v19 + *(unsigned int *)(a4 + 4)) )
          goto LABEL_75;
        *v19 = 4;
        v19[1] = 0;
        ++*(_DWORD *)a4;
      }
      else
      {
        v6 = -1073741811;
      }
      if ( v6 < 0 )
        goto LABEL_78;
      pcbLength = v40;
      if ( !&pcbLength )
      {
        v6 = -1073741811;
        goto LABEL_62;
      }
      v26 = *(_QWORD *)(a4 + 8);
      if ( !v26 )
      {
        v27 = *(_DWORD *)(a4 + 4);
        if ( v27 + 12 < v27 )
        {
LABEL_67:
          *(_DWORD *)(a4 + 4) = -1;
          goto LABEL_68;
        }
        *(_DWORD *)(a4 + 4) = v27 + 12;
        ++*(_DWORD *)a4;
        goto LABEL_63;
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
            goto LABEL_68;
          ++v29;
          v28 += v30;
          if ( v29 >= *(_DWORD *)a4 )
            goto LABEL_57;
        }
        v6 = -1073741675;
LABEL_62:
        if ( v6 < 0 )
          goto LABEL_78;
LABEL_63:
        v32 = v42;
        if ( !&v42 )
        {
          v6 = -1073741811;
          goto LABEL_78;
        }
        v33 = *(_QWORD *)(a4 + 8);
        if ( !v33 )
        {
          v34 = *(_DWORD *)(a4 + 4);
          if ( v34 + 8 >= v34 )
          {
            *(_DWORD *)(a4 + 4) = v34 + 8;
            v6 = 0;
            ++*(_DWORD *)a4;
            goto LABEL_78;
          }
          goto LABEL_67;
        }
        v35 = *(_DWORD **)(a4 + 8);
        for ( k = 0; k < *(_DWORD *)a4; v35 = (_DWORD *)((char *)v35 + v37) )
        {
          v37 = *v35 + 4;
          if ( *v35 >= 0xFFFFFFFC || (_DWORD *)((char *)v35 + v37) < v35 )
            goto LABEL_68;
          ++k;
        }
        if ( v35 + 1 >= v35 )
        {
          v6 = 0;
          if ( (unsigned __int64)(v35 + 2) > v33 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_75;
          *v35 = 4;
          v35[1] = v32;
          ++*(_DWORD *)a4;
LABEL_78:
          if ( v25 )
            ExFreePoolWithTag(v25, 0x20534C53u);
          return (unsigned int)v6;
        }
LABEL_68:
        v6 = -1073741675;
        goto LABEL_78;
      }
LABEL_57:
      if ( v28 + 4 < v28 )
        goto LABEL_68;
      v6 = 0;
      if ( v28 + 12 <= v26 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        v31 = pcbLength;
        *(_DWORD *)v28 = 8;
        *(_QWORD *)(v28 + 4) = v31;
        ++*(_DWORD *)a4;
        goto LABEL_62;
      }
LABEL_75:
      v6 = -1073741789;
      goto LABEL_78;
    }
  }
  return (unsigned int)v6;
}
