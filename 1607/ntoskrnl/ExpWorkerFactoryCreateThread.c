/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x1400F93E4
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x1400F7C10 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400F8F30 (ExpWorkerFactoryCheckCreate.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     ZwSetInformationThread @ 0x140159E20 (ZwSetInformationThread.c)
 *     ObCloseHandle @ 0x14050C73C (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x14051BB24 (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int UserThread; // eax
  unsigned int v8; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v3 = (*(_DWORD *)(a1 + 152) >> 7) & 0x10;
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    v8 = 128;
    goto LABEL_8;
  }
  KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
  {
    v8 = 128;
  }
  else
  {
    ++*(_DWORD *)(a1 + 136);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    UserThread = RtlpCreateUserThreadEx(*(_QWORD *)(a1 + 40), 0, v3, 0, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64));
    *(_DWORD *)(a1 + 160) = UserThread;
    v8 = UserThread;
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v4, v5, v6);
  return v8;
}
