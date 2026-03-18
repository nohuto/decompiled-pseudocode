/*
 * XREFs of PopTraceThermalRequestPassiveHistogram @ 0x14023F0BC
 * Callers:
 *     PopCoolingTelemetryWorker @ 0x14023690C (PopCoolingTelemetryWorker.c)
 *     PopDeactiveThermalRequest @ 0x1406B23F8 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1406B296C (PopOrphanCoolingExtension.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1400EFFDC (_TlgCreateWsz.c)
 *     PopDiagSnapPassiveHistogram @ 0x140148594 (PopDiagSnapPassiveHistogram.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PoStoreDiagnosticContext @ 0x140233764 (PoStoreDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopTraceThermalRequestPassiveHistogram(__int64 a1)
{
  unsigned __int64 *v2; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v4; // rdi
  _QWORD *DeviceNode; // r14
  unsigned __int64 *PoolWithTag; // rax
  const WCHAR *v7; // r11
  SIZE_T NumberOfBytes[2]; // [rsp+30h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD *v10; // [rsp+60h] [rbp-A0h]
  int v11; // [rsp+68h] [rbp-98h]
  int v12; // [rsp+6Ch] [rbp-94h]
  __int64 v13; // [rsp+70h] [rbp-90h]
  _DWORD v14[2]; // [rsp+78h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v16; // [rsp+90h] [rbp-70h]
  int v17; // [rsp+98h] [rbp-68h]
  int v18; // [rsp+9Ch] [rbp-64h]
  void *v19; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A8h] [rbp-58h]
  int v21; // [rsp+ACh] [rbp-54h]
  _DWORD v22[20]; // [rsp+B0h] [rbp-50h] BYREF

  v2 = 0LL;
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 32) + 48LL));
  v4 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
    DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  if ( DeviceNode )
  {
    PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, NumberOfBytes);
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x50455654u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (int)PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), PoolWithTag, NumberOfBytes) >= 0 )
      {
        PopDiagSnapPassiveHistogram(a1 + 40, v22);
        if ( pCallbackContext.LevelPlus1 > 5 )
        {
          if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
          {
            v12 = 0;
            v14[1] = 0;
            v10 = v14;
            v13 = DeviceNode[36];
            v14[0] = *((unsigned __int16 *)DeviceNode + 140);
            v11 = 2;
            TlgCreateWsz(&pDesc, v7);
            v18 = 0;
            v21 = 0;
            v19 = &PopThermalTrackingThresholds;
            v16 = v22;
            v17 = 80;
            v20 = 20;
            TlgWrite(&pCallbackContext, &unk_1402A497F, 0LL, 0LL, 7u, &pData);
          }
        }
      }
    }
  }
  if ( v4 )
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x50455654u);
}
