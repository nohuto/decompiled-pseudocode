/*
 * XREFs of PopDiagTraceActiveCooling @ 0x140574A20
 * Callers:
 *     PopThermalWorker @ 0x140574480 (PopThermalWorker.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExSystemTimeToLocalTime @ 0x1400B3208 (ExSystemTimeToLocalTime.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceActiveCooling(__int64 a1, struct _DEVICE_OBJECT *a2, char a3, unsigned int a4)
{
  REGHANDLE v8; // rbx
  bool v9; // cc
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v11; // rbx
  _WORD *DeviceNode; // rax
  char *v13; // r9
  unsigned int v14; // r10d
  __int64 v15; // r11
  __int64 v16; // rcx
  unsigned int v17; // kr00_4
  unsigned int *v18; // r8
  unsigned int v19; // edx
  const EVENT_DESCRIPTOR *v20; // rdx
  __int16 v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v22; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v23; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h]
  int v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+6Ch] [rbp-94h]
  LARGE_INTEGER *p_LocalTime; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  __int16 *v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  char v34; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int *v35; // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  _DWORD v37[10]; // [rsp+140h] [rbp+40h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v8 = PopDiagHandle;
    if ( a4 || EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ACTIVE_COOLING_DIAGNOSTIC) )
    {
      v9 = a4 <= 1;
      if ( a4 == 1 )
      {
        if ( !EtwEventEnabled(v8, &POP_ETW_EVENT_ACTIVE_COOLING_OPERATIONAL) )
          return;
        v9 = 1;
      }
      if ( v9 )
      {
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a2);
        v11 = DeviceAttachmentBaseRef;
        if ( DeviceAttachmentBaseRef )
          DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
        else
          DeviceNode = 0LL;
        if ( DeviceNode )
        {
          v22 = DeviceNode[140] >> 1;
          UserData.Ptr = (ULONGLONG)&v22;
          *(_QWORD *)&UserData.Size = 2LL;
          v27 = *((_QWORD *)DeviceNode + 36);
          v29 = 0;
          v28 = 2 * v22;
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
          v31 = 8LL;
          p_LocalTime = &LocalTime;
          v21 = a3 != 0;
          v33 = 2LL;
          v32 = &v21;
          v13 = &v34;
          v14 = 0;
          v15 = 10LL;
          do
          {
            v16 = v14;
            *(_QWORD *)(v13 - 4) = 4LL;
            ++v14;
            v13 += 16;
            v17 = *(_DWORD *)(a1 + 4 * v16 + 36);
            v18 = &v37[v16];
            *(_QWORD *)(v13 - 28) = v18;
            *v18 = v17 / 0xA;
            --v15;
          }
          while ( v15 );
          v36 = 4LL;
          v19 = *(_DWORD *)(a1 + 16) / 0xAu;
          v35 = &v23;
          v23 = v19;
          v20 = &POP_ETW_EVENT_ACTIVE_COOLING_DIAGNOSTIC;
          if ( a4 )
            v20 = &POP_ETW_EVENT_ACTIVE_COOLING_OPERATIONAL;
          EtwWrite(PopDiagHandle, v20, 0LL, 0xFu, &UserData);
        }
        if ( v11 )
          ObfDereferenceObject(v11);
      }
    }
  }
}
