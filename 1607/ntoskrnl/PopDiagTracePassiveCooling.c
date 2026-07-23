/*
 * XREFs of PopDiagTracePassiveCooling @ 0x140671928
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

char __fastcall PopDiagTracePassiveCooling(__int64 a1, struct _DEVICE_OBJECT *a2, char a3, int a4, unsigned int a5)
{
  _UNKNOWN **DeviceNode; // rax
  REGHANDLE v9; // rbx
  bool v10; // cc
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v12; // rbx
  unsigned int v13; // kr00_4
  unsigned int v14; // kr04_4
  const EVENT_DESCRIPTOR *v15; // rdx
  int v17; // [rsp+38h] [rbp-D0h] BYREF
  int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v19; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-C4h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  void *v24; // [rsp+68h] [rbp-A0h]
  __int64 v25; // [rsp+70h] [rbp-98h]
  LARGE_INTEGER *p_LocalTime; // [rsp+78h] [rbp-90h]
  __int64 v27; // [rsp+80h] [rbp-88h]
  int *v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  unsigned int *v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  unsigned int *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  __int64 v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  __int64 v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  __int64 v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  int *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  __int64 v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+140h] [rbp+38h] BYREF
  int v45; // [rsp+160h] [rbp+58h] BYREF

  DeviceNode = &retaddr;
  v45 = a4;
  LOWORD(v17) = 0;
  if ( PopDiagHandleRegistered )
  {
    v9 = PopDiagHandle;
    if ( a5
      || (LOBYTE(DeviceNode) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_PASSIVE_COOLING_DIAGNOSTIC),
          (_BYTE)DeviceNode) )
    {
      v10 = a5 <= 1;
      if ( a5 == 1 )
      {
        LOBYTE(DeviceNode) = EtwEventEnabled(v9, &POP_ETW_EVENT_PASSIVE_COOLING_OPERATIONAL);
        if ( !(_BYTE)DeviceNode )
          return (char)DeviceNode;
        v10 = a5 <= 1;
      }
      if ( v10 )
      {
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a2);
        v12 = DeviceAttachmentBaseRef;
        if ( DeviceAttachmentBaseRef )
          DeviceNode = (_UNKNOWN **)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
        else
          DeviceNode = 0LL;
        if ( DeviceNode )
        {
          LOWORD(v18) = *((_WORD *)DeviceNode + 140) >> 1;
          UserData.Ptr = (ULONGLONG)&v18;
          *(_QWORD *)&UserData.Size = 2LL;
          v24 = DeviceNode[36];
          v25 = 2 * (unsigned int)(unsigned __int16)v18;
          SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
          ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
          v27 = 8LL;
          p_LocalTime = &LocalTime;
          LOWORD(v17) = a3 != 0;
          v29 = 2LL;
          v28 = &v17;
          v30 = &v19;
          v13 = *(_DWORD *)(a1 + 20);
          v31 = 4LL;
          v19 = v13 / 0xA;
          v14 = *(_DWORD *)(a1 + 16);
          v33 = 4LL;
          v32 = &v20;
          v34 = a1 + 4;
          v36 = a1 + 8;
          v38 = a1 + 12;
          v40 = &v45;
          v42 = a1 + 80;
          v20 = v14 / 0xA;
          v15 = &POP_ETW_EVENT_PASSIVE_COOLING_DIAGNOSTIC;
          v35 = 4LL;
          v37 = 4LL;
          v39 = 4LL;
          v41 = 4LL;
          v43 = 4LL;
          if ( a5 )
            v15 = &POP_ETW_EVENT_PASSIVE_COOLING_OPERATIONAL;
          LOBYTE(DeviceNode) = EtwWrite(PopDiagHandle, v15, 0LL, 0xBu, &UserData);
        }
        if ( v12 )
          LOBYTE(DeviceNode) = ObfDereferenceObject(v12);
      }
    }
  }
  return (char)DeviceNode;
}
