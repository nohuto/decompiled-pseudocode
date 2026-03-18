/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x1400C66BC
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x1400C59E0 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x1400C5D50 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     ZwSetInformationThread @ 0x1401507C0 (ZwSetInformationThread.c)
 *     ZwResumeThread @ 0x140151060 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x140151080 (ZwTerminateThread.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x140487A7C (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  int UserThread; // eax
  unsigned int v3; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF
  HANDLE ThreadHandle; // [rsp+A0h] [rbp+8h]

  UserThread = RtlpCreateUserThreadEx(
                 *(_QWORD *)(a1 + 40),
                 0,
                 (*(_DWORD *)(a1 + 144) & 0x800 | 0x80u) >> 7,
                 0,
                 *(_QWORD *)(a1 + 56),
                 *(_QWORD *)(a1 + 64));
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
