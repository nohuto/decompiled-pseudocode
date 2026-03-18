/*
 * XREFs of DxgkMiracastStopMiracastSession @ 0x1C0027700
 * Callers:
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C0130F50 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024AE0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0024CF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C016DC30 (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkMiracastStopMiracastSession(const WCHAR *a1, struct _KEVENT *a2)
{
  char *DeviceContextFromName; // rax
  __int64 v4; // rcx
  int *v5; // rdi
  _QWORD *v6; // rax
  unsigned int v8; // ebx

  DeviceContextFromName = (char *)DpiMiracastGetDeviceContextFromName(a1);
  v5 = (int *)DeviceContextFromName;
  if ( DeviceContextFromName )
  {
    v8 = DpiMiracastStopMiracastSessionSync(DeviceContextFromName, 0, 0LL, a2, 0x80u, 0);
    DpiMiracastReleaseMiracastDeviceContext(v5, (unsigned int)v5);
    return v8;
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v6[3] = &DxgkMiracastStopMiracastSession;
    v6[4] = DpiMiracastGetDeviceContextFromName;
    v6[5] = -2147483642LL;
    WdLogEvent5_WdError(v6);
    if ( a2 )
      ObfDereferenceObject(a2);
    return 2147483654LL;
  }
}
