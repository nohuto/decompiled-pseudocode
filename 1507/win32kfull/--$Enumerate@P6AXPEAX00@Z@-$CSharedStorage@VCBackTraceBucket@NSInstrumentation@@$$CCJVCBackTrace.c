/*
 * XREFs of ??$Enumerate@P6AXPEAX00@Z@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C02D41B0
 * Callers:
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z @ 0x1C02D358C (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z.c)
 * Callees:
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D3B30 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D3BA4 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?WriteBackTraceDumpBufferCallback@NSInstrumentation@@YAXPEAX00@Z @ 0x1C02D4928 (-WriteBackTraceDumpBufferCallback@NSInstrumentation@@YAXPEAX00@Z.c)
 */

void __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Enumerate<void (*)(void *,void *,void *)>(
        NSInstrumentation::CPrioritizedWriterLock *this,
        __int64 a2,
        void *a3)
{
  int i; // eax
  unsigned int j; // esi
  NSInstrumentation::CPlatformReaderWriterLock *v7; // rdi
  void *v8; // r9
  __int64 *v9; // r14

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  for ( i = *((_DWORD *)this + 7); i; i = *((_DWORD *)this + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(this);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
  }
  for ( j = 0; j < *((_DWORD *)this + 8); ++j )
  {
    v7 = (NSInstrumentation::CPlatformReaderWriterLock *)(*((_QWORD *)this + 6) + 16LL * j);
    NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(v7);
    v9 = (__int64 *)*((_QWORD *)v7 + 1);
    if ( v9 )
    {
      while ( 1 )
      {
        v9 = (__int64 *)*v9;
        if ( !v9 )
          break;
        NSInstrumentation::WriteBackTraceDumpBufferCallback((NSInstrumentation *)v9, v9 + 2, a3, v8);
      }
    }
    ExReleasePushLockSharedEx(v7, 0LL);
    KeLeaveCriticalRegion();
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
}
