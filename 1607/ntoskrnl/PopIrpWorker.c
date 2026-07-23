/*
 * XREFs of PopIrpWorker @ 0x14012C0E4
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 *     PoDeviceAcquireIrp @ 0x14012C65C (PoDeviceAcquireIrp.c)
 *     PopPepDeviceDState @ 0x14012C810 (PopPepDeviceDState.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PsTerminateSystemThread @ 0x1404CFC1C (PsTerminateSystemThread.c)
 */

NTSTATUS __fastcall PopIrpWorker(__int64 *Entry)
{
  unsigned __int8 CurrentIrql; // r12
  __int64 v3; // r9
  LARGE_INTEGER *Timeout; // r15
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r10
  char v16; // si
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 v19; // rdx
  int v20; // ecx
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  int v23; // r8d
  bool v24; // al
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rax
  char v28; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v31[7]; // [rsp+48h] [rbp-38h] BYREF
  LARGE_INTEGER v32; // [rsp+A0h] [rbp+20h] BYREF

  CurrentIrql = 0;
  memset(v31, 0, 0x30uLL);
  v31[2] = KeGetCurrentThread();
  if ( Entry )
  {
    if ( *Entry )
      KeReleaseSemaphoreEx(*Entry, 0, 1, v3, 0);
    ExFreeToNPagedLookasideList(&PopDynamicIrpWorkerLookaside, Entry);
    v32.QuadPart = -100000000LL;
    Timeout = &v32;
    LOBYTE(v31[5]) = 0;
  }
  else
  {
    Timeout = 0LL;
    LOBYTE(v31[5]) = 1;
  }
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  --PopIrpWorkerPendingCount;
  ++PopIrpWorkerCount;
  if ( *(__int64 **)qword_1403027D8 != &PopIrpThreadList )
    __fastfail(3u);
  v31[0] = &PopIrpThreadList;
  v31[1] = qword_1403027D8;
  *(_QWORD *)qword_1403027D8 = v31;
  qword_1403027D8 = (__int64)v31;
LABEL_7:
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  do
  {
    if ( KeWaitForSingleObject(&PopIrpWorkerSemaphore, Executive, 0, 0, Timeout) != 258 )
    {
      KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
      v5 = PopIrpWorkerList;
      v6 = *(_QWORD *)PopIrpWorkerList;
      if ( *(__int64 **)(PopIrpWorkerList + 8) != &PopIrpWorkerList || *(_QWORD *)(v6 + 8) != PopIrpWorkerList )
        __fastfail(3u);
      PopIrpWorkerList = *(_QWORD *)PopIrpWorkerList;
      *(_QWORD *)(v6 + 8) = &PopIrpWorkerList;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      v7 = ++PopIrpWorkerInFlightCount;
      if ( PopCreateIrpWorkerAllowed
        && v7 == PopIrpWorkerCount
        && (unsigned int)PopIrpWorkerCount < 0xF
        && !PopIrpWorkerPendingCount
        && !PopIrpWorkerRequested )
      {
        PopIrpWorkerRequested = 1;
        KeSetEvent(&PopIrpWorkerControlEvent, 0, 0);
      }
      KeReleaseGuardedMutex(&PopIrpWorkerMutex);
      v8 = v5 - 168;
      v9 = *(_QWORD *)(v5 - 168 + 184);
      v10 = v5 - 168;
      v11 = *(_QWORD *)(v9 + 40);
      LOBYTE(v12) = *(_BYTE *)(v9 + 1);
      PoDeviceAcquireIrp(v10, v12, v11, v13);
      v14 = 2LL;
      v15 = *(_QWORD *)(v8 + 72LL * (*(char *)(v8 + 66) - 1) + 272);
      if ( *(_BYTE *)(v15 + 184) == 2 && *(_DWORD *)(v15 + 188) == 1 && *(_QWORD *)(v15 + 32) == v11 )
      {
        v17 = *(_QWORD *)(v15 + 24);
        v18 = *(_QWORD *)(v15 + 200);
        v19 = v17 ? *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL) : 0LL;
        v20 = *(_DWORD *)(v19 + 140);
        *(_DWORD *)(v19 + 140) = *(_DWORD *)(v15 + 192);
        if ( v18 )
        {
          _m_prefetchw((const void *)(v18 + 32));
          v21 = *(_DWORD *)(v18 + 32);
          do
          {
            v22 = v21;
            v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 32), v21, v21);
          }
          while ( v22 != v21 );
          v23 = *(_DWORD *)(v15 + 192);
          *(_BYTE *)(v15 + 208) = v21 & 1;
          v24 = v23 != v20 && (v23 == 1 || (v21 & 1) == 0);
          *(_BYTE *)(v15 + 209) = v24;
          if ( v24 )
          {
            if ( v23 == 1 )
              _InterlockedOr((volatile signed __int32 *)(v18 + 32), 2u);
            LOBYTE(v14) = *(_BYTE *)(v15 + 208);
            PopPepDeviceDState(*(_QWORD *)(v18 + 56), *(unsigned int *)(v15 + 192), 0LL, v14);
          }
        }
      }
      v16 = 0;
      v31[3] = v8;
      v31[4] = v11;
      if ( (*(_DWORD *)(v11 + 48) & 0x2000) == 0 && v8 == PopInrushIrp )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v16 = 1;
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v11 + 8) + 288LL))(v11, v8);
      if ( v16 )
        __writecr8(CurrentIrql);
      *(_OWORD *)&v31[3] = 0LL;
      ObfDereferenceObjectWithTag((PVOID)v11, 0x746C6644u);
      ExAcquireFastMutex(&PopIrpWorkerMutex);
      --PopIrpWorkerInFlightCount;
      goto LABEL_7;
    }
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    if ( PopCreateIrpWorkerAllowed
      && ((v25 = PopIrpWorkerCount - 1, PopIrpWorkerInFlightCount != PopIrpWorkerCount - 1) || PopIrpWorkerPendingCount) )
    {
      v26 = v31[0];
      v27 = v31[1];
      v28 = 0;
      if ( *(_QWORD **)(v31[0] + 8LL) != v31 || *(_QWORD **)v31[1] != v31 )
        __fastfail(3u);
      *(_QWORD *)v31[1] = v31[0];
      *(_QWORD *)(v26 + 8) = v27;
      PopIrpWorkerCount = v25;
    }
    else
    {
      v28 = 1;
    }
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
  }
  while ( v28 );
  return PsTerminateSystemThread(0);
}
