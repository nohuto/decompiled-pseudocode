/*
 * XREFs of SmStoreCompressionStop @ 0x140517730
 * Callers:
 *     MmProcessWorkingSetControl @ 0x140517540 (MmProcessWorkingSetControl.c)
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     SmpKeyedStoreEntryGet @ 0x1400926A8 (SmpKeyedStoreEntryGet.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x1400EEE30 (MmQueryProcessWorkingSetSwapPages.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14020326C (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     SmSwapStore @ 0x1403B5BA4 (SmSwapStore.c)
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
  v2 = SmpKeyedStoreEntryGet((__int64)&qword_140304FC0, &Process, 0, 0);
  v3 = v2;
  if ( v2 )
    v4 = *(unsigned __int16 *)(v2 + 16);
  else
    v4 = dword_140304FE8;
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
        v5 = (_DWORD *)*((_QWORD *)&SmGlobals + 22 * (v4 & 0x1F));
        if ( (*v5 & 0x40000) != 0 )
          SMKM_STORE<SM_TRAITS>::SmStTrimWsStore((__int64)v5, 0LL);
      }
      LODWORD(v2) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v10);
      if ( (int)v2 < 0 )
        LODWORD(v2) = SmSwapStore(2);
    }
  }
  return v2;
}
