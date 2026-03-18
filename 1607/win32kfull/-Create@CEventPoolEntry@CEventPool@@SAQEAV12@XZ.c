/*
 * XREFs of ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C02DC2CC
 * Callers:
 *     ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z @ 0x1C02DC328 (-CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z.c)
 * Callees:
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C0127F50 (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C02DC280 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 */

struct CEventPool::CEventPoolEntry *CEventPool::CEventPoolEntry::Create(void)
{
  struct CEventPool::CEventPoolEntry *result; // rax
  struct CEventPool::CEventPoolEntry *v1; // rbx
  struct CEventPool::CEventPoolEntry *v2; // rdi
  struct CManualResetEvent *v3; // rax
  struct CEventPool::CEventPoolEntry *v4; // [rsp+30h] [rbp+8h] BYREF

  result = (struct CEventPool::CEventPoolEntry *)EngAllocMem(0, 0x10u, 0x676D6466u);
  v1 = 0LL;
  v2 = result;
  if ( result )
  {
    v4 = result;
    v3 = CManualResetEvent::Create();
    *((_QWORD *)v2 + 1) = v3;
    if ( v3 )
    {
      v4 = 0LL;
      v1 = v2;
    }
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v4);
    return v1;
  }
  return result;
}
