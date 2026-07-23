/*
 * XREFs of ExSwapinWorkerThreads @ 0x14052F230
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403C95C8 (PopUnlockAfterSleepWorker.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     ExShutdownSystem @ 0x1403DFB38 (ExShutdownSystem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeSetKernelStackSwapEnable @ 0x14007B664 (KeSetKernelStackSwapEnable.c)
 *     KeInsertQueueApc @ 0x1400C7E70 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400EEDA8 (KeInitializeApc.c)
 *     PsGetNextProcessThread @ 0x1404F32E0 (PsGetNextProcessThread.c)
 */

void __fastcall ExSwapinWorkerThreads(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  PEPROCESS v2; // rdi
  struct _KTHREAD *i; // rdx
  struct _KTHREAD *NextProcessThread; // rax
  struct _KTHREAD *v5; // rbx
  signed __int32 v6[8]; // [rsp+0h] [rbp-C8h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v8[96]; // [rsp+60h] [rbp-68h] BYREF
  BOOLEAN Enable; // [rsp+D0h] [rbp+8h] BYREF

  Enable = a1;
  CurrentThread = KeGetCurrentThread();
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = PsInitialSystemProcess;
  ExAcquireFastMutex(&ExpWorkerSwapinMutex);
  ExpWorkersCanSwap = Enable;
  _InterlockedOr(v6, 0);
  for ( i = 0LL; ; i = v5 )
  {
    NextProcessThread = (struct _KTHREAD *)PsGetNextProcessThread((__int64)v2, i);
    v5 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( (*((_DWORD *)&NextProcessThread[1].SwapListEntry + 3) & 1) != 0 )
    {
      if ( NextProcessThread == CurrentThread )
      {
        KeSetKernelStackSwapEnable(Enable);
      }
      else
      {
        KeInitializeApc(
          (__int64)v8,
          (__int64)NextProcessThread,
          0,
          (__int64)ExpSetSwappingKernelApc,
          0LL,
          0LL,
          0,
          (__int64)&Enable);
        if ( (unsigned __int8)KeInsertQueueApc((__int64)v8, (__int64)&Event, 0LL, 3u) )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          KeResetEvent(&Event);
        }
      }
    }
  }
  KeReleaseGuardedMutex(&ExpWorkerSwapinMutex);
}
