/*
 * XREFs of CmpAddSecurityCellToCache @ 0x1403FA268
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1403F7AE8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     CmpInsertSecurityCellList @ 0x1404C84F8 (CmpInsertSecurityCellList.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpSecConvKey @ 0x1403FC40C (CmpSecConvKey.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FCE20 (CmpFindSecurityCellCacheIndex.c)
 */

__int64 CmpAddSecurityCellToCache(__int64 a1, __int64 a2, char a3, ...)
{
  unsigned int v4; // ebp
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int v9; // eax
  char *v10; // rax
  char *v11; // r14
  int v12; // eax
  __int64 v13; // r8
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 **v16; // rdx
  __int64 v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // rcx
  void *v21; // rbx
  unsigned int v22; // eax
  PVOID PoolWithTag; // rax
  _DWORD v24[10]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v25 = va_arg(va1, _QWORD);
  v24[0] = -1;
  v24[1] = 0;
  v4 = a2;
  if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(a1, a2, (__int64 *)va) == 1 )
    return 0LL;
  v6 = *(_DWORD *)(a1 + 3044);
  if ( *(_DWORD *)(a1 + 3040) == v6 )
  {
    v21 = *(void **)(a1 + 3056);
    if ( a3 == 1 )
      v22 = v6 + 256;
    else
      v22 = v6 + 16;
    *(_DWORD *)(a1 + 3044) = v22;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v22, 0x63534D43u);
    *(_QWORD *)(a1 + 3056) = PoolWithTag;
    if ( !PoolWithTag )
    {
      *(_DWORD *)(a1 + 3044) = *(_DWORD *)(a1 + 3040);
      *(_QWORD *)(a1 + 3056) = v21;
      return 3221225626LL;
    }
    memmove(PoolWithTag, v21, 16LL * *(unsigned int *)(a1 + 3040));
    if ( v21 )
      ExFreePoolWithTag(v21, 0x63534D43u);
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, v4, v24);
  v8 = v7;
  if ( v7 )
  {
    v9 = *(_DWORD *)(v7 + 16) + 32;
    if ( v9 > 0x20 )
    {
      v10 = (char *)ExAllocatePoolWithTag(PagedPool, v9, 0x63534D43u);
      v11 = v10;
      if ( v10 )
      {
        memmove(v10 + 32, (const void *)(v8 + 20), *(unsigned int *)(v8 + 16));
        *(_DWORD *)v11 = v4;
        *((_DWORD *)v11 + 6) = *(_DWORD *)(v8 + 16);
        *((_DWORD *)v11 + 7) = 0;
        v12 = CmpSecConvKey(*(unsigned int *)(v8 + 16), v8 + 20);
        *((_DWORD *)v11 + 1) = v12;
        v13 = 16LL * (v12 & 0x3F);
        v14 = (__int64 *)(v11 + 8);
        v15 = v13 + a1 + 3064;
        v16 = *(__int64 ***)(v15 + 8);
        if ( *v16 != (__int64 *)v15 )
          __fastfail(3u);
        v17 = (unsigned int)v25;
        *v14 = v15;
        *((_QWORD *)v11 + 2) = v16;
        *v16 = v14;
        *(_QWORD *)(v15 + 8) = v14;
        v18 = *(_DWORD *)(a1 + 3040);
        if ( (unsigned int)v17 < v18 )
          memmove(
            (void *)(*(_QWORD *)(a1 + 3056) + 16LL * (unsigned int)(v17 + 1)),
            (const void *)(*(_QWORD *)(a1 + 3056) + 16LL * (unsigned int)v17),
            16LL * (v18 - (unsigned int)v17));
        v19 = 2 * v17;
        *(_DWORD *)(*(_QWORD *)(a1 + 3056) + 8 * v19) = v4;
        *(_QWORD *)(*(_QWORD *)(a1 + 3056) + 8 * v19 + 8) = v11;
        ++*(_DWORD *)(a1 + 3040);
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v24);
        return 0LL;
      }
    }
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v24);
  }
  return 3221225626LL;
}
