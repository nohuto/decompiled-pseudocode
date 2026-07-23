/*
 * XREFs of PoRegisterCoalescingCallback @ 0x14056F8D0
 * Callers:
 *     CmpCmdInit @ 0x14056F72C (CmpCmdInit.c)
 *     CcInitializeCacheManager @ 0x14079FAB0 (CcInitializeCacheManager.c)
 *     PopCoalescingInitialize @ 0x1407B2BF4 (PopCoalescingInitialize.c)
 * Callees:
 *     ExCompareExchangeCallBack @ 0x140136BF8 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PoRegisterCoalescingCallback(
        unsigned __int64 a1,
        char a2,
        struct _EX_RUNDOWN_REF **a3,
        unsigned __int64 a4)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rbx
  __int64 v9; // rdi

  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x62436F50u);
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[5].Count = a4;
  PoolWithTag[1].Count = (unsigned __int64)PopCoalescingCallback;
  PoolWithTag[2].Count = (unsigned __int64)PoolWithTag;
  PoolWithTag[3].Count = a1;
  PoolWithTag->Count = 0LL;
  v9 = 0LL;
  LOBYTE(PoolWithTag[4].Count) = a2 != 0;
  while ( !ExCompareExchangeCallBack(&PopCoalescingCallbackRoutine[v9], PoolWithTag, 0LL) )
  {
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 8 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return 3221225485LL;
    }
  }
  _InterlockedIncrement(&PopCoalescingCallbackRoutineCount);
  *a3 = PoolWithTag;
  return 0LL;
}
