/*
 * XREFs of UsbhReleaseApiLock @ 0x1C004A6C0
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C00478D4 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004802C (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048354 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C004859C (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004880C (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048AA0 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048D04 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049154 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049460 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0049734 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C00499E8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0049CA4 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0049F58 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     UsbhReleaseFdoPnpLock @ 0x1C000942C (UsbhReleaseFdoPnpLock.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

LONG __fastcall UsbhReleaseApiLock(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KEVENT *v10; // rax

  Log(a1, 32, 1095774509, 0LL, a2);
  v6 = FdoExt(a1, v3, v4, v5);
  UsbhReleaseFdoPnpLock(a1, (__int64)(v6 + 434));
  v10 = (struct _KEVENT *)FdoExt(a1, v7, v8, v9);
  return KeSetEvent(v10 + 205, 0, 0);
}
