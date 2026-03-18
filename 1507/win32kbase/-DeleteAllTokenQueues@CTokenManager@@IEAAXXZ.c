/*
 * XREFs of ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C00812D0
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C006FEA0 (--1CTokenManager@@AEAA@XZ.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C00813BC (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 * Callees:
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C0046EA4 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 */

void __fastcall CTokenManager::DeleteAllTokenQueues(CTokenManager *this)
{
  struct _RTL_GENERIC_TABLE *i; // rcx
  struct CTokenManager::TokenQueueTableEntry *v3; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 96); ; i = (struct _RTL_GENERIC_TABLE *)((char *)this + 96) )
  {
    RestartKey = 0LL;
    v3 = (struct CTokenManager::TokenQueueTableEntry *)RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v3 )
      break;
    CTokenManager::RemoveTokenQueueTableEntry(this, v3);
  }
}
