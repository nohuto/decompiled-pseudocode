/*
 * XREFs of DxgkMiracastStopMiracastSession @ 0x1C0027A90
 * Callers:
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C012AA10 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024FA0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00251B0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C01694B0 (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkMiracastStopMiracastSession(PCWSTR SourceString, HANDLE Handle, KPROCESSOR_MODE AccessMode)
{
  struct _KEVENT *v3; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  char *DeviceContextFromName; // rax
  __int64 v11; // rcx
  int *v12; // rdi
  _QWORD *v13; // rax
  unsigned int v14; // ebx
  struct _KEVENT *v15; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  if ( Handle
    && (v5 = ObReferenceObjectByHandle(
               Handle,
               0x1F0003u,
               (POBJECT_TYPE)ExEventObjectType,
               AccessMode,
               (PVOID *)&v15,
               0LL),
        v3 = v15,
        v7 = v5,
        v5 < 0) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v8[3] = DxgkMiracastStopMiracastSession;
    v8[4] = ObReferenceObjectByHandle;
    v8[5] = v7;
    WdLogEvent5_WdError(v8);
    return 2147483656LL;
  }
  else
  {
    DeviceContextFromName = (char *)DpiMiracastGetDeviceContextFromName(SourceString);
    v12 = (int *)DeviceContextFromName;
    if ( DeviceContextFromName )
    {
      v14 = DpiMiracastStopMiracastSessionSync(DeviceContextFromName, 0, 0LL, v3, 0x80u, 0);
      DpiMiracastReleaseMiracastDeviceContext(v12, (unsigned int)v12);
      return v14;
    }
    else
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v13[3] = DxgkMiracastStopMiracastSession;
      v13[4] = DpiMiracastGetDeviceContextFromName;
      v13[5] = -2147483642LL;
      WdLogEvent5_WdError(v13);
      if ( v3 )
        ObfDereferenceObject(v3);
      return 2147483654LL;
    }
  }
}
