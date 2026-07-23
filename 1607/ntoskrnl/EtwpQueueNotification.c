/*
 * XREFs of EtwpQueueNotification @ 0x140491640
 * Callers:
 *     EtwpSendDataBlock @ 0x1404914BC (EtwpSendDataBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpReleaseQueueEntry @ 0x14048EDEC (EtwpReleaseQueueEntry.c)
 *     EtwpAddDataSource @ 0x140491900 (EtwpAddDataSource.c)
 *     PsChargeProcessWakeCounter @ 0x140501218 (PsChargeProcessWakeCounter.c)
 */

__int64 __fastcall EtwpQueueNotification(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // rbx
  char v5; // r15
  int v7; // ebp
  _QWORD *v8; // r12
  PVOID PoolWithTag; // rax
  signed __int64 v10; // rsi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v12; // rdi
  _BYTE *v13; // rax
  _BYTE *v14; // r14
  _QWORD *v15; // rdx
  _QWORD *i; // r8
  char v17; // cl
  signed __int64 *v18; // rax
  struct _KEVENT *v19; // rcx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  void *v26; // rdi
  unsigned int v27; // edx

  v3 = 0LL;
  v5 = HIBYTE(*(_WORD *)(a3 + 98)) & 1;
  v7 = 0;
  v8 = (_QWORD *)EtwpAddDataSource();
  if ( v8
    && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72777445u),
        (v10 = (signed __int64)PoolWithTag) != 0) )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    *(_QWORD *)(v10 + 16) = a2;
    *(_QWORD *)(v10 + 24) = a3;
    *(_WORD *)(v10 + 48) = *(_WORD *)(a3 + 96);
    *(_DWORD *)(v10 + 52) = 1;
    if ( !*(_BYTE *)(a2 + 12) )
      goto LABEL_4;
    v26 = *(void **)(a2 + 24);
    *(_DWORD *)(v10 + 52) |= 2u;
    ObfReferenceObject(v26);
    *(_QWORD *)(v10 + 32) = v26;
    *(_QWORD *)(v10 + 40) = PsChargeProcessWakeCounter(a1, 1LL, 3LL, a3);
    v27 = 0;
    v7 = -1073741823;
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8LL * v27 + 48), v10, 0LL) )
    {
      if ( ++v27 >= 4 )
        goto LABEL_30;
    }
    *(_WORD *)(v10 + 50) = v27;
    v7 = 0;
LABEL_30:
    if ( v7 < 0 )
    {
      EtwpReleaseQueueEntry((char *)v10, 3);
    }
    else
    {
LABEL_4:
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v12 = v8 + 2;
      v13 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v8 + 2), 0LL, 0);
      v14 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v8 + 4, 0LL) )
        ExfAcquirePushLockExclusiveEx(v8 + 2, v13, (ULONG_PTR)(v8 + 2));
      if ( v14 )
        v14[26] |= 1u;
      v15 = v8 + 3;
      for ( i = (_QWORD *)v8[3]; ; i = (_QWORD *)*i )
      {
        if ( i == v15 )
        {
          v17 = 1;
          goto LABEL_11;
        }
        if ( v5 == (HIBYTE(*(_WORD *)(i[3] + 98LL)) & 1) )
          break;
      }
      v17 = 0;
LABEL_11:
      v18 = (signed __int64 *)v8[4];
      if ( (_QWORD *)*v18 != v15 )
        __fastfail(3u);
      *(_QWORD *)v10 = v15;
      *(_QWORD *)(v10 + 8) = v18;
      *v18 = v10;
      v8[4] = v10;
      if ( v17 )
      {
        v19 = (struct _KEVENT *)(v5 ? v8[1] : *v8);
        if ( v19 )
          KeSetEvent(v19, 1, 0);
      }
      _m_prefetchw(v12);
      v20 = *v12;
      if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v3 = v20 - 16;
      if ( (v20 & 2) != 0 || (v21 = *v12, v21 != _InterlockedCompareExchange64(v12, v3, v20)) )
        ExfReleasePushLock(v8 + 2);
      KeAbPostRelease((ULONG_PTR)(v8 + 2));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v22, v23, v24);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
