/*
 * XREFs of PiDmListAddList @ 0x140518AC0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14043D718 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043E03C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x14045AC18 (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmListAddObjectWorker @ 0x1404E504C (PiDmListAddObjectWorker.c)
 */

__int64 __fastcall PiDmListAddList(__int64 a1, ULONG_PTR a2, __int64 a3, volatile signed __int64 *a4)
{
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  volatile signed __int64 *v7; // r9
  _QWORD **v8; // rbp
  struct _ERESOURCE *v9; // r12
  _QWORD *v10; // r14
  signed __int64 v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  volatile signed __int64 v14; // rtt
  signed __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rtt
  ULONG_PTR v18; // rcx
  signed __int64 v20; // rax
  signed __int64 v21; // rcx
  unsigned __int64 v22; // rtt
  signed __int64 v23; // rax
  volatile signed __int64 v24; // rtt
  volatile signed __int64 *v25; // r15
  signed __int64 v26; // rax
  signed __int64 v27; // rcx
  volatile signed __int64 v28; // rtt

  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
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
    v25 = v10 - 8;
    PiDmObjectAcquireSharedLock(v10 - 8);
    PiDmListAddObjectWorker(2, v9, a2, (__int64)(v10 - 8), 0LL);
    _m_prefetchw(v10 - 8);
    v26 = *(v10 - 8);
    v27 = v26 - 16;
    if ( (v26 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v27 = 0LL;
    if ( (v26 & 2) != 0 || (v28 = *v25, v28 != _InterlockedCompareExchange64(v25, v27, v26)) )
      ExfReleasePushLock(v10 - 8);
    KeAbPostRelease((ULONG_PTR)(v10 - 8));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v10 = (_QWORD *)*v10;
  }
  if ( a2 < (unsigned __int64)a4 )
  {
    _m_prefetchw((const void *)a4);
    v12 = *a4;
    v13 = *a4 - 16;
    if ( (*a4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v13 = 0LL;
    if ( (v12 & 2) != 0 || (v14 = *a4, v14 != _InterlockedCompareExchange64(a4, v13, v12)) )
      ExfReleasePushLock(a4);
    KeAbPostRelease((ULONG_PTR)a4);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_11;
  }
  if ( a2 <= (unsigned __int64)a4 )
  {
LABEL_11:
    v15 = *(_QWORD *)a2;
    v16 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0uLL;
    _m_prefetchw((const void *)a2);
    if ( v16 > 0x10 )
      v11 = v15 - 16;
    if ( (v15 & 2) != 0
      || (v17 = *(_QWORD *)a2, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v11, v15)) )
    {
      ExfReleasePushLock((_QWORD *)a2);
    }
    v18 = a2;
    goto LABEL_16;
  }
  _m_prefetchw((const void *)a2);
  v20 = *(_QWORD *)a2;
  v21 = *(_QWORD *)a2 - 16LL;
  if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v21 = 0LL;
  if ( (v20 & 2) != 0
    || (v22 = *(_QWORD *)a2, v22 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v21, v20)) )
  {
    ExfReleasePushLock((_QWORD *)a2);
  }
  KeAbPostRelease(a2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  _m_prefetchw((const void *)a4);
  v23 = *a4;
  if ( (*a4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v11 = v23 - 16;
  if ( (v23 & 2) != 0 || (v24 = *a4, v24 != _InterlockedCompareExchange64(a4, v11, v23)) )
    ExfReleasePushLock(a4);
  v18 = (ULONG_PTR)a4;
LABEL_16:
  KeAbPostRelease(v18);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
