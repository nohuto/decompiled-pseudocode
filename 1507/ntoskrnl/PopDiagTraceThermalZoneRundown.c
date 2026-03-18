/*
 * XREFs of PopDiagTraceThermalZoneRundown @ 0x14023EB7C
 * Callers:
 *     PopThermalTraceRundownEvents @ 0x14023CD24 (PopThermalTraceRundownEvents.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceThermalZoneRundown(
        PDEVICE_OBJECT DeviceObject,
        char a2,
        int a3,
        char a4,
        char a5,
        char a6,
        char a7)
{
  _UNKNOWN **DeviceNode; // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v12; // rbx
  unsigned __int16 v13; // cx
  __int16 v15; // [rsp+38h] [rbp-71h] BYREF
  __int16 v16; // [rsp+3Ch] [rbp-6Dh] BYREF
  unsigned __int16 v17; // [rsp+40h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-61h] BYREF
  void *v19; // [rsp+58h] [rbp-51h]
  int v20; // [rsp+60h] [rbp-49h]
  int v21; // [rsp+64h] [rbp-45h]
  __int16 *v22; // [rsp+68h] [rbp-41h]
  __int64 v23; // [rsp+70h] [rbp-39h]
  int *v24; // [rsp+78h] [rbp-31h]
  __int64 v25; // [rsp+80h] [rbp-29h]
  __int16 *v26; // [rsp+88h] [rbp-21h]
  __int64 v27; // [rsp+90h] [rbp-19h]
  char *v28; // [rsp+98h] [rbp-11h]
  __int64 v29; // [rsp+A0h] [rbp-9h]
  char *v30; // [rsp+A8h] [rbp-1h]
  __int64 v31; // [rsp+B0h] [rbp+7h]
  char *v32; // [rsp+B8h] [rbp+Fh]
  __int64 v33; // [rsp+C0h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+47h] BYREF
  int v35; // [rsp+108h] [rbp+5Fh] BYREF

  DeviceNode = &retaddr;
  v35 = a3;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(DeviceNode) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_RUNDOWN);
    if ( (_BYTE)DeviceNode )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v12 = DeviceAttachmentBaseRef;
      if ( DeviceAttachmentBaseRef )
        DeviceNode = (_UNKNOWN **)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
      else
        DeviceNode = 0LL;
      if ( DeviceNode )
      {
        v13 = *((_WORD *)DeviceNode + 140) >> 1;
        UserData.Ptr = (ULONGLONG)&v17;
        v17 = v13;
        *(_QWORD *)&UserData.Size = 2LL;
        v19 = DeviceNode[36];
        v21 = 0;
        v20 = 2 * v13;
        v16 = a2 != 0;
        v23 = 2LL;
        v22 = &v16;
        v24 = &v35;
        v25 = 4LL;
        v15 = a4 != 0;
        v26 = &v15;
        v27 = 2LL;
        v28 = &a5;
        v29 = 4LL;
        v30 = &a6;
        v31 = 4LL;
        v32 = &a7;
        v33 = 4LL;
        LOBYTE(DeviceNode) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_RUNDOWN, 0LL, 8u, &UserData);
      }
      if ( v12 )
        LOBYTE(DeviceNode) = ObfDereferenceObjectWithTag(v12, 0x746C6644u);
    }
  }
  return (char)DeviceNode;
}
