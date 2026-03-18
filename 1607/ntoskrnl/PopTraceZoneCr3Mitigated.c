/*
 * XREFs of PopTraceZoneCr3Mitigated @ 0x140209F78
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140146EF4 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x140670550 (PopThermalZoneRemove.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400FB62C (IoGetDeviceAttachmentBaseRef.c)
 *     _TlgCreateWsz @ 0x140133CE4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

char __fastcall PopTraceZoneCr3Mitigated(int a1, __int64 a2)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v5; // rbx
  PVOID DeviceNode; // r9
  __int64 v7; // r9
  int v8; // eax
  const WCHAR *v9; // rdx
  int v11; // [rsp+38h] [rbp-19h] BYREF
  int v12; // [rsp+3Ch] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  int *v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+37h] BYREF

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(a2 + 48));
  v5 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
    DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  if ( DeviceNode )
  {
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      LOBYTE(DeviceAttachmentBaseRef) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
      if ( (_BYTE)DeviceAttachmentBaseRef )
      {
        v8 = *(_DWORD *)(a2 + 256);
        v16 = 0;
        v19 = 0;
        v12 = v8;
        v14 = &v11;
        v15 = 4;
        v18 = 4;
        v9 = *(const WCHAR **)(v7 + 288);
        v17 = &v12;
        v11 = a1;
        TlgCreateWsz(&pDesc, v9);
        LOBYTE(DeviceAttachmentBaseRef) = TlgWrite(&pCallbackContext, &unk_14027D014, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  if ( v5 )
    LOBYTE(DeviceAttachmentBaseRef) = ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  return (char)DeviceAttachmentBaseRef;
}
