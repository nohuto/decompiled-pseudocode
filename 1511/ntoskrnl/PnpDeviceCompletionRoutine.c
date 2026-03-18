/*
 * XREFs of PnpDeviceCompletionRoutine @ 0x140099428
 * Callers:
 *     <none>
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x14001A954 (PnpDiagnosticTraceObject.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x1400994E8 (PnpDeviceCompletionRequestDestroy.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140099508 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     IoFindDeviceThatFailedIrp @ 0x1400F2748 (IoFindDeviceThatFailedIrp.c)
 *     PnpTraceStartDevice @ 0x140105F10 (PnpTraceStartDevice.c)
 */

__int64 __fastcall PnpDeviceCompletionRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 DeviceThatFailedIrp; // rax

  v3 = 0LL;
  *(_QWORD *)(*(_QWORD *)(a3 + 16) + 72LL) = 0LL;
  if ( *(_BYTE *)(a2 + 65) )
    *(_DWORD *)(a3 + 36) = 1;
  *(_QWORD *)(a3 + 48) = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(a3 + 40) = *(_DWORD *)(a2 + 48);
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 56));
  if ( *(int *)(a3 + 40) < 0 )
  {
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a2);
    if ( DeviceThatFailedIrp )
      v3 = *(_QWORD *)(DeviceThatFailedIrp + 8);
  }
  PnpDeviceCompletionQueueDispatchedEntryCompleted(a1, a3);
  if ( *(_DWORD *)(a3 + 32) == 781 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Stop, (unsigned __int16 *)(*(_QWORD *)(a3 + 16) + 40LL));
  else
    PnpTraceStartDevice(*(_QWORD *)(a3 + 16), *(unsigned int *)(a3 + 40), v3);
  PnpDeviceCompletionRequestDestroy(a3);
  pIoFreeIrp(a2);
  return 3221225494LL;
}
