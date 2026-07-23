/*
 * XREFs of PopTraceZoneCr3Tripped @ 0x140209EC4
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140147464 (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x140134254 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopTraceZoneCr3Tripped(int a1, __int64 a2)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v5; // rbx
  PVOID DeviceNode; // r9
  __int64 v7; // r9
  int v8; // r11d
  char v9; // cl
  bool v10; // zf
  const WCHAR *v11; // rdx
  LPCWSTR v12; // r10
  bool v14; // [rsp+38h] [rbp-69h] BYREF
  char v15; // [rsp+39h] [rbp-68h] BYREF
  bool v16; // [rsp+3Ah] [rbp-67h] BYREF
  int v17; // [rsp+3Ch] [rbp-65h] BYREF
  int v18; // [rsp+40h] [rbp-61h] BYREF
  int v19; // [rsp+44h] [rbp-5Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-59h] BYREF
  int *v21; // [rsp+68h] [rbp-39h]
  int v22; // [rsp+70h] [rbp-31h]
  int v23; // [rsp+74h] [rbp-2Dh]
  bool *v24; // [rsp+78h] [rbp-29h]
  int v25; // [rsp+80h] [rbp-21h]
  int v26; // [rsp+84h] [rbp-1Dh]
  char *v27; // [rsp+88h] [rbp-19h]
  int v28; // [rsp+90h] [rbp-11h]
  int v29; // [rsp+94h] [rbp-Dh]
  bool *v30; // [rsp+98h] [rbp-9h]
  int v31; // [rsp+A0h] [rbp-1h]
  int v32; // [rsp+A4h] [rbp+3h]
  int *v33; // [rsp+A8h] [rbp+7h]
  int v34; // [rsp+B0h] [rbp+Fh]
  int v35; // [rsp+B4h] [rbp+13h]
  int *v36; // [rsp+B8h] [rbp+17h]
  int v37; // [rsp+C0h] [rbp+1Fh]
  int v38; // [rsp+C4h] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C8h] [rbp+27h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+D8h] [rbp+37h] BYREF

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(a2 + 48));
  v5 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
    DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  if ( DeviceNode )
  {
    DeviceAttachmentBaseRef = *(PDEVICE_OBJECT *)(a2 + 848);
    if ( hProvider.LevelPlus1 > 5 )
    {
      LOBYTE(DeviceAttachmentBaseRef) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
      if ( (_BYTE)DeviceAttachmentBaseRef )
      {
        v9 = *(_BYTE *)(a2 + 65);
        v10 = *(_BYTE *)(a2 + 360) == 0;
        v25 = 1;
        v14 = !v10;
        v28 = 1;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v15 = v9 & 1;
        v19 = *(_DWORD *)(a2 + 264);
        v21 = &v17;
        v24 = &v14;
        v27 = &v15;
        v30 = &v16;
        v16 = (v9 & 4) != 0;
        v33 = &v18;
        v22 = 4;
        v31 = 1;
        v11 = *(const WCHAR **)(v7 + 288);
        v34 = 4;
        v37 = 4;
        v36 = &v19;
        v17 = a1;
        v18 = v8;
        TlgCreateWsz(&pDesc, v11);
        TlgCreateWsz(&v40, v12);
        LOBYTE(DeviceAttachmentBaseRef) = TlgWrite(&hProvider, &unk_14027D079, 0LL, 0LL, 0xAu, &pData);
      }
    }
  }
  if ( v5 )
    LOBYTE(DeviceAttachmentBaseRef) = ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  return (char)DeviceAttachmentBaseRef;
}
