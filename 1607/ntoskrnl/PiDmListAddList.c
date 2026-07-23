/*
 * XREFs of PiDmListAddList @ 0x14062F9D4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1404E2298 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmObjectAcquireSharedLock @ 0x1404E2AE0 (PiDmObjectAcquireSharedLock.c)
 *     PiDmListAddObjectWorker @ 0x1404E8FEC (PiDmListAddObjectWorker.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E90B4 (PiDmObjectAcquireExclusiveLock.c)
 */

__int64 __fastcall PiDmListAddList(__int64 a1, ULONG_PTR a2, __int64 a3, volatile signed __int64 *a4)
{
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  volatile signed __int64 *v7; // r9
  _QWORD **v8; // rbp
  struct _ERESOURCE *v9; // r12
  _QWORD *v10; // r14
  signed __int64 v11; // rbx
  volatile signed __int64 *v12; // r15
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  volatile signed __int64 v15; // rtt
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  volatile signed __int64 v21; // rtt
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  signed __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rtt
  ULONG_PTR v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  signed __int64 v33; // rax
  signed __int64 v34; // rcx
  unsigned __int64 v35; // rtt
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  signed __int64 v39; // rax
  volatile signed __int64 v40; // rtt

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
    v12 = v10 - 8;
    PiDmObjectAcquireSharedLock(v10 - 8);
    PiDmListAddObjectWorker(2, v9, a2, (__int64)(v10 - 8), 0LL);
    _m_prefetchw(v10 - 8);
    v13 = *(v10 - 8);
    v14 = v13 - 16;
    if ( (v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v14 = 0LL;
    if ( (v13 & 2) != 0 || (v15 = *v12, v15 != _InterlockedCompareExchange64(v12, v14, v13)) )
      ExfReleasePushLock(v10 - 8);
    KeAbPostRelease((ULONG_PTR)(v10 - 8));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
    v10 = (_QWORD *)*v10;
  }
  if ( a2 < (unsigned __int64)a4 )
  {
    _m_prefetchw((const void *)a4);
    v19 = *a4;
    v20 = *a4 - 16;
    if ( (*a4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v20 = 0LL;
    if ( (v19 & 2) != 0 || (v21 = *a4, v21 != _InterlockedCompareExchange64(a4, v20, v19)) )
      ExfReleasePushLock(a4);
    KeAbPostRelease((ULONG_PTR)a4);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v22, v23, v24);
    goto LABEL_21;
  }
  if ( a2 <= (unsigned __int64)a4 )
  {
LABEL_21:
    v25 = *(_QWORD *)a2;
    v26 = *(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0uLL;
    _m_prefetchw((const void *)a2);
    if ( v26 > 0x10 )
      v11 = v25 - 16;
    if ( (v25 & 2) != 0
      || (v27 = *(_QWORD *)a2, v27 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v11, v25)) )
    {
      ExfReleasePushLock((_QWORD *)a2);
    }
    v28 = a2;
    goto LABEL_27;
  }
  _m_prefetchw((const void *)a2);
  v33 = *(_QWORD *)a2;
  v34 = *(_QWORD *)a2 - 16LL;
  if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v34 = 0LL;
  if ( (v33 & 2) != 0
    || (v35 = *(_QWORD *)a2, v35 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v34, v33)) )
  {
    ExfReleasePushLock((_QWORD *)a2);
  }
  KeAbPostRelease(a2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v36, v37, v38);
  _m_prefetchw((const void *)a4);
  v39 = *a4;
  if ( (*a4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v11 = v39 - 16;
  if ( (v39 & 2) != 0 || (v40 = *a4, v40 != _InterlockedCompareExchange64(a4, v11, v39)) )
    ExfReleasePushLock(a4);
  v28 = (ULONG_PTR)a4;
LABEL_27:
  KeAbPostRelease(v28);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v29, v30, v31);
}
