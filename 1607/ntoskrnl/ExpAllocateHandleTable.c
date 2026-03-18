/*
 * XREFs of ExpAllocateHandleTable @ 0x1404C1378
 * Callers:
 *     ExDupHandleTable @ 0x14045E7E0 (ExDupHandleTable.c)
 *     ExCreateHandleTable @ 0x1404C11BC (ExCreateHandleTable.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x140027B7C (PsReturnProcessPagedPoolQuota.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpInsertLowLevelTableIntoFreeList @ 0x1404C1484 (ExpInsertLowLevelTableIntoFreeList.c)
 *     ExpAllocateLowLevelTable @ 0x1404C15C8 (ExpAllocateLowLevelTable.c)
 *     PsChargeProcessPagedPoolQuota @ 0x1404C1658 (PsChargeProcessPagedPoolQuota.c)
 */

_QWORD *__fastcall ExpAllocateHandleTable(ULONG_PTR a1, char a2)
{
  SIZE_T v4; // rsi
  _QWORD *PoolWithTag; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 LowLevelTable; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  _QWORD *result; // rax

  v4 = (unsigned int)((dword_140757700 + 1) << 6);
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, v4, 0x6274624Fu);
  if ( !PoolWithTag )
    return 0LL;
  if ( a1 && (int)PsChargeProcessPagedPoolQuota(a1, 128LL) < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6274624Fu);
    return 0LL;
  }
  memset(PoolWithTag, 0, v4);
  PoolWithTag[2] = a1;
  v6 = (unsigned int)dword_140757700;
  *((_DWORD *)PoolWithTag + 10) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
  if ( (_DWORD)v6 )
  {
    v7 = PoolWithTag + 8;
    do
    {
      *v7 = 0LL;
      v7 += 8;
      --v6;
    }
    while ( v6 );
  }
  LowLevelTable = ExpAllocateLowLevelTable(PoolWithTag, 0LL);
  v10 = LowLevelTable;
  if ( !LowLevelTable )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6274624Fu);
    if ( a1 )
      PsReturnProcessPagedPoolQuota(a1, 0x80uLL);
    return 0LL;
  }
  LOBYTE(v9) = a2;
  ExpInsertLowLevelTableIntoFreeList(PoolWithTag, LowLevelTable, PoolWithTag + 8, v9);
  PoolWithTag[1] = v10;
  if ( a1 )
    *((_BYTE *)PoolWithTag + 44) |= 0x10u;
  PoolWithTag[7] = 0LL;
  result = PoolWithTag;
  PoolWithTag[6] = 0LL;
  return result;
}
