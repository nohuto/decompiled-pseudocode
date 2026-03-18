/*
 * XREFs of PoRegisterCoalescingCallback @ 0x1405A7100
 * Callers:
 *     CmpCmdInit @ 0x1405A6AF4 (CmpCmdInit.c)
 *     CcInitializeCacheManager @ 0x1407C1E24 (CcInitializeCacheManager.c)
 *     PopCoalescingInitialize @ 0x1407D977C (PopCoalescingInitialize.c)
 * Callees:
 *     ExCompareExchangeCallBack @ 0x140165970 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
