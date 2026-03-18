/*
 * XREFs of PopTraceThermalZonePassiveHistogram @ 0x140124B6C
 * Callers:
 *     PopThermalSxEntry @ 0x140124ACC (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x14020724C (PopThermalTelemetryWorker.c)
 *     PopThermalZoneRemove @ 0x140670550 (PopThermalZoneRemove.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400FB62C (IoGetDeviceAttachmentBaseRef.c)
 *     PopDiagSnapPassiveHistogram @ 0x140124C40 (PopDiagSnapPassiveHistogram.c)
 *     _TlgCreateWsz @ 0x140133CE4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

char __fastcall PopTraceThermalZonePassiveHistogram(__int64 a1)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v3; // rbx
  _QWORD *DeviceNode; // rdi
  const WCHAR *v5; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD *v8; // [rsp+58h] [rbp-B0h]
  __int64 v9; // [rsp+60h] [rbp-A8h]
  __int64 v10; // [rsp+68h] [rbp-A0h]
  _DWORD v11[2]; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v13; // [rsp+88h] [rbp-80h]
  int v14; // [rsp+90h] [rbp-78h]
  int v15; // [rsp+94h] [rbp-74h]
  void *v16; // [rsp+98h] [rbp-70h]
  int v17; // [rsp+A0h] [rbp-68h]
  int v18; // [rsp+A4h] [rbp-64h]
  _BYTE v19[96]; // [rsp+A8h] [rbp-60h] BYREF

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
        v11[1] = 0;
        v8 = v11;
        v10 = DeviceNode[36];
        v11[0] = *((unsigned __int16 *)DeviceNode + 140);
        v9 = 2LL;
        TlgCreateWsz(&pDesc, v5);
        v15 = 0;
        v18 = 0;
        v16 = &PopThermalTrackingThresholds;
        v13 = v19;
        v14 = 84;
        v17 = 21;
        LOBYTE(DeviceAttachmentBaseRef) = TlgWrite(&pCallbackContext, &unk_14027CF02, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  if ( v3 )
    LOBYTE(DeviceAttachmentBaseRef) = ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  return (char)DeviceAttachmentBaseRef;
}
