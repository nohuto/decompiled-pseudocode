/*
 * XREFs of UsbhReleaseApiLock @ 0x1C004A570
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C0047854 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0047EDC (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048204 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C004844C (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C00486BC (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048950 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048BB4 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049004 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049310 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C00495E4 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049898 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0049B54 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0049E08 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001DFAC (UsbhReleaseFdoPnpLock.c)
 */

LONG __fastcall UsbhReleaseApiLock(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KEVENT *v12; // rax

  Log(a1, 32, 1095774509, 0LL, a2);
  v6 = FdoExt(a1, v3, v4, v5);
  UsbhReleaseFdoPnpLock(a1, (__int64)(v6 + 434), v7, v8);
  v12 = (struct _KEVENT *)FdoExt(a1, v9, v10, v11);
  return KeSetEvent(v12 + 205, 0, 0);
}
