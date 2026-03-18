/*
 * XREFs of PopDiagTraceZoneCriticalTripPointExceeded @ 0x1406BA338
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140170C90 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     PopDiagTraceTripPointExceeded @ 0x1406BA100 (PopDiagTraceTripPointExceeded.c)
 */

void __fastcall PopDiagTraceZoneCriticalTripPointExceeded(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  REGHANDLE v4; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v6; // rbx
  PVOID DeviceNode; // rdi

  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC)
      || EtwEventEnabled(v4, &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM) )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a2);
      v6 = DeviceAttachmentBaseRef;
      if ( DeviceAttachmentBaseRef )
        DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
      else
        DeviceNode = 0LL;
      if ( DeviceNode )
      {
        PopDiagTraceTripPointExceeded(
          *((_WORD *)DeviceNode + 140) >> 1,
          *((_QWORD *)DeviceNode + 36),
          *(_DWORD *)(a1 + 28) / 0xAu,
          &POP_ETW_EVENT_CRITICAL_TRIP_POINT_DIAGNOSTIC);
        PopDiagTraceTripPointExceeded(
          *((_WORD *)DeviceNode + 140) >> 1,
          *((_QWORD *)DeviceNode + 36),
          *(_DWORD *)(a1 + 28) / 0xAu,
          &POP_ETW_EVENT_CRITICAL_TRIP_POINT_SYSTEM);
      }
      if ( v6 )
        ObfDereferenceObject(v6);
    }
  }
}
