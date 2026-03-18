/*
 * XREFs of PopDiagTraceThermalCoolingMode @ 0x14054CC34
 * Callers:
 *     PopThermalWorker @ 0x14054C618 (PopThermalWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140098860 (IoGetDeviceAttachmentBaseRef.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceThermalCoolingMode(PDEVICE_OBJECT DeviceObject, __int16 a2)
{
  _UNKNOWN **DeviceNode; // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v6; // rbx
  const WCHAR *v7; // rdx
  __int16 v9; // [rsp+38h] [rbp-19h] BYREF
  unsigned __int16 v10; // [rsp+3Ch] [rbp-15h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  void *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  __int16 *v16; // [rsp+78h] [rbp+27h]
  __int64 v17; // [rsp+80h] [rbp+2Fh]
  wchar_t *Buffer; // [rsp+88h] [rbp+37h]
  int v19; // [rsp+90h] [rbp+3Fh]
  int v20; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  DeviceNode = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(DeviceNode) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COOLING_MODE);
    if ( (_BYTE)DeviceNode )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
      v6 = DeviceAttachmentBaseRef;
      if ( DeviceAttachmentBaseRef )
        DeviceNode = (_UNKNOWN **)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
      else
        DeviceNode = 0LL;
      if ( DeviceNode )
      {
        v10 = *((_WORD *)DeviceNode + 140) >> 1;
        UserData.Ptr = (ULONGLONG)&v10;
        v7 = L"active";
        *(_QWORD *)&UserData.Size = 2LL;
        v13 = DeviceNode[36];
        v15 = 0;
        v14 = 2 * v10;
        if ( a2 )
          v7 = L"passive";
        RtlInitUnicodeString(&DestinationString, v7);
        v16 = &v9;
        Buffer = DestinationString.Buffer;
        v9 = DestinationString.Length >> 1;
        v19 = 2 * (DestinationString.Length >> 1);
        v17 = 2LL;
        v20 = 0;
        LOBYTE(DeviceNode) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_COOLING_MODE, 0LL, 4u, &UserData);
      }
      if ( v6 )
        LOBYTE(DeviceNode) = ObfDereferenceObject(v6);
    }
  }
  return (char)DeviceNode;
}
