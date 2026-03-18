/*
 * XREFs of ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C02D3FC0
 * Callers:
 *     Win32FreeToPagedLookasideListImpl @ 0x1C00C3AD0 (Win32FreeToPagedLookasideListImpl.c)
 *     Win32FreePoolImpl @ 0x1C00C5ED0 (Win32FreePoolImpl.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0130D44 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C02D5A28 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z @ 0x1C02D5B70 (-_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z.c)
 * Callees:
 *     ?AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D3B30 (-AcquireShared@CPlatformReaderWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C02D3BA4 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::Remove(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        void **a3)
{
  char v6; // si
  int v7; // eax
  char v8; // di
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // r10

  v6 = 1;
  _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
  v7 = *((_DWORD *)this + 7);
  v8 = 0;
  while ( v7 )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
    NSInstrumentation::CPlatformReaderWriterLock::AcquireShared(this);
    ExReleasePushLockSharedEx(this, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedAdd((volatile signed __int32 *)this + 6, 1u);
    v7 = *((_DWORD *)this + 7);
  }
  if ( *((_DWORD *)this + 12)
    && ((v9 = 0x9E3779B97F34A803uLL * (a2 >> 4), (*((_BYTE *)this + 52) & 1) == 0) || *(_QWORD *)a2 == v9) )
  {
    v10 = *((_DWORD *)this + 10);
    v11 = 0;
    v12 = v9 >> (64 - *((_BYTE *)this + 44));
    while ( 1 )
    {
      v13 = v12;
      if ( (unsigned int)v12 < v10 )
        break;
LABEL_12:
      ++v11;
      v10 = v12;
      LODWORD(v12) = 0;
      if ( v11 >= 2 )
        goto LABEL_17;
    }
    v14 = *((_QWORD *)this + 4);
    while ( *(_QWORD *)(v14 + 16LL * v13) != a2 )
    {
      if ( ++v13 >= v10 )
        goto LABEL_12;
    }
    *a3 = *(void **)(v14 + 16LL * v13 + 8);
    *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * v13) = 0LL;
    _InterlockedDecrement((volatile signed __int32 *)this + 12);
  }
  else
  {
    v6 = 0;
  }
  v8 = v6;
LABEL_17:
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(this);
  return v8;
}
