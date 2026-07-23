/*
 * XREFs of PopDiagTraceThermalRequest @ 0x14052E238
 * Callers:
 *     PopRundownThermalRequests @ 0x14052C224 (PopRundownThermalRequests.c)
 *     PopAssociateThermalRequest @ 0x14056CB00 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x14066BB64 (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14066BD0C (PopOrphanCoolingExtension.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PoStoreDiagnosticContext @ 0x1401FEDF8 (PoStoreDiagnosticContext.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopDiagTraceThermalRequest(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  unsigned __int64 *v4; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v6; // rdi
  _WORD *DeviceNode; // r14
  unsigned __int64 *PoolWithTag; // rax
  char *v9; // r10
  char *v10; // r11
  char *v11; // r12
  unsigned __int16 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  bool v15; // zf
  int v16; // ecx
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v18; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v20; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int16 v21; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v22; // [rsp+44h] [rbp-BCh] BYREF
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  BOOL *v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  __int64 *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  __int16 *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int16 *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int16 *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  __int16 *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  __int64 v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+DCh] [rbp-24h]
  char *v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  char *v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]
  char *v47; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+108h] [rbp+8h]
  int v49; // [rsp+10Ch] [rbp+Ch]

  v4 = 0LL;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, a2) )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 32) + 48LL));
    v6 = DeviceAttachmentBaseRef;
    if ( DeviceAttachmentBaseRef )
      DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    else
      DeviceNode = 0LL;
    if ( DeviceNode )
    {
      PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), 0LL, &NumberOfBytes);
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x50455654u);
      v4 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (int)PoStoreDiagnosticContext(*(_QWORD *)(a1 + 24), PoolWithTag, &NumberOfBytes) >= 0 )
        {
          v9 = (char *)v4 + v4[2];
          v10 = (char *)v4 + v4[3];
          v11 = (char *)v4 + v4[4];
          v12 = NumberOfBytes - *((_WORD *)v4 + 16);
          v13 = -1LL;
          v21 = v12;
          v14 = -1LL;
          do
            ++v14;
          while ( *(_WORD *)&v9[2 * v14] );
          v19 = v14;
          do
            ++v13;
          while ( *(_WORD *)&v10[2 * v13] );
          v20 = v13;
          v15 = *(_BYTE *)(a1 + 17) == 0;
          v18 = DeviceNode[140] >> 1;
          v24 = a1;
          v22 = !v15;
          v17 = *(_BYTE *)(a1 + 16);
          UserData.Ptr = (ULONGLONG)&v17;
          v26 = &v22;
          v28 = &v24;
          v30 = &v18;
          v32 = &v19;
          v34 = &v20;
          v36 = (__int16 *)&v21;
          *(_QWORD *)&UserData.Size = 1LL;
          v27 = 4LL;
          v29 = 8LL;
          v31 = 2LL;
          v33 = 2LL;
          v35 = 2LL;
          v37 = 2LL;
          v16 = (unsigned __int16)DeviceNode[140];
          v38 = *((_QWORD *)DeviceNode + 36);
          v39 = v16;
          v42 = 2 * (unsigned __int16)v14;
          v40 = 0;
          v45 = 2 * (unsigned __int16)v13;
          v48 = v12;
          v41 = v9;
          v43 = 0;
          v44 = v10;
          v46 = 0;
          v47 = v11;
          v49 = 0;
          EtwWrite(PopDiagHandle, a2, 0LL, 0xBu, &UserData);
        }
      }
    }
    if ( v6 )
      ObfDereferenceObject(v6);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x50455654u);
  }
}
