/*
 * XREFs of PopIrpWorker @ 0x140156584
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseSemaphoreEx @ 0x140044830 (KeReleaseSemaphoreEx.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PopPepDeviceDState @ 0x140136CA4 (PopPepDeviceDState.c)
 *     PoDeviceAcquireIrp @ 0x140137AA4 (PoDeviceAcquireIrp.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PsTerminateSystemThread @ 0x140557A14 (PsTerminateSystemThread.c)
 */

NTSTATUS __fastcall PopIrpWorker(__int64 *Entry)
{
  unsigned __int8 v2; // r12
  __int64 v3; // r9
  LARGE_INTEGER *Timeout; // r15
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // si
  signed __int8 v8; // cf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // di
  signed __int32 v11; // eax
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int8 v18; // r14
  int v19; // eax
  unsigned __int8 v20; // di
  signed __int32 v21; // eax
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // r10
  char v26; // r14
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdi
  unsigned __int8 v30; // si
  __int64 v31; // rax
  __int64 v32; // r11
  __int64 v33; // rdx
  int v34; // ecx
  char v35; // al
  int v36; // r8d
  bool v37; // al
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int8 v40; // si
  int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rax
  char v44; // di
  unsigned __int8 v45; // si
  signed __int32 v46; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v49[7]; // [rsp+48h] [rbp-38h] BYREF
  LARGE_INTEGER v50; // [rsp+B0h] [rbp+30h] BYREF

  v2 = 0;
  memset(v49, 0, 0x30uLL);
  v49[2] = KeGetCurrentThread();
  if ( Entry )
  {
    if ( *Entry )
      KeReleaseSemaphoreEx(*Entry, 0, 1, v3, 0);
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, Entry);
    v50.QuadPart = -100000000LL;
    Timeout = &v50;
    LOBYTE(v49[5]) = 0;
  }
  else
  {
    Timeout = 0LL;
    LOBYTE(v49[5]) = 1;
  }
  v5 = KeAbPreAcquire((ULONG_PTR)&PopIrpWorkerMutex, 0LL, 0LL, v3);
  v6 = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v8 = _interlockedbittestandreset((volatile signed __int32 *)&PopIrpWorkerMutex, 0);
  if ( !v8 )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopIrpWorkerMutex, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  CurrentThread = KeGetCurrentThread();
  --PopIrpWorkerPendingCount;
  ++PopIrpWorkerCount;
  qword_14032D5E8 = (__int64)CurrentThread;
  dword_14032D610 = CurrentIrql;
  v49[0] = &PopIrpThreadList;
  v49[1] = qword_14032D638;
  if ( *(__int64 **)qword_14032D638 != &PopIrpThreadList )
    __fastfail(3u);
  *(_QWORD *)qword_14032D638 = v49;
  qword_14032D638 = (__int64)v49;
