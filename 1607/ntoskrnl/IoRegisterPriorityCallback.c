/*
 * XREFs of IoRegisterPriorityCallback @ 0x14014C580
 * Callers:
 *     <none>
 * Callees:
 *     ExCompareExchangeCallBack @ 0x140136BF8 (ExCompareExchangeCallBack.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PspQueueApcSpecialApc @ 0x1403E6870 (PspQueueApcSpecialApc.c)
 */

__int64 __fastcall IoRegisterPriorityCallback(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  __int64 v6; // rsi

  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    return 3221227288LL;
  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62436F49u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->Count = 0LL;
  PoolWithTag[3].Count = a2;
  v6 = 0LL;
  PoolWithTag[1].Count = (unsigned __int64)IopBoostThreadCallback;
  PoolWithTag[2].Count = (unsigned __int64)PoolWithTag;
  PoolWithTag[4].Count = a1;
  do
  {
    if ( ExCompareExchangeCallBack(&IopUpdatePriorityCallbackRoutine[v6], v5, 0LL) )
    {
      _InterlockedIncrement(&IopUpdatePriorityCallbackRoutineCount);
      *(_DWORD *)(a1 + 16) |= 0x200u;
      return 0LL;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  while ( (unsigned int)v6 < 8 );
  PspQueueApcSpecialApc(v5);
  return 3221225485LL;
}
