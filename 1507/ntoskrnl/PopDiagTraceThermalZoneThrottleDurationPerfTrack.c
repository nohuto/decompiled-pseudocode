/*
 * XREFs of PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x14023ED18
 * Callers:
 *     PopThermalWorker @ 0x1405C3BD8 (PopThermalWorker.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceThermalZoneThrottleDurationPerfTrack(int a1, struct _DEVICE_OBJECT *a2)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v4; // rbx
  unsigned __int16 Lock; // cx
  struct _LIST_ENTRY *Flink; // rax
  __int16 v7; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int16 *v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+54h] [rbp-1Ch]
  struct _LIST_ENTRY *v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+64h] [rbp-Ch]
  int v15; // [rsp+80h] [rbp+10h] BYREF

  v15 = a1;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_DURATION_PERFTRACK) )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a2);
    v4 = DeviceAttachmentBaseRef;
    if ( DeviceAttachmentBaseRef )
      DeviceAttachmentBaseRef = (PDEVICE_OBJECT)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    if ( DeviceAttachmentBaseRef )
    {
      Lock = DeviceAttachmentBaseRef->DeviceLock.Header.Lock;
      UserData.Reserved = 0;
      v11 = 0;
      v7 = Lock >> 1;
      UserData.Ptr = (ULONGLONG)&v15;
      v9 = &v7;
      UserData.Size = 4;
      v10 = 2;
      Flink = DeviceAttachmentBaseRef->DeviceLock.Header.WaitListHead.Flink;
      v14 = 0;
      v12 = Flink;
      v13 = 2 * (Lock >> 1);
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_THERMAL_DURATION_PERFTRACK, 0LL, 3u, &UserData);
    }
    if ( v4 )
      ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  }
}
