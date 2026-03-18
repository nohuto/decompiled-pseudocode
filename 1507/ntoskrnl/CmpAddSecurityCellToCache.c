/*
 * XREFs of CmpAddSecurityCellToCache @ 0x140447E14
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x140445994 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     CmpInsertSecurityCellList @ 0x1405554C0 (CmpInsertSecurityCellList.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpSecConvKey @ 0x140449C44 (CmpSecConvKey.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404CC7A0 (CmpFindSecurityCellCacheIndex.c)
 */

__int64 __fastcall CmpAddSecurityCellToCache(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v5; // ebp
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // eax
  char *v11; // rax
  char *v12; // r14
  int v13; // ecx
  int v14; // eax
  char v15; // r8
  char *v16; // rax
  __int64 v17; // rcx
  char **v18; // rdx
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rcx
  void *v23; // rbx
  unsigned int v24; // eax
  PVOID PoolWithTag; // rax
  unsigned int v26[10]; // [rsp+20h] [rbp-28h] BYREF
  int v27; // [rsp+68h] [rbp+20h] BYREF
  int v28; // [rsp+6Ch] [rbp+24h]

  v28 = HIDWORD(a4);
  v27 = -1;
  v5 = a2;
  if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(a1, a2, v26) == 1 )
    return 0LL;
  v7 = *(_DWORD *)(a1 + 3044);
  if ( *(_DWORD *)(a1 + 3040) == v7 )
  {
    v23 = *(void **)(a1 + 3056);
    if ( a3 == 1 )
      v24 = v7 + 256;
    else
      v24 = v7 + 16;
    *(_DWORD *)(a1 + 3044) = v24;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v24, 0x63534D43u);
    *(_QWORD *)(a1 + 3056) = PoolWithTag;
    if ( !PoolWithTag )
    {
      *(_DWORD *)(a1 + 3044) = *(_DWORD *)(a1 + 3040);
      *(_QWORD *)(a1 + 3056) = v23;
      return 3221225626LL;
    }
    memmove(PoolWithTag, v23, 16LL * *(unsigned int *)(a1 + 3040));
    if ( v23 )
      ExFreePoolWithTag(v23, 0x63534D43u);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, v5, &v27);
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_DWORD *)(v8 + 16) + 32;
    if ( v10 > 0x20 )
    {
      v11 = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x63534D43u);
      v12 = v11;
      if ( v11 )
      {
        memmove(v11 + 32, (const void *)(v9 + 20), *(unsigned int *)(v9 + 16));
        *(_DWORD *)v12 = v5;
        v13 = *(_DWORD *)(v9 + 16);
        *((_DWORD *)v12 + 7) = 0;
        *((_DWORD *)v12 + 6) = v13;
        v14 = CmpSecConvKey(*(unsigned int *)(v9 + 16), v9 + 20);
        *((_DWORD *)v12 + 1) = v14;
        v15 = v14;
        v16 = v12 + 8;
        v17 = 16LL * (v15 & 0x3F) + a1 + 3064;
        v18 = *(char ***)(v17 + 8);
        *((_QWORD *)v12 + 1) = v17;
        *((_QWORD *)v12 + 2) = v18;
        if ( *v18 != (char *)v17 )
          __fastfail(3u);
        v19 = v26[0];
        *v18 = v16;
        *(_QWORD *)(v17 + 8) = v16;
        v20 = *(_DWORD *)(a1 + 3040);
        if ( (unsigned int)v19 < v20 )
          memmove(
            (void *)(*(_QWORD *)(a1 + 3056) + 16LL * (unsigned int)(v19 + 1)),
            (const void *)(*(_QWORD *)(a1 + 3056) + 16LL * (unsigned int)v19),
            16LL * (v20 - (unsigned int)v19));
        v21 = 2 * v19;
        *(_DWORD *)(*(_QWORD *)(a1 + 3056) + 8 * v21) = v5;
        *(_QWORD *)(*(_QWORD *)(a1 + 3056) + 8 * v21 + 8) = v12;
        ++*(_DWORD *)(a1 + 3040);
        (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v27);
        return 0LL;
      }
    }
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v27);
  }
  return 3221225626LL;
}
