/*
 * XREFs of RaInitializeTagList @ 0x1C005A1EC
 * Callers:
 *     RaidUnitAllocateResources @ 0x1C00147A8 (RaidUnitAllocateResources.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 */

__int64 __fastcall RaInitializeTagList(__int64 a1, unsigned int a2, __int64 a3)
{
  PVOID Pool; // rax
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  __int64 v9; // r15
  PVOID v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // r15
  unsigned int v14; // eax
  __int64 v15; // rcx

  Pool = RaidAllocatePool(NonPagedPoolNxCacheAligned, 16LL * a2, 0x4D546152u, a3);
  v7 = 0;
  *(_QWORD *)(a1 + 64) = Pool;
  if ( !Pool )
    return 3221225495LL;
  v8 = KeQueryHighestNodeNumber() + 1;
  v9 = v8;
  v10 = RaidAllocatePool(NonPagedPoolNxCacheAligned, (unsigned __int64)v8 << 6, 0x4D546152u, a3);
  *(_QWORD *)a1 = v10;
  if ( !v10 )
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0x4D546152u);
    *(_QWORD *)(a1 + 64) = 0LL;
    return 3221225495LL;
  }
  *(_DWORD *)(a1 + 72) = a2 / v8;
  if ( v8 )
  {
    v11 = 0LL;
    do
    {
      InitializeSListHead((PSLIST_HEADER)(v11 + *(_QWORD *)a1));
      v11 += 64LL;
      --v9;
    }
    while ( v9 );
  }
  if ( a2 )
  {
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + v12 + 8) = v7;
      v14 = v7 / *(_DWORD *)(a1 + 72);
      v15 = v14;
      if ( v14 >= v8 )
        v15 = v8 - 1;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)a1 + (v15 << 6)),
        (PSLIST_ENTRY)(v13 + *(_QWORD *)(a1 + 64)));
      ++v7;
      v13 += 16LL;
      v12 += 16LL;
    }
    while ( v7 < a2 );
  }
  return 0LL;
}
