/*
 * XREFs of PopDiagTraceZoneS4TripPointExceeded @ 0x1406723E8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140147464 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     PopDiagTraceTripPointExceeded @ 0x1406720C4 (PopDiagTraceTripPointExceeded.c)
 */

void __fastcall PopDiagTraceZoneS4TripPointExceeded(__int64 a1, struct _DEVICE_OBJECT *a2)
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
          *(_DWORD *)(a1 + 76) / 0xAu,
          &POP_ETW_EVENT_S4_TRIP_POINT_DIAGNOSTIC);
        PopDiagTraceTripPointExceeded(
          *((_WORD *)DeviceNode + 140) >> 1,
          *((_QWORD *)DeviceNode + 36),
          *(_DWORD *)(a1 + 76) / 0xAu,
          &POP_ETW_EVENT_S4_TRIP_POINT_SYSTEM);
      }
      if ( v6 )
        ObfDereferenceObject(v6);
    }
  }
}
