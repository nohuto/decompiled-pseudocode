/*
 * XREFs of ExSwapinWorkerThreads @ 0x1404F5C2C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14039DEDC (PopUnlockAfterSleepWorker.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     ExShutdownSystem @ 0x1403B2E04 (ExShutdownSystem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     KeInitializeApc @ 0x14002C320 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400313A0 (KeInsertQueueApc.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     KeSetKernelStackSwapEnable @ 0x1400DE5E0 (KeSetKernelStackSwapEnable.c)
 *     PsGetNextProcessThread @ 0x140424290 (PsGetNextProcessThread.c)
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
    if ( ((__int64)NextProcessThread[1].Queue & 1) != 0 )
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
        if ( (unsigned __int8)KeInsertQueueApc((__int64)v8, (__int64)&Event, 0LL, 3) )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          KeResetEvent(&Event);
        }
      }
    }
  }
  KeReleaseGuardedMutex(&ExpWorkerSwapinMutex);
}
