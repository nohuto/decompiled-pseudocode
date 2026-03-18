/*
 * XREFs of AlpcpAllocateMessageFromExtendedTables @ 0x14069ECA0
 * Callers:
 *     AlpcpAllocateMessageFunction @ 0x1405402B8 (AlpcpAllocateMessageFunction.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExCreateHandleEx @ 0x140424CD0 (ExCreateHandleEx.c)
 *     ExDestroyHandleTable @ 0x140508CB0 (ExDestroyHandleTable.c)
 *     ExCreateHandleTable @ 0x140523600 (ExCreateHandleTable.c)
 */

__int64 __fastcall AlpcpAllocateMessageFromExtendedTables(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  unsigned int v5; // ebx
  __int64 i; // rdi
  __int64 v7; // r10
  void *HandleTable; // rax
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
      HandleTable = (void *)ExCreateHandleTable(0LL, 0LL);
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
