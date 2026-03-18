/*
 * XREFs of ExpDeleteWorkerFactory @ 0x14006BD68
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     IoFreeMiniCompletionPacket @ 0x1404A4E9C (IoFreeMiniCompletionPacket.c)
 */

void __fastcall ExpDeleteWorkerFactory(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rdi
  bool v4; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 34LL) = 1;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(void **)(v2 + 8);
  v4 = *(_BYTE *)(v2 + 32) == 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x66577845u);
  ObCloseHandle(*(HANDLE *)(a1 + 40), 0);
  ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  if ( v4 )
  {
    IoFreeMiniCompletionPacket(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
  }
}
