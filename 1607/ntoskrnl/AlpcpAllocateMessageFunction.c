/*
 * XREFs of AlpcpAllocateMessageFunction @ 0x1404B62CC
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExCreateHandleEx @ 0x14050DBE0 (ExCreateHandleEx.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406550F4 (AlpcpAllocateMessageFromExtendedTables.c)
 */

char *__fastcall AlpcpAllocateMessageFunction(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  char *PoolWithTag; // rax
  char *v4; // rbx
  char *v5; // rdi
  __int64 Handle; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return v4;
  v5 = PoolWithTag + 48;
  memset(PoolWithTag + 48, 0, 0x110uLL);
  Handle = ExCreateHandleEx(AlpcMessageTable, (_DWORD)v5, 0, 0, 0LL);
  if ( Handle || (Handle = AlpcpAllocateMessageFromExtendedTables(v5)) != 0 )
  {
    *((_DWORD *)v5 + 64) = Handle | 0x80000000;
    return v4;
  }
  ExFreePoolWithTag(v4, 0);
  return 0LL;
}
