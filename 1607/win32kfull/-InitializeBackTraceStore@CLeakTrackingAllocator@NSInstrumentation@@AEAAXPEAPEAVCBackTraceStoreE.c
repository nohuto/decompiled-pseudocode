/*
 * XREFs of ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreEx@2@@Z @ 0x1C02D7BB4
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D7884 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D791C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 * Callees:
 *     ?Destroy@CBackTraceStoreEx@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C02D881C (-Destroy@CBackTraceStoreEx@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NI@Z @ 0x1C02D883C (-Initialize@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::InitializeBackTraceStore(
        NSInstrumentation::CLeakTrackingAllocator *this,
        struct NSInstrumentation::CBackTraceStoreEx **a2)
{
  struct NSInstrumentation::CBackTraceStoreEx *PoolWithTag; // rax
  struct NSInstrumentation::CBackTraceStoreEx *v4; // rbx

  PoolWithTag = (struct NSInstrumentation::CBackTraceStoreEx *)ExAllocatePoolWithTag(
                                                                 PagedPoolSession,
                                                                 0x38uLL,
                                                                 0x33497355u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( (unsigned __int8)NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Initialize(PoolWithTag) )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)a2, (signed __int64)v4, 0LL) )
        NSInstrumentation::CBackTraceStoreEx::Destroy(v4);
    }
    else
    {
      ExFreePoolWithTag(v4, 0);
    }
  }
}
