/*
 * XREFs of ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@QEBVCBackTrace@2@@Z @ 0x1C02D444C
 * Callers:
 *     ?AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z @ 0x1C02D427C (-AcquireBackTrace@CBackTraceStoreEx@NSInstrumentation@@QEAAPEAXPEAVCBackTrace@2@PEAI@Z.c)
 * Callees:
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D3B10 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D3B30 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D3BA4 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ComputeHash@CBackTrace@NSInstrumentation@@QEBA_KXZ @ 0x1C02D42B8 (-ComputeHash@CBackTrace@NSInstrumentation@@QEBA_KXZ.c)
 *     ?Insert@CBackTraceBucket@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@Z @ 0x1C02D4544 (-Insert@CBackTraceBucket@NSInstrumentation@@QEAAPEAVCBackTraceStorageUnit@2@_KQEBVCBackTrace@2@@.c)
 */

struct NSInstrumentation::CBackTraceStorageUnit *__fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Insert(
        NSInstrumentation::CPrioritizedWriterLock *this,
        const __m128i *a2)
{
  int v4; // eax
  struct NSInstrumentation::CBackTraceStorageUnit *v5; // rdi
  unsigned __int64 v6; // r15
  NSInstrumentation::CPlatformReaderWriterLock *v7; // rsi
  NSInstrumentation::CBackTraceBucket *PoolWithTag; // rax
  __int64 v9; // rbp

  _InterlockedIncrement((volatile signed __int32 *)this + 6);
  v4 = *((_DWORD *)this + 7);
  v5 = 0LL;
  while ( v4 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(this);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    v4 = *((_DWORD *)this + 7);
  }
  v6 = NSInstrumentation::CBackTrace::ComputeHash(a2);
  v7 = (NSInstrumentation::CPlatformReaderWriterLock *)(*((_QWORD *)this + 6) + 16 * (v6 % *((unsigned int *)this + 8)));
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(v7);
  PoolWithTag = (NSInstrumentation::CBackTraceBucket *)*((_QWORD *)v7 + 1);
  if ( PoolWithTag )
    goto LABEL_7;
  v9 = *((_QWORD *)this + 5);
  PoolWithTag = (NSInstrumentation::CBackTraceBucket *)ExAllocatePoolWithTag(PagedPoolSession, 0x10uLL, 0x31497355u);
  if ( PoolWithTag )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = v9;
    ++*((_DWORD *)this + 9);
    *((_QWORD *)v7 + 1) = PoolWithTag;
LABEL_7:
    v5 = NSInstrumentation::CBackTraceBucket::Insert(
           PoolWithTag,
           v6,
           (const struct NSInstrumentation::CBackTrace *const)a2);
  }
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v5;
}
