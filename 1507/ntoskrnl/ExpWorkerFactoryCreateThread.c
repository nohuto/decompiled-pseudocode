/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x14006CAF0
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x14006C640 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x14006CC00 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ZwSetInformationThread @ 0x14017F190 (ZwSetInformationThread.c)
 *     ZwResumeThread @ 0x14017FA30 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x14017FA50 (ZwTerminateThread.c)
 *     RtlpCreateUserThreadEx @ 0x1404A4C10 (RtlpCreateUserThreadEx.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  int UserThread; // eax
  unsigned int v3; // esi
  int v5; // [rsp+30h] [rbp-68h]
  __int64 v6; // [rsp+60h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF
  HANDLE ThreadHandle; // [rsp+A0h] [rbp+8h] BYREF

  UserThread = RtlpCreateUserThreadEx(
                 *(HANDLE *)(a1 + 40),
                 *(_QWORD *)(a1 + 56),
                 *(_QWORD *)(a1 + 64),
                 v5,
                 *(PUSER_THREAD_START_ROUTINE *)(a1 + 24),
                 *(PVOID *)(a1 + 32),
                 (__int64)&ThreadHandle,
                 (__int64)&v6);
  *(_DWORD *)(a1 + 152) = UserThread;
  v3 = UserThread;
  if ( UserThread >= 0 )
  {
    if ( *(_DWORD *)(a1 + 148) )
      ZwSetInformationThread(ThreadHandle, ThreadBasePriority, (PVOID)(a1 + 148), 4u);
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
      v3 = 128;
    else
      ++*(_DWORD *)(a1 + 128);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v3 == 128 )
      ZwTerminateThread(ThreadHandle, 128);
    else
      ZwResumeThread(ThreadHandle, 0LL);
    ObCloseHandle(ThreadHandle, 0);
  }
  return v3;
}
