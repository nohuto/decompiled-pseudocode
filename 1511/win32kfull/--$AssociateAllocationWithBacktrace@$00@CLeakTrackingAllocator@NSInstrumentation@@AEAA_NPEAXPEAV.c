/*
 * XREFs of ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D47DC
 * Callers:
 *     Win32AllocateFromPagedLookasideListImpl @ 0x1C00C4880 (Win32AllocateFromPagedLookasideListImpl.c)
 *     Win32AllocPoolImpl @ 0x1C00C5040 (Win32AllocPoolImpl.c)
 *     Win32AllocPoolWithQuotaImpl @ 0x1C00D9B60 (Win32AllocPoolWithQuotaImpl.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C010655C (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 *     ??$AllocateCommon@V_lambda_f9850308d85abc5e6c9482ec663044d3_@@V_lambda_5e58d0a0dde94a12d43635639bfe7835_@@@CLeakTrackingAllocator@NSInstrumentation@@AEAAPEAX_KIV_lambda_f9850308d85abc5e6c9482ec663044d3_@@V_lambda_5e58d0a0dde94a12d43635639bfe7835_@@@Z @ 0x1C02D46C0 (--$AllocateCommon@V_lambda_f9850308d85abc5e6c9482ec663044d3_@@V_lambda_5e58d0a0dde94a12d43635639.c)
 * Callees:
 *     ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreEx@2@@Z @ 0x1C02D4B14 (-InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreE.c)
 *     ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTable@2@_N@Z @ 0x1C02D4B74 (-InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCPointerHashTa.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C02D503C (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x1C02D565C (-AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02D5AFC (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

char __fastcall NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
        __int64 a1,
        const void *a2,
        struct NSInstrumentation::CBackTrace *a3)
{
  NSInstrumentation::CPrioritizedWriterLock **v3; // rdi
  NSInstrumentation::CBackTraceStoreEx *v5; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v8; // rcx
  void *v9; // rsi
  bool v10; // r8
  NSInstrumentation::CPointerHashTable *v11; // rcx

  v3 = (NSInstrumentation::CPrioritizedWriterLock **)(a1 + 64);
  v5 = *(NSInstrumentation::CBackTraceStoreEx **)(a1 + 64);
  if ( v5 || (NSInstrumentation::CLeakTrackingAllocator::InitializeBackTraceStore(0LL, v3), (v5 = *v3) != 0LL) )
  {
    v9 = NSInstrumentation::CBackTraceStoreEx::AcquireBackTrace(v5, a3, (unsigned int *)a3);
    if ( v9 )
    {
      if ( !*(_QWORD *)(a1 + 48) )
        NSInstrumentation::CLeakTrackingAllocator::InitializePointerHashTable(
          v8,
          (struct NSInstrumentation::CPointerHashTable **)(a1 + 48),
          v10);
      v11 = *(NSInstrumentation::CPointerHashTable **)(a1 + 48);
      if ( v11 && NSInstrumentation::CPointerHashTable::Insert(v11, a2, v9) )
        return 1;
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *v3,
        (struct NSInstrumentation::CBackTraceStorageUnit *)v9);
    }
  }
  return 0;
}
