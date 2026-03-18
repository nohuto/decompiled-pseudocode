/*
 * XREFs of MiQueueWorkingSetRequest @ 0x14011B7BC
 * Callers:
 *     MiFindContiguousPages @ 0x1400BE4E0 (MiFindContiguousPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x14011B79C (MiCaptureAllWorkingSetAccessBits.c)
 *     MmFlushAllFilesystemPages @ 0x1401D5180 (MmFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x1401D86C4 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1401D87EC (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 */

NTSTATUS __fastcall MiQueueWorkingSetRequest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  NTSTATUS result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 5616);
  if ( v2 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( !*(_DWORD *)(v2 + 40) )
      KeResetEvent((PRKEVENT)v2);
    *(_DWORD *)(v2 + 40) |= a2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeSetEvent((PRKEVENT)(v2 + 104), 0, 0);
    return KeWaitForSingleObject((PVOID)v2, WrVirtualMemory, 0, 0, 0LL);
  }
  return result;
}
