/*
 * XREFs of ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D3498
 * Callers:
 *     Win32AllocPoolImpl @ 0x1C00C5750 (Win32AllocPoolImpl.c)
 *     Win32AllocPoolWithQuotaImpl @ 0x1C00D4570 (Win32AllocPoolWithQuotaImpl.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C014F91C (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 *     ??$AllocateCommon@V_lambda_f9850308d85abc5e6c9482ec663044d3_@@V_lambda_5e58d0a0dde94a12d43635639bfe7835_@@@CLeakTrackingAllocator@NSInstrumentation@@AEAAPEAX_KIV_lambda_f9850308d85abc5e6c9482ec663044d3_@@V_lambda_5e58d0a0dde94a12d43635639bfe7835_@@@Z @ 0x1C02D32E4 (--$AllocateCommon@V_lambda_f9850308d85abc5e6c9482ec663044d3_@@V_lambda_5e58d0a0dde94a12d43635639.c)
 * Callees:
 *     ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreEx@2@@Z @ 0x1C02D3734 (-InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreE.c)
 *     ?InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAV?$CSortedVector@PEAXPEAX@2@@Z @ 0x1C02D37C0 (-InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAV-$CSortedVector@PE.c)
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C02D3850 (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 *     ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x1C02D427C (-AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02D471C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

char __fastcall NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
        __int64 a1,
        __int64 a2,
        struct NSInstrumentation::CBackTrace *a3)
{
  NSInstrumentation::CPrioritizedWriterLock **v3; // rsi
  NSInstrumentation::CBackTraceStoreEx *v5; // rcx
  __int64 v7; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v8; // rdi
  __int64 v9; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  v3 = (NSInstrumentation::CPrioritizedWriterLock **)(a1 + 64);
  v5 = *(NSInstrumentation::CBackTraceStoreEx **)(a1 + 64);
  if ( v5 || (NSInstrumentation::CLeakTrackingAllocator::InitializeBackTraceStore(0LL, v3), (v5 = *v3) != 0LL) )
  {
    v11 = (struct NSInstrumentation::CBackTraceStorageUnit *)NSInstrumentation::CBackTraceStoreEx::AcquireBackTrace(
                                                               v5,
                                                               a3,
                                                               (unsigned int *)a3);
    v8 = v11;
    if ( v11 )
    {
      if ( !*(_QWORD *)(a1 + 56) )
        NSInstrumentation::CLeakTrackingAllocator::InitializeSortedVector(v7, a1 + 56);
      v9 = *(_QWORD *)(a1 + 56);
      if ( v9 )
      {
        if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::Insert(v9, &v12, &v11) )
          return 1;
        v8 = v11;
      }
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *v3,
        v8);
    }
  }
  return 0;
}
