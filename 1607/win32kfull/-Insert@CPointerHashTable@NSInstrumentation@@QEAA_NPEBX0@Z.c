/*
 * XREFs of ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C02D80DC
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02D7884 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C02D9D0C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 * Callees:
 *     ?AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D7F90 (-AcquireExclusive@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D7FB0 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C02D7FD0 (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D8024 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA?AW4EInsertResult@12@PEBX0@Z @ 0x1C02D8260 (-InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA-AW4EInsertResult@12@PEBX0@Z.c)
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1C02D8544 (-Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::Insert(
        NSInstrumentation::CPointerHashTable *this,
        const void *a2,
        const void *a3)
{
  int v6; // eax
  char v7; // si
  int inserted; // ebx
  bool v9; // al
  int v11; // ebx

  _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  v6 = *((_DWORD *)this + 7);
  v7 = 0;
  while ( v6 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(this);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
    v6 = *((_DWORD *)this + 7);
  }
  inserted = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  if ( inserted == 2 )
  {
    NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(this);
    _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
    _InterlockedAdd((volatile signed __int32 *)this + 7, 1u);
    if ( *((_DWORD *)this + 6) )
      NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPointerHashTable *)((char *)this + 8));
    NSInstrumentation::CPointerHashTable::Resize(this);
    _InterlockedDecrement((volatile signed __int32 *)this + 7);
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
    return 1;
  }
  if ( inserted != 1 )
    return 1;
  NSInstrumentation::CPlatformReaderWriterLock::AcquireExclusive(this);
  _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 0, 1);
  _InterlockedAdd((volatile signed __int32 *)this + 7, 1u);
  if ( *((_DWORD *)this + 6) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPointerHashTable *)((char *)this + 8));
  v9 = NSInstrumentation::CPointerHashTable::Resize(this);
  _InterlockedDecrement((volatile signed __int32 *)this + 7);
  if ( !v9 )
  {
    ExReleasePushLockExclusiveEx(this, 0LL);
    KeLeaveCriticalRegion();
    return 0;
  }
  ExReleasePushLockExclusiveEx(this, 0LL);
  while ( 1 )
  {
    KeLeaveCriticalRegion();
    _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
    if ( !*((_DWORD *)this + 7) )
      break;
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(this);
    ExReleasePushLockSharedEx(this, 0LL);
  }
  v11 = NSInstrumentation::CPointerHashTable::InsertInternal(this, a2, a3);
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  if ( v11 != 1 )
    return 1;
  return v7;
}
