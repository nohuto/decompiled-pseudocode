/*
 * XREFs of ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D791C
 * Callers:
 *     Win32AllocPoolImpl @ 0x1C00D56C0 (Win32AllocPoolImpl.c)
 *     Win32AllocPoolWithQuotaImpl @ 0x1C00EE6F0 (Win32AllocPoolWithQuotaImpl.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C01278EC (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 *     ??$AllocateCommon@V_lambda_c4c4ea517b44899cfbbfd85c0dbd9cda_@@V_lambda_fb1d754a87bb4379b691d90d9f0cbdb4_@@@CLeakTrackingAllocator@NSInstrumentation@@AEAAPEAX_KIV_lambda_c4c4ea517b44899cfbbfd85c0dbd9cda_@@V_lambda_fb1d754a87bb4379b691d90d9f0cbdb4_@@@Z @ 0x1C02D7768 (--$AllocateCommon@V_lambda_c4c4ea517b44899cfbbfd85c0dbd9cda_@@V_lambda_fb1d754a87bb4379b691d90d9.c)
 * Callees:
 *     ?InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreEx@2@@Z @ 0x1C02D7BB4 (-InitializeBackTraceStore@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAVCBackTraceStoreE.c)
 *     ?InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAV?$CSortedVector@PEAXPEAX@2@@Z @ 0x1C02D7C40 (-InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAV-$CSortedVector@PE.c)
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C02D7CD0 (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 *     ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x1C02D86FC (-AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02D8B9C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
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
