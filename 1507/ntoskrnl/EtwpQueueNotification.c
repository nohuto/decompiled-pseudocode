/*
 * XREFs of EtwpQueueNotification @ 0x1404D5430
 * Callers:
 *     EtwpSendDataBlock @ 0x1404D52AC (EtwpSendDataBlock.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PspChargeJobWakeCounter @ 0x140417810 (PspChargeJobWakeCounter.c)
 *     EtwpAddDataSource @ 0x1404D5690 (EtwpAddDataSource.c)
 *     EtwpReleaseQueueEntry @ 0x1404D5B54 (EtwpReleaseQueueEntry.c)
 *     PspCheckConditionalWakeCharge @ 0x14053CBE8 (PspCheckConditionalWakeCharge.c)
 */

__int64 __fastcall EtwpQueueNotification(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v7; // r15
  PVOID PoolWithTag; // rax
  _QWORD *v9; // rdi
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rbp
  _QWORD *v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  signed __int64 v20; // rtt
  struct _KTHREAD *v21; // rdx
  __int16 v22; // ax
  void *v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rbx
  unsigned int v27; // edx

  v4 = 0;
  v7 = EtwpAddDataSource();
  if ( v7 && (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x72777445u), (v9 = PoolWithTag) != 0LL) )
  {
    memset(PoolWithTag, 0, 0x38uLL);
    v9[2] = a2;
    v9[3] = a3;
    *((_WORD *)v9 + 24) = *(_WORD *)(a3 + 96);
    *((_DWORD *)v9 + 13) = 1;
    if ( !*(_BYTE *)(a2 + 12) )
      goto LABEL_4;
    v24 = *(void **)(a2 + 24);
    *((_DWORD *)v9 + 13) |= 2u;
    ObfReferenceObject(v24);
    v9[4] = v24;
    v25 = *(_QWORD *)(a1 + 944);
    if ( v25
      && (*(_DWORD *)(v25 + 1296) & 0x1000) != 0
      && (unsigned __int8)PspCheckConditionalWakeCharge(
                            KeGetCurrentThread()->ApcState.Process,
                            *(_QWORD *)(a1 + 944),
                            3LL,
                            v10) )
    {
      PspChargeJobWakeCounter((_QWORD *)v25, 0LL, 3, 1LL, 1, a1, a3);
      ObfReferenceObjectWithTag((PVOID)v25, 0x6B577350u);
      v26 = v25 | 3;
    }
    else
    {
      v26 = 0LL;
    }
    v9[5] = v26;
    v27 = 0;
    v4 = -1073741823;
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8LL * v27 + 48), (signed __int64)v9, 0LL) )
    {
      if ( ++v27 >= 4 )
        goto LABEL_23;
    }
    *((_WORD *)v9 + 25) = v27;
    v4 = 0;
LABEL_23:
    if ( v4 < 0 )
    {
      EtwpReleaseQueueEntry(v9);
    }
    else
    {
LABEL_4:
      _InterlockedAdd((volatile signed __int32 *)(a2 + 8), 1u);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v12 = (signed __int64 *)(v7 + 8);
      v13 = KeAbPreAcquire(v7 + 8, 0LL, 0LL, v10);
      v16 = v13;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 8), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 8), v13, v7 + 8, v15);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      v17 = *(_QWORD **)(v7 + 24);
      LOBYTE(v14) = *(_QWORD *)(v7 + 16) == v7 + 16;
      *v9 = v7 + 16;
      v9[1] = v17;
      if ( *v17 != v7 + 16 )
        __fastfail(3u);
      *v17 = v9;
      *(_QWORD *)(v7 + 24) = v9;
      if ( (_BYTE)v14 && *(_QWORD *)v7 )
        KeSetEvent(*(PRKEVENT *)v7, 1, 0);
      _m_prefetchw(v12);
      v18 = *v12;
      v19 = *v12 - 16;
      if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v19 = 0LL;
      if ( (v18 & 2) != 0 || (v20 = *v12, v20 != _InterlockedCompareExchange64(v12, v19, v18)) )
        ExfReleasePushLock((_QWORD *)(v7 + 8), v14);
      KeAbPostRelease(v7 + 8);
      v21 = KeGetCurrentThread();
      v22 = v21->KernelApcDisable + 1;
      v21->KernelApcDisable = v22;
      if ( !v22
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
        && !v21->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
