/*
 * XREFs of PopDiagTraceThermalZoneRundown @ 0x1401F07E8
 * Callers:
 *     PopThermalTraceRundownEvents @ 0x1401EE73C (PopThermalTraceRundownEvents.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140098860 (IoGetDeviceAttachmentBaseRef.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceThermalZoneRundown(
        PDEVICE_OBJECT DeviceObject,
        unsigned __int16 *a2,
        char a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  _UNKNOWN **DeviceNode; // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v13; // rbx
  unsigned __int16 v14; // cx
  int v15; // ecx
  __int16 v17; // [rsp+38h] [rbp-99h] BYREF
  __int16 v18; // [rsp+3Ch] [rbp-95h] BYREF
  unsigned __int16 v19; // [rsp+40h] [rbp-91h] BYREF
  __int16 v20; // [rsp+44h] [rbp-8Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-89h] BYREF
  void *v22; // [rsp+58h] [rbp-79h]
  int v23; // [rsp+60h] [rbp-71h]
  int v24; // [rsp+64h] [rbp-6Dh]
  __int16 *v25; // [rsp+68h] [rbp-69h]
  __int64 v26; // [rsp+70h] [rbp-61h]
  int *v27; // [rsp+78h] [rbp-59h]
  __int64 v28; // [rsp+80h] [rbp-51h]
  __int16 *v29; // [rsp+88h] [rbp-49h]
  __int64 v30; // [rsp+90h] [rbp-41h]
  char *v31; // [rsp+98h] [rbp-39h]
  __int64 v32; // [rsp+A0h] [rbp-31h]
  char *v33; // [rsp+A8h] [rbp-29h]
  __int64 v34; // [rsp+B0h] [rbp-21h]
  char *v35; // [rsp+B8h] [rbp-19h]
  __int64 v36; // [rsp+C0h] [rbp-11h]
  __int16 *v37; // [rsp+C8h] [rbp-9h]
  __int64 v38; // [rsp+D0h] [rbp-1h]
  __int64 v39; // [rsp+D8h] [rbp+7h]
  int v40; // [rsp+E0h] [rbp+Fh]
  int v41; // [rsp+E4h] [rbp+13h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+3Fh] BYREF
  int v43; // [rsp+130h] [rbp+5Fh] BYREF

  DeviceNode = &retaddr;
  v43 = a4;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(DeviceNode) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_RUNDOWN);
    if ( (_BYTE)DeviceNode )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v13 = DeviceAttachmentBaseRef;
      if ( DeviceAttachmentBaseRef )
        DeviceNode = (_UNKNOWN **)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
      else
        DeviceNode = 0LL;
      if ( DeviceNode )
      {
        v14 = *((_WORD *)DeviceNode + 140) >> 1;
        UserData.Ptr = (ULONGLONG)&v19;
        v19 = v14;
        *(_QWORD *)&UserData.Size = 2LL;
        v22 = DeviceNode[36];
        v24 = 0;
        v23 = 2 * v14;
        v17 = a3 != 0;
        v26 = 2LL;
        v25 = &v17;
        v27 = &v43;
        v28 = 4LL;
        v18 = a5 != 0;
        v15 = *a2;
        v29 = &v18;
        v40 = v15;
        v31 = &a6;
        v30 = 2LL;
        v33 = &a7;
        v32 = 4LL;
        v35 = &a8;
        v20 = (unsigned __int16)v15 >> 1;
        v37 = &v20;
        v39 = *((_QWORD *)a2 + 1);
        v34 = 4LL;
        v36 = 4LL;
        v38 = 2LL;
        v41 = 0;
        LOBYTE(DeviceNode) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_RUNDOWN, 0LL, 0xAu, &UserData);
      }
      if ( v13 )
        LOBYTE(DeviceNode) = ObfDereferenceObjectWithTag(v13, 0x746C6644u);
    }
  }
  return (char)DeviceNode;
}
