/*
 * XREFs of SmStoreCompressionStop @ 0x14054BCFC
 * Callers:
 *     MmProcessWorkingSetControl @ 0x14054BAF8 (MmProcessWorkingSetControl.c)
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x14000321C (SmKmStoreRefFromStoreIndex.c)
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1400C75D8 (MmQueryProcessWorkingSetSwapPages.c)
 *     SmpKeyedStoreEntryGet @ 0x1400C92BC (SmpKeyedStoreEntryGet.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14021CF94 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     SmSwapStore @ 0x1403E3434 (SmSwapStore.c)
 */

int __fastcall SmStoreCompressionStop(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // ebx
  __int64 *v5; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+48h] [rbp-30h] BYREF
  _KPROCESS *Process; // [rsp+88h] [rbp+10h] BYREF
  __int64 v10; // [rsp+90h] [rbp+18h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_1403BF150, &Process, 0, 0);
  v3 = v2;
  if ( v2 )
    v4 = *(unsigned __int16 *)(v2 + 16);
  else
    v4 = dword_1403BF178;
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
        v5 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v4 & 0x3FF);
        if ( (*(_DWORD *)*v5 & 0x40000) != 0 )
          SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(*v5, 0LL);
      }
      LODWORD(v2) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v10);
      if ( (int)v2 < 0 )
        LODWORD(v2) = SmSwapStore(2);
    }
  }
  return v2;
}
