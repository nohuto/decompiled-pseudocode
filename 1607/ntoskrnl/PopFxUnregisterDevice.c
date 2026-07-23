/*
 * XREFs of PopFxUnregisterDevice @ 0x14066D670
 * Callers:
 *     PopFxUnregisterDeviceOrWait @ 0x140483F08 (PopFxUnregisterDeviceOrWait.c)
 *     PoFxUnregisterDevice @ 0x14066C644 (PoFxUnregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     PoFxActivateComponent @ 0x1400BEF70 (PoFxActivateComponent.c)
 *     PopFxAssignDeviceToDevNode @ 0x140142408 (PopFxAssignDeviceToDevNode.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401CCC38 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxDestroyDeviceDpm @ 0x140202660 (PopFxDestroyDeviceDpm.c)
 *     PopFxRemoveDevice @ 0x140203788 (PopFxRemoveDevice.c)
 *     PopPluginUnregisterDevice @ 0x1402048EC (PopPluginUnregisterDevice.c)
 *     PopPepUnregisterDevice @ 0x14066F9A4 (PopPepUnregisterDevice.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x1406714E8 (PopDiagTraceFxDeviceUnregistration.c)
 */

void __fastcall PopFxUnregisterDevice(ULONG_PTR BugCheckParameter2)
{
  unsigned int i; // edi
  __int64 j; // rdi
  struct _KEVENT *v4; // rdi
  __int64 k; // r8
  ULONG_PTR v6; // rcx

  if ( (*(_DWORD *)(BugCheckParameter2 + 616) & 1) == 0 )
  {
    for ( i = 0; i < *(_DWORD *)(BugCheckParameter2 + 620); ++i )
      PoFxActivateComponent(BugCheckParameter2, i, 2);
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(BugCheckParameter2 + 620); j = (unsigned int)(j + 1) )
      KeWaitForSingleObject(
        (PVOID)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 624) + 8 * j) + 104LL),
        Executive,
        0,
        0,
        0LL);
  }
  v4 = *(struct _KEVENT **)(BugCheckParameter2 + 48);
  if ( v4 )
  {
    PopFxRemoveDevice(BugCheckParameter2, (_QWORD *)BugCheckParameter2);
    PopDiagTraceFxDeviceUnregistration(v4);
    PopFxAssignDeviceToDevNode((__int64)v4, 0LL);
  }
  for ( k = 0LL; (unsigned int)k < *(_DWORD *)(BugCheckParameter2 + 620); k = (unsigned int)(k + 1) )
  {
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 624) + 8 * k) + 96LL) > 0 )
      _InterlockedDecrement(&PopFxResidentComponentCount);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 208), 0LL, 0x20u);
  PopPepUnregisterDevice(*(_QWORD *)(BugCheckParameter2 + 56));
  v6 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v6 )
    PopPluginUnregisterDevice(v6, *(_QWORD *)(BugCheckParameter2 + 72));
  if ( v4 )
    KeSetEvent(v4 + 4, 0, 0);
  if ( (*(_DWORD *)(BugCheckParameter2 + 616) & 1) != 0 )
    PopFxDestroyDeviceDpm((__int64)v4, BugCheckParameter2);
}
