/*
 * XREFs of PopTraceThermalZonePassiveHistogram @ 0x14011A180
 * Callers:
 *     PopThermalSxEntry @ 0x14011A0E0 (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x1401EE6AC (PopThermalTelemetryWorker.c)
 *     PopThermalZoneRemove @ 0x140638118 (PopThermalZoneRemove.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     _TlgCreateWsz @ 0x140092310 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140098860 (IoGetDeviceAttachmentBaseRef.c)
 *     PopDiagSnapPassiveHistogram @ 0x14011A254 (PopDiagSnapPassiveHistogram.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

char __fastcall PopTraceThermalZonePassiveHistogram(__int64 a1)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v3; // rbx
  _QWORD *DeviceNode; // rdi
  const WCHAR *v5; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-79h] BYREF
  _DWORD *v8; // [rsp+58h] [rbp-59h]
  int v9; // [rsp+60h] [rbp-51h]
  int v10; // [rsp+64h] [rbp-4Dh]
  __int64 v11; // [rsp+68h] [rbp-49h]
  _DWORD v12[2]; // [rsp+70h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-39h] BYREF
  _BYTE *v14; // [rsp+88h] [rbp-29h]
  int v15; // [rsp+90h] [rbp-21h]
  int v16; // [rsp+94h] [rbp-1Dh]
  void *v17; // [rsp+98h] [rbp-19h]
  int v18; // [rsp+A0h] [rbp-11h]
  int v19; // [rsp+A4h] [rbp-Dh]
  _BYTE v20[80]; // [rsp+A8h] [rbp-9h] BYREF

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(a1 + 48));
  v3 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
    DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  if ( DeviceNode )
  {
    LOBYTE(DeviceAttachmentBaseRef) = PopDiagSnapPassiveHistogram(a1 + 488, v20);
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      LOBYTE(DeviceAttachmentBaseRef) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
      if ( (_BYTE)DeviceAttachmentBaseRef )
      {
        v10 = 0;
        v12[1] = 0;
        v8 = v12;
        v11 = DeviceNode[36];
        v12[0] = *((unsigned __int16 *)DeviceNode + 140);
        v9 = 2;
        TlgCreateWsz(&pDesc, v5);
        v16 = 0;
        v19 = 0;
        v17 = &PopThermalTrackingThresholds;
        v14 = v20;
        v15 = 80;
        v18 = 20;
        LOBYTE(DeviceAttachmentBaseRef) = TlgWrite(&pCallbackContext, &unk_140254AB2, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  if ( v3 )
    LOBYTE(DeviceAttachmentBaseRef) = ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  return (char)DeviceAttachmentBaseRef;
}
