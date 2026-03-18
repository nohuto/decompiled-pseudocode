/*
 * XREFs of MiQueueWorkingSetRequest @ 0x14015A008
 * Callers:
 *     MiFindContiguousPages @ 0x14005BA20 (MiFindContiguousPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x140159FE8 (MiCaptureAllWorkingSetAccessBits.c)
 *     MmFlushAllFilesystemPages @ 0x140217008 (MmFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x14021B770 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14021B898 (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall MiQueueWorkingSetRequest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  NTSTATUS result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 5256);
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
