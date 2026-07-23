/*
 * XREFs of PopSqmThermalCriticalEvent @ 0x140676960
 * Callers:
 *     PopSqmThermalCriticalShutdown @ 0x140676B24 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x140676B38 (PopSqmThermalHibernate.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x140134254 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopSqmThermalCriticalEvent(__int64 a1, unsigned int a2, int a3)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v7; // rbx
  PVOID DeviceNode; // r10
  unsigned int v9; // r9d
  __int64 v10; // r10
  char v11; // cl
  bool v12; // zf
  const WCHAR *v13; // rdx
  LPCWSTR v14; // r11
  bool v16; // [rsp+30h] [rbp-89h] BYREF
  char v17; // [rsp+31h] [rbp-88h] BYREF
  bool v18; // [rsp+32h] [rbp-87h] BYREF
  bool v19; // [rsp+33h] [rbp-86h] BYREF
  int v20; // [rsp+34h] [rbp-85h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v22; // [rsp+3Ch] [rbp-7Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-79h] BYREF
  bool *v24; // [rsp+60h] [rbp-59h]
  int v25; // [rsp+68h] [rbp-51h]
  int v26; // [rsp+6Ch] [rbp-4Dh]
  char *v27; // [rsp+70h] [rbp-49h]
  int v28; // [rsp+78h] [rbp-41h]
  int v29; // [rsp+7Ch] [rbp-3Dh]
  bool *v30; // [rsp+80h] [rbp-39h]
  int v31; // [rsp+88h] [rbp-31h]
  int v32; // [rsp+8Ch] [rbp-2Dh]
  int *v33; // [rsp+90h] [rbp-29h]
  int v34; // [rsp+98h] [rbp-21h]
  int v35; // [rsp+9Ch] [rbp-1Dh]
  int *v36; // [rsp+A0h] [rbp-19h]
  int v37; // [rsp+A8h] [rbp-11h]
  int v38; // [rsp+ACh] [rbp-Dh]
  int *v39; // [rsp+B0h] [rbp-9h]
  int v40; // [rsp+B8h] [rbp-1h]
  int v41; // [rsp+BCh] [rbp+3h]
  bool *v42; // [rsp+C0h] [rbp+7h]
  int v43; // [rsp+C8h] [rbp+Fh]
  int v44; // [rsp+CCh] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp+17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+E0h] [rbp+27h] BYREF

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(a1 + 48));
  v7 = DeviceAttachmentBaseRef;
  if ( DeviceAttachmentBaseRef )
    DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  if ( DeviceNode )
  {
    DeviceAttachmentBaseRef = *(PDEVICE_OBJECT *)(a1 + 848);
    if ( hProvider.LevelPlus1 > 5 )
    {
      LOBYTE(DeviceAttachmentBaseRef) = TlgKeywordOn(&hProvider, 0x800000000000uLL);
      if ( (_BYTE)DeviceAttachmentBaseRef )
      {
        v11 = *(_BYTE *)(a1 + 65);
        v12 = *(_BYTE *)(a1 + 360) == 0;
        v25 = 1;
        v16 = !v12;
        v28 = 1;
        v17 = v11 & 1;
        v18 = (v11 & 4) != 0;
        v24 = &v16;
        v31 = 1;
        v27 = &v17;
        v34 = 4;
        v19 = v9 > a2;
        v30 = &v18;
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v44 = 0;
        v33 = &v20;
        v36 = (int *)&v21;
        v39 = (int *)&v22;
        v37 = 4;
        v40 = 4;
        v43 = 1;
        v13 = *(const WCHAR **)(v10 + 288);
        v42 = &v19;
        v20 = a3;
        v21 = v9;
        v22 = a2;
        TlgCreateWsz(&pDesc, v13);
        TlgCreateWsz(&v46, v14);
        LOBYTE(DeviceAttachmentBaseRef) = TlgWrite(&hProvider, &unk_14027D63B, 0LL, 0LL, 0xBu, &pData);
      }
    }
  }
  if ( v7 )
    LOBYTE(DeviceAttachmentBaseRef) = ObfDereferenceObject(v7);
  return (char)DeviceAttachmentBaseRef;
}
