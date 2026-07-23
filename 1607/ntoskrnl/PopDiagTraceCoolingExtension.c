/*
 * XREFs of PopDiagTraceCoolingExtension @ 0x14052E2B4
 * Callers:
 *     PopRundownThermalRequests @ 0x14052C224 (PopRundownThermalRequests.c)
 *     PopAssociateThermalRequest @ 0x14056CB00 (PopAssociateThermalRequest.c)
 *     PopCoolingExtensionPnpNotification @ 0x14066BA0C (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x14066BB64 (PopDeactiveThermalRequest.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceCoolingExtension(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v5; // rbx
  _WORD *DeviceNode; // rdx
  bool v7; // zf
  __int64 v8; // rax
  int v9; // ecx
  char v10; // [rsp+30h] [rbp-59h] BYREF
  __int16 v11; // [rsp+34h] [rbp-55h] BYREF
  BOOL v12; // [rsp+38h] [rbp-51h] BYREF
  BOOL v13; // [rsp+3Ch] [rbp-4Dh] BYREF
  BOOL v14; // [rsp+40h] [rbp-49h] BYREF
  __int64 v15; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-39h] BYREF
  BOOL *v17; // [rsp+60h] [rbp-29h]
  int v18; // [rsp+68h] [rbp-21h]
  int v19; // [rsp+6Ch] [rbp-1Dh]
  char *v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]
  int v22; // [rsp+7Ch] [rbp-Dh]
  BOOL *v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  __int64 *v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]
  __int16 *v29; // [rsp+A0h] [rbp+17h]
  int v30; // [rsp+A8h] [rbp+1Fh]
  int v31; // [rsp+ACh] [rbp+23h]
  __int64 v32; // [rsp+B0h] [rbp+27h]
  int v33; // [rsp+B8h] [rbp+2Fh]
  int v34; // [rsp+BCh] [rbp+33h]

  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, a2) )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(a1 + 48));
    v5 = DeviceAttachmentBaseRef;
    if ( DeviceAttachmentBaseRef )
      DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    else
      DeviceNode = 0LL;
    if ( DeviceNode )
    {
      v11 = DeviceNode[140] >> 1;
      v7 = *(_QWORD *)(a1 + 128) == 0LL;
      UserData.Size = 4;
      v18 = 4;
      v13 = !v7;
      v7 = *(_QWORD *)(a1 + 136) == 0LL;
      v24 = 4;
      v15 = a1;
      v12 = !v7;
      v7 = *(_BYTE *)(a1 + 65) == 0;
      v21 = 1;
      v27 = 8;
      UserData.Reserved = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v14 = !v7;
      v10 = *(_BYTE *)(a1 + 66);
      UserData.Ptr = (ULONGLONG)&v12;
      v17 = &v13;
      v20 = &v10;
      v23 = &v14;
      v26 = &v15;
      v29 = &v11;
      v30 = 2;
      v8 = *((_QWORD *)DeviceNode + 36);
      v9 = (unsigned __int16)DeviceNode[140];
      v34 = 0;
      v32 = v8;
      v33 = v9;
      EtwWrite(PopDiagHandle, a2, 0LL, 7u, &UserData);
    }
    if ( v5 )
      ObfDereferenceObject(v5);
  }
}
