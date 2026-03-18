/*
 * XREFs of PiDmListRemoveList @ 0x140605934
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

__int64 __fastcall PiDmListRemoveList(__int64 a1, ULONG_PTR a2, __int64 a3, volatile signed __int64 *a4)
{
  void *ObjectManagerForObjectType; // rax
  volatile signed __int64 *v7; // r9
  _QWORD **v8; // rbp
  void *v9; // r12
  _QWORD *v10; // r14
  signed __int64 v11; // rbx
  volatile signed __int64 *v12; // r15
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  volatile signed __int64 v15; // rtt
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  volatile signed __int64 v18; // rtt
  signed __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rtt
  ULONG_PTR v22; // rcx
  signed __int64 v24; // rax
  signed __int64 v25; // rcx
  unsigned __int64 v26; // rtt
  signed __int64 v27; // rax
  volatile signed __int64 v28; // rtt

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  v8 = (_QWORD **)(v7 + 9);
  v9 = ObjectManagerForObjectType;
  if ( a2 >= (unsigned __int64)v7 )
  {
    if ( a2 > (unsigned __int64)v7 )
      PiDmObjectAcquireSharedLock(v7);
    PiDmObjectAcquireExclusiveLock((unsigned __int64 *)a2);
  }
  else
  {
    PiDmObjectAcquireExclusiveLock((unsigned __int64 *)a2);
    PiDmObjectAcquireSharedLock(a4);
  }
  v10 = *v8;
  v11 = 0LL;
  while ( v10 != v8 )
  {
    v12 = v10 - 8;
    PiDmObjectAcquireSharedLock(v10 - 8);
    PiDmListRemoveObjectWorker(2LL, v9, a2, v10 - 8, 0LL);
    _m_prefetchw(v10 - 8);
    v13 = *(v10 - 8);
    v14 = v13 - 16;
    if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v14 = 0LL;
    if ( (v13 & 2) != 0 || (v15 = *v12, v15 != _InterlockedCompareExchange64(v12, v14, v13)) )
      ExfReleasePushLock(v10 - 8);
    KeAbPostRelease((ULONG_PTR)(v10 - 8));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v10 = (_QWORD *)*v10;
  }
  if ( a2 < (unsigned __int64)a4 )
  {
    _m_prefetchw((const void *)a4);
    v16 = *a4;
    v17 = *a4 - 16;
    if ( (*a4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v17 = 0LL;
    if ( (v16 & 2) != 0 || (v18 = *a4, v18 != _InterlockedCompareExchange64(a4, v17, v16)) )
      ExfReleasePushLock(a4);
    KeAbPostRelease((ULONG_PTR)a4);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_21;
  }
  if ( a2 <= (unsigned __int64)a4 )
  {
LABEL_21:
    v19 = *(_QWORD *)a2;
    v20 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0uLL;
    _m_prefetchw((const void *)a2);
    if ( v20 > 0x10 )
      v11 = v19 - 16;
    if ( (v19 & 2) != 0
      || (v21 = *(_QWORD *)a2, v21 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v11, v19)) )
    {
      ExfReleasePushLock((_QWORD *)a2);
    }
    v22 = a2;
    goto LABEL_27;
  }
  _m_prefetchw((const void *)a2);
  v24 = *(_QWORD *)a2;
  v25 = *(_QWORD *)a2 - 16LL;
  if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v25 = 0LL;
  if ( (v24 & 2) != 0
    || (v26 = *(_QWORD *)a2, v26 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v25, v24)) )
  {
    ExfReleasePushLock((_QWORD *)a2);
  }
  KeAbPostRelease(a2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  _m_prefetchw((const void *)a4);
  v27 = *a4;
  if ( (*a4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v11 = v27 - 16;
  if ( (v27 & 2) != 0 || (v28 = *a4, v28 != _InterlockedCompareExchange64(a4, v11, v27)) )
    ExfReleasePushLock(a4);
  v22 = (ULONG_PTR)a4;
LABEL_27:
  KeAbPostRelease(v22);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
