/*
 * XREFs of ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C02D9318
 * Callers:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C0110588 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C02D9190 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C0110630 (-Destroy@CManualResetEvent@@SAXQEAV1@@Z.c)
 */

void __fastcall CEventPool::CEventPoolEntry::Destroy(struct CEventPool::CEventPoolEntry *const a1)
{
  void **v2; // rcx

  v2 = (void **)*((_QWORD *)a1 + 1);
  if ( v2 )
    CManualResetEvent::Destroy(v2);
  EngFreeMem(a1);
}
