/*
 * XREFs of PopSqmThermalCriticalEvent @ 0x1406BEA0C
 * Callers:
 *     PopSqmThermalCriticalShutdown @ 0x1406BEBA4 (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x1406BEBB8 (PopSqmThermalHibernate.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1400EFFDC (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
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
  bool v15; // [rsp+30h] [rbp-79h] BYREF
  bool v16; // [rsp+31h] [rbp-78h] BYREF
  char v17; // [rsp+32h] [rbp-77h] BYREF
  bool v18; // [rsp+33h] [rbp-76h] BYREF
  int v19; // [rsp+34h] [rbp-75h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  bool *v23; // [rsp+60h] [rbp-49h]
  int v24; // [rsp+68h] [rbp-41h]
  int v25; // [rsp+6Ch] [rbp-3Dh]
  char *v26; // [rsp+70h] [rbp-39h]
  int v27; // [rsp+78h] [rbp-31h]
  int v28; // [rsp+7Ch] [rbp-2Dh]
  bool *v29; // [rsp+80h] [rbp-29h]
  int v30; // [rsp+88h] [rbp-21h]
  int v31; // [rsp+8Ch] [rbp-1Dh]
  int *v32; // [rsp+90h] [rbp-19h]
  int v33; // [rsp+98h] [rbp-11h]
  int v34; // [rsp+9Ch] [rbp-Dh]
  int *v35; // [rsp+A0h] [rbp-9h]
  int v36; // [rsp+A8h] [rbp-1h]
  int v37; // [rsp+ACh] [rbp+3h]
  int *v38; // [rsp+B0h] [rbp+7h]
  int v39; // [rsp+B8h] [rbp+Fh]
  int v40; // [rsp+BCh] [rbp+13h]
  bool *v41; // [rsp+C0h] [rbp+17h]
  int v42; // [rsp+C8h] [rbp+1Fh]
  int v43; // [rsp+CCh] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp+27h] BYREF

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(a1 + 48));
  v7 = DeviceAttachmentBaseRef;
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
        v11 = *(_BYTE *)(a1 + 65);
        v12 = *(_BYTE *)(a1 + 360) == 0;
        v24 = 1;
        v18 = !v12;
        v27 = 1;
        v17 = v11 & 1;
        v16 = (v11 & 4) != 0;
        v23 = &v18;
        v30 = 1;
        v26 = &v17;
        v33 = 4;
        v15 = v9 > a2;
        v29 = &v16;
        v25 = 0;
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v37 = 0;
        v40 = 0;
        v43 = 0;
        v32 = &v19;
        v35 = (int *)&v21;
        v38 = (int *)&v20;
        v36 = 4;
        v39 = 4;
        v42 = 1;
        v13 = *(const WCHAR **)(v10 + 288);
        v41 = &v15;
        v19 = a3;
        v21 = v9;
        v20 = a2;
        TlgCreateWsz(&pDesc, v13);
        LOBYTE(DeviceAttachmentBaseRef) = TlgWrite(&pCallbackContext, &unk_1402A4D4C, 0LL, 0LL, 0xAu, &pData);
      }
    }
  }
  if ( v7 )
    LOBYTE(DeviceAttachmentBaseRef) = ObfDereferenceObject(v7);
  return (char)DeviceAttachmentBaseRef;
}
