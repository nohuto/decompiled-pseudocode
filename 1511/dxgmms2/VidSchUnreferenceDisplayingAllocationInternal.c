/*
 * XREFs of VidSchUnreferenceDisplayingAllocationInternal @ 0x1C0022BF0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiUpdateFlipDeviceStatus @ 0x1C00023C8 (VidSchiUpdateFlipDeviceStatus.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E980 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalFlipEvents @ 0x1C000FED8 (VidSchiSignalFlipEvents.c)
 *     VidSchiDecrementDeviceReference @ 0x1C00110F8 (VidSchiDecrementDeviceReference.c)
 */

void __fastcall VidSchUnreferenceDisplayingAllocationInternal(__int64 a1, __int64 a2, char **a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v7; // rbx
  int updated; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v5 = a4;
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)*a3 + 2) + 8LL));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1824), &LockHandle);
  VidSchiCheckPendingDeviceCommand(a3[2]);
  v7 = *(_QWORD *)(a1 + 8 * v5 + 2592);
  if ( v7 )
  {
    updated = VidSchiUpdateFlipDeviceStatus(v7);
    VidSchiSignalFlipEvents(v7, updated);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  VidSchiDecrementDeviceReference(a3[2], 0);
}
