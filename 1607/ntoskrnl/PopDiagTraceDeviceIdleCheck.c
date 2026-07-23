/*
 * XREFs of PopDiagTraceDeviceIdleCheck @ 0x140207F00
 * Callers:
 *     PopScanIdleList @ 0x1400094AC (PopScanIdleList.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDeviceIdleCheck(__int64 a1, int a2, int a3)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  _WORD *DeviceNode; // rdx
  char v6; // al
  char v7; // al
  int v8; // ecx
  char v10; // [rsp+38h] [rbp-89h] BYREF
  char v11; // [rsp+39h] [rbp-88h] BYREF
  __int16 v12; // [rsp+3Ch] [rbp-85h] BYREF
  struct _DEVICE_OBJECT *v13; // [rsp+40h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-79h] BYREF
  struct _DEVICE_OBJECT **v15; // [rsp+58h] [rbp-69h]
  __int64 v16; // [rsp+60h] [rbp-61h]
  __int16 *v17; // [rsp+68h] [rbp-59h]
  __int64 v18; // [rsp+70h] [rbp-51h]
  __int64 v19; // [rsp+78h] [rbp-49h]
  int v20; // [rsp+80h] [rbp-41h]
  int v21; // [rsp+84h] [rbp-3Dh]
  __int64 v22; // [rsp+88h] [rbp-39h]
  __int64 v23; // [rsp+90h] [rbp-31h]
  __int64 v24; // [rsp+98h] [rbp-29h]
  __int64 v25; // [rsp+A0h] [rbp-21h]
  int *v26; // [rsp+A8h] [rbp-19h]
  __int64 v27; // [rsp+B0h] [rbp-11h]
  int *v28; // [rsp+B8h] [rbp-9h]
  __int64 v29; // [rsp+C0h] [rbp-1h]
  __int64 v30; // [rsp+C8h] [rbp+7h]
  __int64 v31; // [rsp+D0h] [rbp+Fh]
  char *v32; // [rsp+D8h] [rbp+17h]
  __int64 v33; // [rsp+E0h] [rbp+1Fh]
  char *v34; // [rsp+E8h] [rbp+27h]
  __int64 v35; // [rsp+F0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+5Fh] BYREF
  int v37; // [rsp+130h] [rbp+6Fh] BYREF
  int v38; // [rsp+138h] [rbp+77h] BYREF

  DeviceAttachmentBaseRef = (PDEVICE_OBJECT)&retaddr;
  v38 = a3;
  v37 = a2;
  v13 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(DeviceAttachmentBaseRef) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK);
    if ( (_BYTE)DeviceAttachmentBaseRef )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(a1 + 24));
      v13 = DeviceAttachmentBaseRef;
      if ( DeviceAttachmentBaseRef )
      {
        DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
        if ( DeviceNode )
        {
          v12 = DeviceNode[20] >> 1;
          v6 = *(_BYTE *)(a1 + 52) - 1;
          UserData.Ptr = a1 + 24;
          v10 = v6;
          v7 = *(_BYTE *)(a1 + 56) - 1;
          *(_QWORD *)&UserData.Size = 8LL;
          v11 = v7;
          v15 = &v13;
          v17 = &v12;
          v16 = 8LL;
          v18 = 2LL;
          v8 = (unsigned __int16)DeviceNode[20];
          v19 = *((_QWORD *)DeviceNode + 6);
          v22 = a1 + 16;
          v24 = a1 + 20;
          v26 = &v37;
          v28 = &v38;
          v30 = a1 + 12;
          v32 = &v10;
          v34 = &v11;
          v20 = v8;
          v33 = 1LL;
          v35 = 1LL;
          v21 = 0;
          v23 = 4LL;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          v31 = 4LL;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK, 0LL, 0xBu, &UserData);
          DeviceAttachmentBaseRef = v13;
        }
        if ( DeviceAttachmentBaseRef )
          LOBYTE(DeviceAttachmentBaseRef) = ObfDereferenceObjectWithTag(DeviceAttachmentBaseRef, 0x746C6644u);
      }
    }
  }
  return (char)DeviceAttachmentBaseRef;
}