LABEL_11:
  v10 = dword_14032D610;
  qword_14032D5E8 = 0LL;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)&PopIrpWorkerMutex, 1, 0);
  if ( v11 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopIrpWorkerMutex, v11);
  __writecr8(v10);
  KeAbPostRelease((ULONG_PTR)&PopIrpWorkerMutex);
  do
  {
    if ( KeWaitForSingleObject(&PopIrpWorkerSemaphore, Executive, 0, 0, Timeout) != 258 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      v13 = PopIrpWorkerList;
      PopIrpLockThread = (__int64)KeGetCurrentThread();
      v14 = *(_QWORD *)PopIrpWorkerList;
      if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList || *(_QWORD *)(v14 + 8) != PopIrpWorkerList )
        __fastfail(3u);
      PopIrpWorkerList = *(_QWORD *)PopIrpWorkerList;
      *(_QWORD *)(v14 + 8) = &PopIrpWorkerList;
      PopIrpLockThread = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v16 = KeAbPreAcquire((ULONG_PTR)&PopIrpWorkerMutex, 0LL, 0LL, v15);
      v17 = v16;
      v18 = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopIrpWorkerMutex, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&PopIrpWorkerMutex, v16);
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
      qword_14032D5E8 = (__int64)KeGetCurrentThread();
      dword_14032D610 = v18;
      v19 = ++PopIrpWorkerInFlightCount;
      if ( PopCreateIrpWorkerAllowed
        && v19 == PopIrpWorkerCount
        && (unsigned int)PopIrpWorkerCount < 0xF
        && !PopIrpWorkerPendingCount
        && !PopIrpWorkerRequested )
      {
        PopIrpWorkerRequested = 1;
        KeSetEvent(&PopIrpWorkerControlEvent, 0, 0);
      }
      v20 = dword_14032D610;
      qword_14032D5E8 = 0LL;
      v21 = _InterlockedCompareExchange((volatile signed __int32 *)&PopIrpWorkerMutex, 1, 0);
      if ( v21 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&PopIrpWorkerMutex, v21);
      __writecr8(v20);
      KeAbPostRelease((ULONG_PTR)&PopIrpWorkerMutex);
      v22 = *(_QWORD *)(v13 + 16);
      v23 = v13 - 168;
      v24 = *(_QWORD *)(v22 + 40);
      PoDeviceAcquireIrp(v23, *(_BYTE *)(v22 + 1), v24);
      v25 = *(_QWORD *)(v23 + 72LL * *(char *)(v23 + 66) + 200);
      if ( *(_BYTE *)(v25 + 184) == 2 && *(_DWORD *)(v25 + 188) == 1 && *(_QWORD *)(v25 + 32) == v24 )
      {
        v31 = *(_QWORD *)(v25 + 24);
        v32 = *(_QWORD *)(v25 + 200);
        v33 = v31 ? *(_QWORD *)(*(_QWORD *)(v31 + 312) + 40LL) : 0LL;
        v34 = *(_DWORD *)(v33 + 140);
        *(_DWORD *)(v33 + 140) = *(_DWORD *)(v25 + 192);
        if ( v32 )
        {
          _m_prefetchw((const void *)(v32 + 32));
          v35 = _InterlockedOr((volatile signed __int32 *)(v32 + 32), 0);
          v36 = *(_DWORD *)(v25 + 192);
          *(_BYTE *)(v25 + 208) = v35 & 1;
          v37 = v36 != v34 && (v36 == 1 || (v35 & 1) == 0);
          *(_BYTE *)(v25 + 209) = v37;
          if ( v37 )
          {
            if ( v36 == 1 )
              _InterlockedOr((volatile signed __int32 *)(v32 + 32), 2u);
            PopPepDeviceDState(*(_QWORD *)(v32 + 56), *(_DWORD *)(v25 + 192), 0LL, *(_BYTE *)(v25 + 208));
          }
        }
      }
      v49[3] = v23;
      v26 = 0;
      v49[4] = v24;
      if ( (*(_DWORD *)(v24 + 48) & 0x2000) == 0 && v23 == PopInrushIrp )
      {
        v2 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v26 = 1;
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v24 + 8) + 288LL))(v24, v23);
      if ( v26 )
        __writecr8(v2);
      *(_OWORD *)&v49[3] = 0LL;
      ObfDereferenceObjectWithTag((PVOID)v24, 0x746C6644u);
      v28 = KeAbPreAcquire((ULONG_PTR)&PopIrpWorkerMutex, 0LL, 0LL, v27);
      v29 = v28;
      v30 = KeGetCurrentIrql();
      __writecr8(1uLL);
      v8 = _interlockedbittestandreset((volatile signed __int32 *)&PopIrpWorkerMutex, 0);
      if ( !v8 )
        ExpAcquireFastMutexContended((ULONG_PTR)&PopIrpWorkerMutex, v28);
      if ( v29 )
        *(_BYTE *)(v29 + 26) |= 1u;
      --PopIrpWorkerInFlightCount;
      dword_14032D610 = v30;
      goto LABEL_11;
    }
    v38 = KeAbPreAcquire((ULONG_PTR)&PopIrpWorkerMutex, 0LL, 0LL, v12);
    v39 = v38;
    v40 = KeGetCurrentIrql();
    __writecr8(1uLL);
    v8 = _interlockedbittestandreset((volatile signed __int32 *)&PopIrpWorkerMutex, 0);
    if ( !v8 )
      ExpAcquireFastMutexContended((ULONG_PTR)&PopIrpWorkerMutex, v38);
    if ( v39 )
      *(_BYTE *)(v39 + 26) |= 1u;
    qword_14032D5E8 = (__int64)KeGetCurrentThread();
    dword_14032D610 = v40;
    if ( PopCreateIrpWorkerAllowed
      && ((v41 = PopIrpWorkerCount - 1, PopIrpWorkerInFlightCount != PopIrpWorkerCount - 1) || PopIrpWorkerPendingCount) )
    {
      v42 = v49[0];
      v43 = v49[1];
      v44 = 0;
      if ( *(_QWORD **)(v49[0] + 8LL) != v49 || *(_QWORD **)v49[1] != v49 )
        __fastfail(3u);
      *(_QWORD *)v49[1] = v49[0];
      *(_QWORD *)(v42 + 8) = v43;
      PopIrpWorkerCount = v41;
    }
    else
    {
      v44 = 1;
    }
    v45 = dword_14032D610;
    qword_14032D5E8 = 0LL;
    v46 = _InterlockedCompareExchange((volatile signed __int32 *)&PopIrpWorkerMutex, 1, 0);
    if ( v46 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PopIrpWorkerMutex, v46);
    __writecr8(v45);
    KeAbPostRelease((ULONG_PTR)&PopIrpWorkerMutex);
  }
  while ( v44 );
  return PsTerminateSystemThread(0);
}
