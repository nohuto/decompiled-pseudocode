/*
 * XREFs of ?UmfdServerSendCompleteAndWaitReceive@@YAJPEAX0K0PEAK0@Z @ 0x1C02D5710
 * Callers:
 *     ?UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z @ 0x1C02A44A8 (-UmfdHostSendCompleteWaitReceive@@YAJW4FontDriverType@@@Z.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02D7E00 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 *     ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C02D7F80 (-QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z.c)
 *     ?WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@_N@Z @ 0x1C02D8060 (-WaitForWorkItem@CWorkItemQueue@@QEBAPEAVCWorkItem@1@_N@Z.c)
 */

__int64 __fastcall UmfdServerSendCompleteAndWaitReceive(
        CWorkItemQueue **a1,
        struct CWorkItemQueue::CWorkItem **a2,
        __int64 a3,
        void *a4,
        unsigned int *a5,
        struct CWorkItemQueue::CWorkItem **a6)
{
  struct CWorkItemQueue::CWorkItem *v6; // r8
  bool v10; // zf
  char v12; // dl
  struct CWorkItemQueue::CWorkItem *v13; // rax
  CMultipleConsumerWorkQueue::CWaitableWorkItem *v14; // rbx
  size_t v15; // rdi
  const void *v16; // rdx

  v6 = 0LL;
  if ( a2 )
  {
    v6 = *a2;
    v10 = *a2 == 0LL;
  }
  else
  {
    v10 = a5 == 0LL;
  }
  if ( v10 || a6 && a6 != a2 && *a6 )
    return 3221225485LL;
  v12 = (2 * ((a4 != 0LL) | (2 * ((a5 != 0LL) | (2 * (a6 != 0LL)))))) | 1;
  if ( v12 != 15 )
    return 3221225485LL;
  if ( v6 )
  {
    *((_DWORD *)v6 + 10) = 1;
    KeSetEvent(**((PRKEVENT **)v6 + 4), 1, 0);
    *a2 = 0LL;
  }
  v13 = CWorkItemQueue::WaitForWorkItem(*a1, v12);
  v14 = v13;
  if ( !v13 )
    return 3221225473LL;
  v15 = *((unsigned int *)v13 + 5);
  if ( (unsigned int)v15 <= 8 )
  {
    *a6 = v13;
    v16 = (const void *)*((_QWORD *)v13 + 1);
    *a5 = v15;
    memmove(a4, v16, v15);
    return 0LL;
  }
  else if ( CWorkItemQueue::QueueWorkItem(*a1, v13) )
  {
    *a5 = v15;
    return 3221225507LL;
  }
  else
  {
    CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(v14);
    return 3221227264LL;
  }
}
