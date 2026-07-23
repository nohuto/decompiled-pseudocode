/*
 * XREFs of PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402094F8
 * Callers:
 *     PopThermalWorker @ 0x140574480 (PopThermalWorker.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceThermalZoneThrottlePerfTrack(int a1, int a2, struct _DEVICE_OBJECT *a3)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v5; // rbx
  unsigned __int16 Lock; // cx
  struct _LIST_ENTRY *Flink; // rax
  __int16 v9; // [rsp+38h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *v11; // [rsp+58h] [rbp+17h]
  int v12; // [rsp+60h] [rbp+1Fh]
  int v13; // [rsp+64h] [rbp+23h]
  __int16 *v14; // [rsp+68h] [rbp+27h]
  int v15; // [rsp+70h] [rbp+2Fh]
  int v16; // [rsp+74h] [rbp+33h]
  struct _LIST_ENTRY *v17; // [rsp+78h] [rbp+37h]
  int v18; // [rsp+80h] [rbp+3Fh]
  int v19; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  int v21; // [rsp+A8h] [rbp+67h] BYREF
  int v22; // [rsp+B0h] [rbp+6Fh] BYREF

  DeviceAttachmentBaseRef = (PDEVICE_OBJECT)&retaddr;
  v22 = a2;
  v21 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(DeviceAttachmentBaseRef) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_PERFTRACK);
    if ( (_BYTE)DeviceAttachmentBaseRef )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a3);
      v5 = DeviceAttachmentBaseRef;
      if ( DeviceAttachmentBaseRef )
        DeviceAttachmentBaseRef = (PDEVICE_OBJECT)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
      if ( DeviceAttachmentBaseRef )
      {
        Lock = DeviceAttachmentBaseRef->DeviceLock.Header.Lock;
        UserData.Reserved = 0;
        v13 = 0;
        v16 = 0;
        UserData.Ptr = (ULONGLONG)&v22;
        v11 = &v21;
        v9 = Lock >> 1;
        v14 = &v9;
        UserData.Size = 4;
        v12 = 4;
        v15 = 2;
        Flink = DeviceAttachmentBaseRef->DeviceLock.Header.WaitListHead.Flink;
        v19 = 0;
        v17 = Flink;
        v18 = 2 * (Lock >> 1);
        LOBYTE(DeviceAttachmentBaseRef) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_THERMAL_PERFTRACK, 0LL, 4u, &UserData);
      }
      if ( v5 )
        LOBYTE(DeviceAttachmentBaseRef) = ObfDereferenceObjectWithTag(v5, 0x746C6644u);
    }
  }
  return (char)DeviceAttachmentBaseRef;
}
