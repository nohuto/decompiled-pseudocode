/*
 * XREFs of SmStoreCompressionStop @ 0x1406D9FF0
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406A9564 (MmProcessWorkingSetControl.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     SmpKeyedStoreEntryGet @ 0x1400F0084 (SmpKeyedStoreEntryGet.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14012C4A4 (MmQueryProcessWorkingSetSwapPages.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140252598 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmSwapStore @ 0x14055D55C (SmSwapStore.c)
 */

int __fastcall SmStoreCompressionStop(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // ebx
  _DWORD *v5; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+48h] [rbp-30h] BYREF
  _KPROCESS *Process; // [rsp+88h] [rbp+10h] BYREF
  __int64 v10; // [rsp+90h] [rbp+18h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140352D30, &Process, 0, 0LL);
  v3 = v2;
  if ( v2 )
    v4 = *(unsigned __int16 *)(v2 + 16);
  else
    v4 = dword_140352D58;
  if ( v4 != -1 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    WorkItem.List.Flink = 0LL;
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))SmpFlushStorePages;
    WorkItem.Parameter = &Event;
    ExQueueWorkItem(&WorkItem, CriticalWorkQueue);
    LODWORD(v2) = KeWaitForSingleObject(&Event, WrKernel, 0, 0, 0LL);
    if ( v3 )
    {
      SmSwapStore(1);
      if ( a1 )
      {
        v5 = (_DWORD *)SmGlobals[22 * (v4 & 0x1F)];
        if ( (*v5 & 0x40000) != 0 )
          SMKM_STORE<SM_TRAITS>::SmStTrimWsStore((__int64)v5);
      }
      LODWORD(v2) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v10);
      if ( (int)v2 < 0 )
        LODWORD(v2) = SmSwapStore(2);
    }
  }
  return v2;
}
