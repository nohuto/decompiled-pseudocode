/*
 * XREFs of AlpcpAllocateMessageFunction @ 0x1405402B8
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExCreateHandleEx @ 0x140424CD0 (ExCreateHandleEx.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14069ECA0 (AlpcpAllocateMessageFromExtendedTables.c)
 */

PVOID __fastcall AlpcpAllocateMessageFunction(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  char *PoolWithTag; // rax
  void *v4; // rbx
  __int64 v5; // rdi
  __int64 Handle; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return v4;
  v5 = (__int64)(PoolWithTag + 48);
  memset(PoolWithTag + 48, 0, 0x108uLL);
  Handle = ExCreateHandleEx(AlpcMessageTable, v5, 0, 0, 0);
  if ( Handle || (Handle = AlpcpAllocateMessageFromExtendedTables(v5)) != 0 )
  {
    *(_DWORD *)(v5 + 248) = Handle | 0x80000000;
    return v4;
  }
  ExFreePoolWithTag(v4, 0);
  return 0LL;
}
