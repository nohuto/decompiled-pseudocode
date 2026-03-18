/*
 * XREFs of PopFxUnregisterDevice @ 0x1406B4870
 * Callers:
 *     PopFxUnregisterDeviceOrWait @ 0x140538690 (PopFxUnregisterDeviceOrWait.c)
 *     PoFxUnregisterDevice @ 0x1406B37CC (PoFxUnregisterDevice.c)
 * Callees:
 *     PoFxActivateComponent @ 0x140027650 (PoFxActivateComponent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     PopFxAssignDeviceToDevNode @ 0x140166C10 (PopFxAssignDeviceToDevNode.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401FA0BC (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxDestroyDeviceDpm @ 0x1402379F4 (PopFxDestroyDeviceDpm.c)
 *     PopFxRemoveDevice @ 0x140238E00 (PopFxRemoveDevice.c)
 *     PopPluginUnregisterDevice @ 0x14023A304 (PopPluginUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x1406B72FC (PopPepUnregisterDevice.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x1406B9418 (PopDiagTraceFxDeviceUnregistration.c)
 */

void __fastcall PopFxUnregisterDevice(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int i; // edi
  __int64 j; // rdi
  struct _KEVENT *v7; // rdi
  __int64 k; // r8
  ULONG_PTR v9; // rcx

  if ( (*(_DWORD *)(BugCheckParameter2 + 616) & 1) == 0 )
  {
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 620); ++i )
      PoFxActivateComponent(BugCheckParameter2, i, 2LL);
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(BugCheckParameter2 + 620); j = (unsigned int)(j + 1) )
      KeWaitForSingleObject(
        (PVOID)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 624) + 8 * j) + 104LL),
        Executive,
        0,
        0,
        0LL);
  }
  v7 = *(struct _KEVENT **)(BugCheckParameter2 + 48);
  if ( v7 )
  {
    PopFxRemoveDevice(BugCheckParameter2, (_QWORD *)BugCheckParameter2, a3, a4);
    PopDiagTraceFxDeviceUnregistration(v7);
    PopFxAssignDeviceToDevNode((__int64)v7, 0LL);
  }
  for ( k = 0LL; (unsigned int)k < *(_DWORD *)(BugCheckParameter2 + 620); k = (unsigned int)(k + 1) )
  {
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 624) + 8 * k) + 96LL) > 0 )
      _InterlockedDecrement(&PopFxResidentComponentCount);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 208), 0LL, 0x20u);
  PopPepUnregisterDevice(*(_QWORD *)(BugCheckParameter2 + 56));
  v9 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v9 )
    PopPluginUnregisterDevice(v9, *(_QWORD *)(BugCheckParameter2 + 72));
  if ( v7 )
    KeSetEvent(v7 + 4, 0, 0);
  if ( (*(_DWORD *)(BugCheckParameter2 + 616) & 1) != 0 )
    PopFxDestroyDeviceDpm((__int64)v7, BugCheckParameter2);
}
