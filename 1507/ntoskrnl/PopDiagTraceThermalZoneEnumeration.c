/*
 * XREFs of PopDiagTraceThermalZoneEnumeration @ 0x140170D0C
 * Callers:
 *     PopThermalWorker @ 0x1405C3BD8 (PopThermalWorker.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400D0E10 (IoGetDeviceAttachmentBaseRef.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PopSqmThermalZoneEnumeration @ 0x1406BECDC (PopSqmThermalZoneEnumeration.c)
 */

void __fastcall PopDiagTraceThermalZoneEnumeration(char *a1, struct _DEVICE_OBJECT *a2)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v4; // rdi
  _WORD *DeviceNode; // rax
  char *v6; // r13
  unsigned __int16 v7; // r12
  unsigned int v8; // kr00_4
  unsigned int v9; // esi
  unsigned int v10; // kr04_4
  unsigned int v11; // r14d
  unsigned int v12; // kr08_4
  unsigned int v13; // r15d
  unsigned int v14; // kr0C_4
  unsigned int *v15; // rcx
  _BYTE *v16; // r9
  unsigned int v17; // r8d
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rax
  REGHANDLE v26; // rcx
  unsigned __int16 v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v29; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v30; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-A0h]
  REGHANDLE RegHandle; // [rsp+68h] [rbp-98h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+8Ch] [rbp-74h]
  unsigned int *v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  _DWORD *v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  _DWORD *v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  _DWORD *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  _BYTE v45[40]; // [rsp+1C0h] [rbp+C0h] BYREF

  if ( PopDiagHandleRegistered )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a2);
    v4 = DeviceAttachmentBaseRef;
    if ( DeviceAttachmentBaseRef )
      DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    else
      DeviceNode = 0LL;
    if ( DeviceNode )
    {
      v6 = (char *)(DeviceNode + 140);
      v7 = DeviceNode[140] >> 1;
      v8 = *((_DWORD *)a1 + 5);
      v27 = v7;
      v9 = v8 / 0xA;
      v10 = *((_DWORD *)a1 + 7);
      v30 = v8 / 0xA;
      v11 = v10 / 0xA;
      v12 = *((_DWORD *)a1 + 19);
      v29 = v10 / 0xA;
      v13 = v12 / 0xA;
      v14 = *((_DWORD *)a1 + 6);
      v28 = v12 / 0xA;
      v31 = v14 / 0xA;
      RegHandle = PopDiagHandle;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED) )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v27;
        v15 = (unsigned int *)v45;
        UserData.Size = 2;
        v16 = v45;
        v34 = *((_QWORD *)v6 + 1);
        v36 = 0;
        v35 = 2 * v7;
        v37 = &v30;
        v39 = a1 + 4;
        v38 = 4LL;
        v41 = a1 + 8;
        v17 = 6;
        v40 = 4LL;
        v43 = a1 + 12;
        v18 = 10LL;
        v42 = 4LL;
        v44 = 4LL;
        do
        {
          v19 = v17++;
          v19 *= 2LL;
          *v15 = *(unsigned int *)((char *)v15 + a1 - v45 + 36) / 0xA;
          ++v15;
          *(&UserData.Ptr + v19) = (ULONGLONG)v16;
          v16 += 4;
          *((_QWORD *)&UserData.Size + v19) = 4LL;
          --v18;
        }
        while ( v18 );
        v20 = 2LL * v17;
        *(&UserData.Ptr + v20) = (ULONGLONG)&v29;
        *((_QWORD *)&UserData.Size + v20) = 4LL;
        v21 = 2LL * (v17 + 1);
        *(&UserData.Ptr + v21) = (ULONGLONG)&v28;
        *((_QWORD *)&UserData.Size + v21) = 4LL;
        v22 = v17 + 2;
        v23 = v17 + 3;
        v22 *= 2LL;
        *(&UserData.Ptr + v22) = (ULONGLONG)(a1 + 80);
        v24 = 2LL * (v23 + 1);
        *((_QWORD *)&UserData.Size + v22) = 4LL;
        v25 = 2LL * v23;
        *(&UserData.Ptr + v25) = (ULONGLONG)(a1 + 24);
        v26 = RegHandle;
        *((_QWORD *)&UserData.Size + v25) = 4LL;
        *(&UserData.Ptr + v24) = (ULONGLONG)(a1 + 84);
        *((_QWORD *)&UserData.Size + v24) = 4LL;
        EtwWrite(v26, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED, 0LL, 0x15u, &UserData);
        v9 = v30;
        v11 = v29;
        v13 = v28;
      }
      PopSqmThermalZoneEnumeration(
        (_DWORD)v6,
        v9,
        *((_DWORD *)a1 + 1),
        *((_DWORD *)a1 + 2),
        *((_DWORD *)a1 + 3),
        *((_DWORD *)a1 + 9) / 0xAu,
        *((_DWORD *)a1 + 10) / 0xAu,
        v11,
        v13,
        v31);
    }
    if ( v4 )
      ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  }
}
