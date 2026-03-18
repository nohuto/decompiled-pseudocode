/*
 * XREFs of IoRegisterPriorityCallback @ 0x140136E4C
 * Callers:
 *     <none>
 * Callees:
 *     ExCompareExchangeCallBack @ 0x140136EEC (ExCompareExchangeCallBack.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PspQueueApcSpecialApc @ 0x1404B8A08 (PspQueueApcSpecialApc.c)
 */

__int64 __fastcall IoRegisterPriorityCallback(__int64 a1, __int64 a2)
{
  _QWORD *PoolWithTag; // rax
  void *v5; // rbx
  __int64 v6; // rsi

  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    return 3221227288LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62436F49u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[3] = a2;
  v6 = 0LL;
  PoolWithTag[1] = IopBoostThreadCallback;
  PoolWithTag[2] = PoolWithTag;
  PoolWithTag[4] = a1;
  do
  {
    if ( (unsigned __int8)ExCompareExchangeCallBack((char *)&IopUpdatePriorityCallbackRoutine + 8 * v6, v5, 0LL) )
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
