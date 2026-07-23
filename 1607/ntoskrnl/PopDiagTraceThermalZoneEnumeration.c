/*
 * XREFs of PopDiagTraceThermalZoneEnumeration @ 0x1401474E0
 * Callers:
 *     PopThermalWorker @ 0x140574480 (PopThermalWorker.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopSqmThermalZoneEnumeration @ 0x140676C5C (PopSqmThermalZoneEnumeration.c)
 */

void __fastcall PopDiagTraceThermalZoneEnumeration(char *a1, unsigned __int16 *a2, struct _DEVICE_OBJECT *a3)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v5; // rdi
  KEVENT *p_DeviceLock; // r13
  unsigned __int16 v7; // r12
  unsigned int v8; // kr00_4
  unsigned int v9; // esi
  unsigned int v10; // kr04_4
  unsigned int v11; // r14d
  unsigned int v12; // kr08_4
  unsigned int v13; // r15d
  unsigned int v14; // kr0C_4
  unsigned int *v15; // rcx
  _BYTE *v16; // r8
  unsigned int v17; // r9d
  __int64 v18; // r11
  __int64 v19; // rax
  unsigned __int16 *v20; // r12
  __int64 v21; // rax
  ULONG v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r9d
  __int64 v28; // rdx
  __int64 v29; // rax
  REGHANDLE v30; // rcx
  unsigned __int16 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v32; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v33; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v34; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v35; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v36; // [rsp+74h] [rbp-8Ch]
  unsigned __int16 *v37; // [rsp+78h] [rbp-88h]
  REGHANDLE RegHandle; // [rsp+80h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+ACh] [rbp-54h]
  unsigned int *v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  _DWORD *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  _DWORD *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  _DWORD *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  _BYTE v51[40]; // [rsp+200h] [rbp+100h] BYREF

  v37 = a2;
  if ( PopDiagHandleRegistered )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a3);
    v5 = DeviceAttachmentBaseRef;
    if ( DeviceAttachmentBaseRef )
      DeviceAttachmentBaseRef = (PDEVICE_OBJECT)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    if ( DeviceAttachmentBaseRef )
    {
      p_DeviceLock = &DeviceAttachmentBaseRef->DeviceLock;
      v7 = LOWORD(DeviceAttachmentBaseRef->DeviceLock.Header.Lock) >> 1;
      v8 = *((_DWORD *)a1 + 5);
      v31 = v7;
      v9 = v8 / 0xA;
      v10 = *((_DWORD *)a1 + 7);
      v33 = v8 / 0xA;
      v11 = v10 / 0xA;
      v12 = *((_DWORD *)a1 + 19);
      v34 = v10 / 0xA;
      v13 = v12 / 0xA;
      v14 = *((_DWORD *)a1 + 6);
      v35 = v12 / 0xA;
      v36 = v14 / 0xA;
      RegHandle = PopDiagHandle;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED) )
      {
        *(_QWORD *)&UserData.Size = 2LL;
        UserData.Ptr = (ULONGLONG)&v31;
        v15 = (unsigned int *)v51;
        v16 = v51;
        Flink = p_DeviceLock->Header.WaitListHead.Flink;
        v17 = 6;
        v42 = 0;
        v41 = 2 * v7;
        v18 = 10LL;
        v44 = 4LL;
        v43 = &v33;
        v45 = a1 + 4;
        v47 = a1 + 8;
        v49 = a1 + 12;
        v46 = 4LL;
        v48 = 4LL;
        v50 = 4LL;
        do
        {
          v19 = v17++;
          v19 *= 2LL;
          *v15 = *(unsigned int *)((char *)v15 + a1 - v51 + 36) / 0xA;
          ++v15;
          *(&UserData.Ptr + v19) = (ULONGLONG)v16;
          v16 += 4;
          *((_QWORD *)&UserData.Size + v19) = 4LL;
          --v18;
        }
        while ( v18 );
        v20 = v37;
        v21 = 2LL * v17;
        v22 = *v37;
        *(&UserData.Ptr + v21) = (ULONGLONG)&v34;
        *((_QWORD *)&UserData.Size + v21) = 4LL;
        v23 = 2LL * (v17 + 1);
        *(&UserData.Ptr + v23) = (ULONGLONG)&v35;
        *((_QWORD *)&UserData.Size + v23) = 4LL;
        v24 = 2LL * (v17 + 2);
        *(&UserData.Ptr + v24) = (ULONGLONG)(a1 + 80);
        *((_QWORD *)&UserData.Size + v24) = 4LL;
        v25 = 2LL * (v17 + 3);
        *(&UserData.Ptr + v25) = (ULONGLONG)(a1 + 24);
        *((_QWORD *)&UserData.Size + v25) = 4LL;
        v26 = v17 + 4;
        v27 = v17 + 5;
        v26 *= 2LL;
        *(&UserData.Ptr + v26) = (ULONGLONG)(a1 + 84);
        v28 = 2LL * (v27 + 1);
        *((_QWORD *)&UserData.Size + v26) = 4LL;
        v32 = (unsigned __int16)v22 >> 1;
        v29 = 2LL * v27;
        *(&UserData.Ptr + v29) = (ULONGLONG)&v32;
        v30 = RegHandle;
        *((_QWORD *)&UserData.Size + v29) = 2LL;
        *(&UserData.Ptr + v28) = *((_QWORD *)v20 + 1);
        *(&UserData.Size + 2 * v28) = v22;
        *(&UserData.Reserved + 2 * v28) = 0;
        EtwWrite(v30, &POP_ETW_EVENT_THERMAL_ZONE_ENUMERATED, 0LL, 0x17u, &UserData);
        v9 = v33;
        v11 = v34;
        v13 = v35;
      }
      else
      {
        LODWORD(v20) = (_DWORD)v37;
      }
      PopSqmThermalZoneEnumeration(
        (_DWORD)p_DeviceLock,
        (_DWORD)v20,
        v9,
        *((_DWORD *)a1 + 1),
        *((_DWORD *)a1 + 2),
        *((_DWORD *)a1 + 3),
        *((_DWORD *)a1 + 9) / 0xAu,
        *((_DWORD *)a1 + 10) / 0xAu,
        v11,
        v13,
        v36);
    }
    if ( v5 )
      ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  }
}
