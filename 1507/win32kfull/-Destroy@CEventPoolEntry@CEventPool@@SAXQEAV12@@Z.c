/*
 * XREFs of ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C02D7F58
 * Callers:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C013108C (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C02D7DD0 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C0131134 (-Destroy@CManualResetEvent@@SAXQEAV1@@Z.c)
 */

void __fastcall CEventPool::CEventPoolEntry::Destroy(struct CEventPool::CEventPoolEntry *const a1)
{
  void **v2; // rcx

  v2 = (void **)*((_QWORD *)a1 + 1);
  if ( v2 )
    CManualResetEvent::Destroy(v2);
  EngFreeMem(a1);
}
