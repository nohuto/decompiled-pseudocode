/*
 * XREFs of ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02D8B9C
 * Callers:
 *     Win32FreeToPagedLookasideListImpl @ 0x1C00D51C0 (Win32FreeToPagedLookasideListImpl.c)
 *     Win32FreePoolImpl @ 0x1C00EDF10 (Win32FreePoolImpl.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C012784C (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D7884 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D791C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?CleanupCallback@CLeakTrackingAllocator@NSInstrumentation@@CAXPEAX00@Z @ 0x1C02D79C0 (-CleanupCallback@CLeakTrackingAllocator@NSInstrumentation@@CAXPEAX00@Z.c)
 * Callees:
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D7F90 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D7FB0 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D8024 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Remove@CBackTraceBucket@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02D8C54 (-Remove@CBackTraceBucket@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z.c)
 */

bool __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        NSInstrumentation::CPrioritizedWriterLock *this,
        struct NSInstrumentation::CBackTraceStorageUnit *a2)
{
  int v4; // eax
  bool v5; // si
  NSInstrumentation::CPlatformReaderWriterLock *v6; // rdi
  NSInstrumentation::CBackTraceBucket *v7; // rcx

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  v4 = *((_DWORD *)this + 7);
  v5 = 0;
  while ( v4 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(this);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v4 = *((_DWORD *)this + 7);
  }
  v6 = (NSInstrumentation::CPlatformReaderWriterLock *)(*((_QWORD *)this + 6)
                                                      + 16
                                                      * (*((_QWORD *)a2 + 1)
                                                       % (unsigned __int64)*((unsigned int *)this + 8)));
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v6);
  v7 = (NSInstrumentation::CBackTraceBucket *)*((_QWORD *)v6 + 1);
  if ( v7 )
    v5 = NSInstrumentation::CBackTraceBucket::Remove(v7, a2);
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v5;
}
