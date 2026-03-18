/*
 * XREFs of PiDmListRemoveObject @ 0x140605B28
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14043D718 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043E03C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x14045AC18 (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmListRemoveObjectWorker @ 0x140605C1C (PiDmListRemoveObjectWorker.c)
 */

__int64 __fastcall PiDmListRemoveObject(unsigned int a1, ULONG_PTR a2, volatile signed __int64 *a3, __int64 a4)
{
  void *ObjectManagerForObjectType; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rbx
  signed __int64 v11; // rcx
  volatile signed __int64 v12; // rtt
  signed __int64 v13; // rax
  unsigned __int64 v14; // rtt

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  PiDmObjectAcquireExclusiveLock((unsigned __int64 *)a2);
  PiDmObjectAcquireSharedLock(a3);
  PiDmListRemoveObjectWorker(a1, ObjectManagerForObjectType, a2, a3, a4);
  _m_prefetchw((const void *)a3);
  v9 = *a3;
  v10 = 0LL;
  v11 = *a3 - 16;
  if ( (*a3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (v9 & 2) != 0 || (v12 = *a3, v12 != _InterlockedCompareExchange64(a3, v11, v9)) )
    ExfReleasePushLock(a3);
  KeAbPostRelease((ULONG_PTR)a3);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  _m_prefetchw((const void *)a2);
  v13 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v10 = v13 - 16;
  if ( (v13 & 2) != 0
    || (v14 = *(_QWORD *)a2, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v10, v13)) )
  {
    ExfReleasePushLock((_QWORD *)a2);
  }
  KeAbPostRelease(a2);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
