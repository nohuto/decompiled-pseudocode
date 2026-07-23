/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x1400F7224
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x1400F5A50 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400F6D70 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ZwSetInformationThread @ 0x14015A390 (ZwSetInformationThread.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x1404FEF14 (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int UserThread; // eax
  unsigned int v7; // edi
  int v9; // [rsp+30h] [rbp-68h]
  __int64 v10; // [rsp+60h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    v7 = 128;
    goto LABEL_8;
  }
  KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
  {
    v7 = 128;
  }
  else
  {
    ++*(_DWORD *)(a1 + 136);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    UserThread = RtlpCreateUserThreadEx(
                   *(HANDLE *)(a1 + 40),
                   *(_QWORD *)(a1 + 56),
                   *(_QWORD *)(a1 + 64),
                   v9,
                   *(PUSER_THREAD_START_ROUTINE *)(a1 + 24),
                   *(PVOID *)(a1 + 32),
                   (__int64)&Handle,
                   (__int64)&v10);
    *(_DWORD *)(a1 + 160) = UserThread;
    v7 = UserThread;
    if ( UserThread >= 0 )
    {
      if ( *(_DWORD *)(a1 + 156) )
        ZwSetInformationThread(Handle, ThreadBasePriority, (PVOID)(a1 + 156), 4u);
      ObCloseHandle(Handle, 0);
      goto LABEL_7;
    }
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    --*(_DWORD *)(a1 + 136);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_7:
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 104));
LABEL_8:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v3, v4, v5);
  return v7;
}
