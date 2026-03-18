/*
 * XREFs of AlpcpAllocateMessageFromExtendedTables @ 0x14061FE50
 * Callers:
 *     AlpcpAllocateMessageFunction @ 0x14047D760 (AlpcpAllocateMessageFunction.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExCreateHandleEx @ 0x140424F50 (ExCreateHandleEx.c)
 *     ExCreateHandleTable @ 0x140460B44 (ExCreateHandleTable.c)
 *     ExDestroyHandleTable @ 0x1404AE2B0 (ExDestroyHandleTable.c)
 */

__int64 __fastcall AlpcpAllocateMessageFromExtendedTables(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  unsigned int v5; // ebx
  __int64 i; // rdi
  __int64 v7; // r10
  _QWORD *HandleTable; // rax
  __int64 Handle; // rax

  if ( !AlpcpSecondaryMessageTables )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x61486C41u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 0LL;
    memset(PoolWithTag, 0, 0x100uLL);
    *v3 = AlpcMessageTable;
    if ( _InterlockedCompareExchange64(&AlpcpSecondaryMessageTables, (signed __int64)v3, 0LL) )
      ExFreePoolWithTag(v3, 0x61486C41u);
  }
  v5 = 1;
  for ( i = 8LL; ; i += 8LL )
  {
    v7 = *(_QWORD *)(i + AlpcpSecondaryMessageTables);
    if ( !v7 )
    {
      HandleTable = ExCreateHandleTable(0LL, 0);
      v7 = (__int64)HandleTable;
      if ( !HandleTable )
        return 0LL;
      if ( _InterlockedCompareExchange64(
             (volatile signed __int64 *)(AlpcpSecondaryMessageTables + 8LL * v5),
             (signed __int64)HandleTable,
             0LL) )
      {
        ExDestroyHandleTable(HandleTable);
        v7 = *(_QWORD *)(i + AlpcpSecondaryMessageTables);
      }
    }
    Handle = ExCreateHandleEx(v7, a1, 0, 0, 0);
    if ( Handle )
      break;
    if ( ++v5 >= 0x20 )
      return 0LL;
  }
  return Handle | (v5 << 26);
}
