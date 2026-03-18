/*
 * XREFs of ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z @ 0x1C02D9238
 * Callers:
 *     _lambda_4d0897c89940787969f12b8b2e38fafd_::operator() @ 0x1C02A2E00 (_lambda_4d0897c89940787969f12b8b2e38fafd_--operator().c)
 * Callees:
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C02D9190 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02D91A8 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C02D91DC (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ?QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z @ 0x1C02D9340 (-QueueWorkItem@CWorkItemQueue@@QEAA_NQEAVCWorkItem@1@@Z.c)
 */

struct CMultipleConsumerWorkQueue::CWaitableWorkItem *__fastcall CMultipleConsumerWorkQueue::CreateAndQueueWorkItem(
        CMultipleConsumerWorkQueue *this,
        unsigned __int8 *a2)
{
  __int64 v2; // rdi
  PSLIST_ENTRY v5; // rax
  _DWORD *v6; // rbx
  _DWORD *v7; // rax
  _DWORD *v8; // rdi
  CWorkItemQueue *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-28h]
  void *v12; // [rsp+50h] [rbp+8h] BYREF
  struct CEventPool::CEventPoolEntry *v13; // [rsp+68h] [rbp+20h] BYREF

  v2 = *((_QWORD *)this + 1);
  v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v2 + 16));
  v6 = 0LL;
  if ( v5 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v2);
  }
  else
  {
    v5 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
    if ( !v5 )
    {
      v13 = 0LL;
      goto LABEL_11;
    }
  }
  v13 = (struct CEventPool::CEventPoolEntry *)v5;
  v11 = *((_QWORD *)&v5->Next + 1);
  v7 = EngAllocMem(0, 0x38u, 0x676D6466u);
  v8 = v7;
  if ( v7 )
  {
    v7[4] = 8;
    *((_QWORD *)v7 + 4) = v11;
    v7[5] = 8;
    *((_QWORD *)v7 + 1) = v7 + 12;
    *((_QWORD *)v7 + 6) = *(_QWORD *)a2;
    v9 = *(CWorkItemQueue **)this;
    v12 = v7;
    if ( CWorkItemQueue::QueueWorkItem(v9, (struct CWorkItemQueue::CWorkItem *const)v7) )
    {
      v13 = 0LL;
      v12 = 0LL;
      v6 = v8;
    }
  }
  else
  {
    v12 = 0LL;
  }
  CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v12);
LABEL_11:
  CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v13);
  return (struct CMultipleConsumerWorkQueue::CWaitableWorkItem *)v6;
}
