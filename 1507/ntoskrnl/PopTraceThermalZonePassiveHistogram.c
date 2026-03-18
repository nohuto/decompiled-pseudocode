/*
 * XREFs of PopTraceThermalZonePassiveHistogram @ 0x140148454
 * Callers:
 *     PopThermalSxEntry @ 0x14014822C (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x14023CB00 (PopThermalTelemetryWorker.c)
 *     PopThermalZoneRemove @ 0x1406B8088 (PopThermalZoneRemove.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     PopDiagSnapPassiveHistogram @ 0x140148594 (PopDiagSnapPassiveHistogram.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char __fastcall PopTraceThermalZonePassiveHistogram(__int64 a1)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v3; // rbx
  PVOID DeviceNode; // r11
  __int64 v5; // r11
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-69h] BYREF
  _DWORD *v8; // [rsp+50h] [rbp-49h]
  int v9; // [rsp+58h] [rbp-41h]
  int v10; // [rsp+5Ch] [rbp-3Dh]
  __int64 v11; // [rsp+60h] [rbp-39h]
  _DWORD v12[2]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE *v13; // [rsp+70h] [rbp-29h]
  int v14; // [rsp+78h] [rbp-21h]
  int v15; // [rsp+7Ch] [rbp-1Dh]
  void *v16; // [rsp+80h] [rbp-19h]
  int v17; // [rsp+88h] [rbp-11h]
  int v18; // [rsp+8Ch] [rbp-Dh]
  _BYTE v19[80]; // [rsp+90h] [rbp-9h] BYREF

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(a1 + 48));
  v3 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
    DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  if ( DeviceNode )
  {
    LOBYTE(DeviceAttachmentBaseRef) = PopDiagSnapPassiveHistogram(a1 + 488, v19);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      LOBYTE(DeviceAttachmentBaseRef) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
      if ( (_BYTE)DeviceAttachmentBaseRef )
      {
        v10 = 0;
        v12[1] = 0;
        v15 = 0;
        v18 = 0;
        v8 = v12;
        v11 = *(_QWORD *)(v5 + 288);
        v12[0] = *(unsigned __int16 *)(v5 + 280);
        v13 = v19;
        v16 = &PopThermalTrackingThresholds;
        v9 = 2;
        v14 = 80;
        v17 = 20;
        LOBYTE(DeviceAttachmentBaseRef) = TlgWrite(&pCallbackContext, &unk_1402A49FE, 0LL, 0LL, 6u, &pData);
      }
    }
  }
  if ( v3 )
    LOBYTE(DeviceAttachmentBaseRef) = ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  return (char)DeviceAttachmentBaseRef;
}
