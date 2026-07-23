/*
 * XREFs of MiQueueWorkingSetRequest @ 0x1401318CC
 * Callers:
 *     MiFindContiguousPages @ 0x140102220 (MiFindContiguousPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x1401318AC (MiCaptureAllWorkingSetAccessBits.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5C00 (MmFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x1401EA204 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1401EA32C (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall MiQueueWorkingSetRequest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  NTSTATUS result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 6248);
  if ( v2 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
    if ( !*(_DWORD *)(v2 + 40) )
      KeResetEvent((PRKEVENT)v2);
    *(_DWORD *)(v2 + 40) |= a2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeSetEvent((PRKEVENT)(v2 + 104), 0, 0);
    return KeWaitForSingleObject((PVOID)v2, WrVirtualMemory, 0, 0, 0LL);
  }
  return result;
}
