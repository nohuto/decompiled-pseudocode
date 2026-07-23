/*
 * XREFs of PiDmListAddObject @ 0x1404E8EF4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 *     IopRegisterDeviceInterface @ 0x14050FDE8 (IopRegisterDeviceInterface.c)
 *     PiDmListInitEnumCallback @ 0x14054D4C0 (PiDmListInitEnumCallback.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1404E2298 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectAcquireSharedLock @ 0x1404E2AE0 (PiDmObjectAcquireSharedLock.c)
 *     PiDmListAddObjectWorker @ 0x1404E8FEC (PiDmListAddObjectWorker.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E90B4 (PiDmObjectAcquireExclusiveLock.c)
 */

__int64 __fastcall PiDmListAddObject(unsigned int a1, int *a2, volatile signed __int64 *a3, __int64 a4)
{
  void *ObjectManagerForObjectType; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rbx
  signed __int64 v11; // rcx
  volatile signed __int64 v12; // rtt
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(a2[7]);
  PiDmObjectAcquireExclusiveLock(a2);
  PiDmObjectAcquireSharedLock(a3);
  PiDmListAddObjectWorker(a1, ObjectManagerForObjectType, a2, a3, a4);
  _m_prefetchw((const void *)a3);
  v9 = *a3;
  v10 = 0LL;
  v11 = *a3 - 16;
  if ( (*a3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (v9 & 2) != 0 || (v12 = *a3, v12 != _InterlockedCompareExchange64(a3, v11, v9)) )
    ExfReleasePushLock(a3);
  KeAbPostRelease((ULONG_PTR)a3);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  _m_prefetchw(a2);
  v16 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v10 = v16 - 16;
  if ( (v16 & 2) != 0
    || (v17 = *(_QWORD *)a2, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v10, v16)) )
  {
    ExfReleasePushLock(a2);
  }
  KeAbPostRelease((ULONG_PTR)a2);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18, v19, v20);
}
