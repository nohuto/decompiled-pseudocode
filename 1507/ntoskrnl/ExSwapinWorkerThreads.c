/*
 * XREFs of ExSwapinWorkerThreads @ 0x140564D10
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403EC318 (PopUnlockAfterSleepWorker.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     ExShutdownSystem @ 0x1404040B8 (ExShutdownSystem.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400215A8 (KeInitializeApc.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeSetKernelStackSwapEnable @ 0x14006FE90 (KeSetKernelStackSwapEnable.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PsGetNextProcessThread @ 0x140420350 (PsGetNextProcessThread.c)
 */

void __fastcall ExSwapinWorkerThreads(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  PEPROCESS v2; // rdi
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *i; // rdx
  struct _KTHREAD *NextProcessThread; // rax
  struct _KTHREAD *v11; // rbx
  unsigned __int8 v12; // bl
  signed __int32 v13; // eax
  signed __int32 v14[8]; // [rsp+0h] [rbp-D8h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v16[96]; // [rsp+60h] [rbp-78h] BYREF
  BOOLEAN Enable; // [rsp+E0h] [rbp+8h] BYREF

  Enable = a1;
  CurrentThread = KeGetCurrentThread();
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = PsInitialSystemProcess;
  v4 = KeAbPreAcquire((ULONG_PTR)&ExpWorkerSwapinMutex, 0LL, 0LL, v3);
  v7 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpWorkerSwapinMutex, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&ExpWorkerSwapinMutex, v4);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  qword_1403250A8 = (__int64)KeGetCurrentThread();
  dword_1403250D0 = CurrentIrql;
  ExpWorkersCanSwap = Enable;
  _InterlockedOr(v14, 0);
  for ( i = 0LL; ; i = v11 )
  {
    NextProcessThread = (struct _KTHREAD *)PsGetNextProcessThread((__int64)v2, i, v5, v6);
    v11 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( ((__int64)NextProcessThread[1].Queue & 1) != 0 )
    {
      if ( NextProcessThread == CurrentThread )
      {
        KeSetKernelStackSwapEnable(Enable);
      }
      else
      {
        KeInitializeApc(
          (__int64)v16,
          (__int64)NextProcessThread,
          0,
          (__int64)ExpSetSwappingKernelApc,
          0LL,
          0LL,
          0,
          (__int64)&Enable);
        if ( KeInsertQueueApc((__int64)v16, (__int64)&Event, 0LL, 3) )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          KeResetEvent(&Event);
        }
      }
    }
  }
  qword_1403250A8 = 0LL;
  v12 = dword_1403250D0;
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)&ExpWorkerSwapinMutex, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&ExpWorkerSwapinMutex, v13);
  __writecr8(v12);
  KeAbPostRelease((ULONG_PTR)&ExpWorkerSwapinMutex);
}
