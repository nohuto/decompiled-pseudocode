/*
 * XREFs of ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C02DC280
 * Callers:
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C02DC2CC (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z @ 0x1C02DC328 (-CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C02DC408 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

void __fastcall CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(
        struct CEventPool::CEventPoolEntry **a1)
{
  struct CEventPool::CEventPoolEntry *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CEventPool::CEventPoolEntry::Destroy(v1);
}
