/*
 * XREFs of MiQueueWorkingSetRequest @ 0x14013135C
 * Callers:
 *     MiFindContiguousPages @ 0x1401044A0 (MiFindContiguousPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x14013133C (MiCaptureAllWorkingSetAccessBits.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5DD4 (MmFlushAllFilesystemPages.c)
 *     MmEmptyAllWorkingSets @ 0x1401EA3D8 (MmEmptyAllWorkingSets.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x1401EA500 (MmTrimFilePagesFromWorkingSets.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall MiQueueWorkingSetRequest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  NTSTATUS result; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 6248);
  if ( v2 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
    if ( !*(_DWORD *)(v2 + 40) )
      KeResetEvent((PRKEVENT)v2);
    *(_DWORD *)(v2 + 40) |= a2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeSetEvent((PRKEVENT)(v2 + 104), 0, 0);
    return KeWaitForSingleObject((PVOID)v2, WrVirtualMemory, 0, 0, 0LL);
  }
  return result;
}
