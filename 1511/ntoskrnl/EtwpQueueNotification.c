/*
 * XREFs of EtwpQueueNotification @ 0x1404CDF90
 * Callers:
 *     EtwpSendDataBlock @ 0x1404CDE0C (EtwpSendDataBlock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     EtwpAddDataSource @ 0x1404CE16C (EtwpAddDataSource.c)
 *     EtwpReleaseQueueEntry @ 0x1404CE5F0 (EtwpReleaseQueueEntry.c)
 *     PsChargeProcessWakeCounter @ 0x1404CFD98 (PsChargeProcessWakeCounter.c)
 */

__int64 __fastcall EtwpQueueNotification(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rbx
  int v5; // ebp
  __int64 v8; // r15
  PVOID PoolWithTag; // rax
  _QWORD *v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r14
  _QWORD *v15; // rcx
  bool v16; // dl
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  void *v20; // rdi
  unsigned int v21; // edx

  v3 = 0LL;
  v5 = 0;
  v8 = EtwpAddDataSource();
  if ( v8 && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72777445u), (v10 = PoolWithTag) != 0LL) )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v10[2] = a2;
    v10[3] = a3;
    *((_WORD *)v10 + 24) = *(_WORD *)(a3 + 96);
    *((_DWORD *)v10 + 13) = 1;
    if ( !*(_BYTE *)(a2 + 12) )
      goto LABEL_4;
    v20 = *(void **)(a2 + 24);
    *((_DWORD *)v10 + 13) |= 2u;
    ObfReferenceObject(v20);
    v10[4] = v20;
    v10[5] = PsChargeProcessWakeCounter(a1, 1LL, 3LL, a3);
    v21 = 0;
    v5 = -1073741823;
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8LL * v21 + 48), (signed __int64)v10, 0LL) )
    {
      if ( ++v21 >= 4 )
        goto LABEL_22;
    }
    *((_WORD *)v10 + 25) = v21;
    v5 = 0;
LABEL_22:
    if ( v5 < 0 )
    {
      EtwpReleaseQueueEntry(v10);
    }
    else
    {
LABEL_4:
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v12 = (signed __int64 *)(v8 + 8);
      v13 = KeAbPreAcquire(v8 + 8, 0LL, 0LL);
      v14 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 8), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 8), v13, v8 + 8);
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      v15 = *(_QWORD **)(v8 + 24);
      v16 = *(_QWORD *)(v8 + 16) == v8 + 16;
      *v10 = v8 + 16;
      v10[1] = v15;
      if ( *v15 != v8 + 16 )
        __fastfail(3u);
      *v15 = v10;
      *(_QWORD *)(v8 + 24) = v10;
      if ( v16 && *(_QWORD *)v8 )
        KeSetEvent(*(PRKEVENT *)v8, 1, 0);
      _m_prefetchw(v12);
      v17 = *v12;
      if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v3 = v17 - 16;
      if ( (v17 & 2) != 0 || (v18 = *v12, v18 != _InterlockedCompareExchange64(v12, v3, v17)) )
        ExfReleasePushLock((_QWORD *)(v8 + 8));
      KeAbPostRelease(v8 + 8);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
