/*
 * XREFs of KeInitializeUmsThread @ 0x1406504F0
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x14020F39C (PspAttachThreadToUmsCompletionList.c)
 *     PspUmsInitThread @ 0x14067F5C0 (PspUmsInitThread.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     KeInitializeQueue @ 0x14007DE44 (KeInitializeQueue.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KeInitializeUmsThread(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *PoolWithTag; // rax
  unsigned int v10; // edi
  char *v11; // rbx

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x736D554Bu);
  v10 = 0;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, 0x88uLL);
  *(_QWORD *)v11 = a5;
  *((_QWORD *)v11 + 1) = a3;
  *((_QWORD *)v11 + 2) = a4;
  if ( a2 )
    KeInitializeEvent((PRKEVENT)v11 + 2, SynchronizationEvent, 0);
  else
    KeInitializeQueue((PRKQUEUE)(v11 + 32), 1u);
  if ( (KeFeatureBits & 0x10000000) != 0 )
  {
    *(_QWORD *)(a1 + 496) = v11;
    *(_QWORD *)(a1 + 504) = -1LL;
    _interlockedbittestandset((volatile signed __int32 *)a1, 31 - (a2 != 0));
  }
  else
  {
    v10 = -1073741637;
    ExFreePoolWithTag(v11, 0);
  }
  return v10;
}
