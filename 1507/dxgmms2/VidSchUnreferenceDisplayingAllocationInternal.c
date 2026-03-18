/*
 * XREFs of VidSchUnreferenceDisplayingAllocationInternal @ 0x1C001D5D0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiDecrementDeviceReference @ 0x1C0001150 (VidSchiDecrementDeviceReference.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0002C34 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalFlipEvents @ 0x1C001A3FC (VidSchiSignalFlipEvents.c)
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C001B530 (VidSchiUpdateFlipDeviceStatus.c)
 */

void __fastcall VidSchUnreferenceDisplayingAllocationInternal(__int64 a1, __int64 a2, char **a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  int updated; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = a4;
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)*a3 + 2) + 8LL));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1872), &LockHandle);
  VidSchiCheckPendingDeviceCommand(a3[2], v7, v8);
  v9 = *(_QWORD *)(a1 + 8 * v5 + 2640);
  if ( v9 )
  {
    updated = VidSchiUpdateFlipDeviceStatus(v9);
    VidSchiSignalFlipEvents(v9, updated);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  VidSchiDecrementDeviceReference(a3[2], 0);
}
