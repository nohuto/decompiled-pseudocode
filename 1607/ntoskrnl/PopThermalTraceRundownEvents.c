/*
 * XREFs of PopThermalTraceRundownEvents @ 0x140110EF8
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14052BF20 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000DC30 (PopAcquireRwLockShared.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void PopThermalTraceRundownEvents()
{
  __int64 i; // rbx
  unsigned __int8 v1; // al
  struct _DEVICE_OBJECT *v2; // rdi
  char v3; // r14
  int v4; // esi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v6; // rdi
  _WORD *DeviceNode; // rax
  int v8; // ecx
  __int16 v9; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v10; // [rsp+3Ch] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v12; // [rsp+44h] [rbp-C4h] BYREF
  int v13; // [rsp+48h] [rbp-C0h] BYREF
  int v14; // [rsp+50h] [rbp-B8h] BYREF
  int v15; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h]
  int v19; // [rsp+80h] [rbp-88h]
  int v20; // [rsp+84h] [rbp-84h]
  __int16 *v21; // [rsp+88h] [rbp-80h]
  __int64 v22; // [rsp+90h] [rbp-78h]
  int *v23; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A0h] [rbp-68h]
  __int16 *v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  int *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  int *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  __int64 *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  __int16 *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  __int64 v35; // [rsp+F8h] [rbp-10h]
  int v36; // [rsp+100h] [rbp-8h]
  int v37; // [rsp+104h] [rbp-4h]

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    v1 = *(_BYTE *)(i + 65);
    if ( (v1 & 2) != 0 )
    {
      v2 = *(struct _DEVICE_OBJECT **)(i + 48);
      v3 = *(_BYTE *)(i + 65) & 1;
      LODWORD(v16) = *(unsigned __int8 *)(i + 73);
      v15 = *(unsigned __int8 *)(i + 72);
      v14 = *(_DWORD *)(i + 80);
      v4 = (v1 >> 2) & 1;
      v13 = *(unsigned __int8 *)(i + 69);
      if ( PopDiagHandleRegistered )
      {
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_RUNDOWN) )
        {
          DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v2);
          v6 = DeviceAttachmentBaseRef;
          if ( DeviceAttachmentBaseRef )
            DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
          else
            DeviceNode = 0LL;
          if ( DeviceNode )
          {
            LOWORD(v11) = DeviceNode[140] >> 1;
            UserData.Ptr = (ULONGLONG)&v11;
            *(_QWORD *)&UserData.Size = 2LL;
            v18 = *((_QWORD *)DeviceNode + 36);
            v20 = 0;
            v19 = 2 * (unsigned __int16)v11;
            v9 = (_BYTE)v4 != 0;
            v22 = 2LL;
            v21 = &v9;
            v23 = &v13;
            v24 = 4LL;
            v10 = v3 != 0;
            v8 = *(unsigned __int16 *)(i + 840);
            v25 = &v10;
            v36 = v8;
            v27 = &v14;
            v26 = 2LL;
            v29 = &v15;
            v28 = 4LL;
            v31 = &v16;
            v12 = (unsigned __int16)v8 >> 1;
            v33 = &v12;
            v35 = *(_QWORD *)(i + 848);
            v30 = 4LL;
            v32 = 4LL;
            v34 = 2LL;
            v37 = 0;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_RUNDOWN, 0LL, 0xAu, &UserData);
          }
          if ( v6 )
            ObfDereferenceObjectWithTag(v6, 0x746C6644u);
        }
      }
    }
  }
  PopReleaseRwLock(&PopPolicyDeviceLock);
}
