/*
 * XREFs of UsbhAcquireApiLock @ 0x1C00477D4
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C0047CC4 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0048440 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048768 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C00489B0 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C0048C20 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048EB4 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0049118 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049554 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049860 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0049B34 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049DE8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C004A0A4 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C004A358 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C001EA4C (UsbhAcquireFdoPnpLock.c)
 */

__int64 __fastcall UsbhAcquireApiLock(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rax
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rax
  int v15; // eax
  __int64 v16; // r10

  v3 = a2;
  Log(a1, 32, 1095774507, 0LL, a2);
  v9 = FdoExt(a1, v6, v7, v8);
  v10 = 0;
  KeWaitForSingleObject(v9 + 1230, Executive, 0, 0, 0LL);
  v14 = FdoExt(a1, v11, v12, v13);
  v15 = UsbhAcquireFdoPnpLock(a1, (__int64)(v14 + 434), 11LL, (unsigned int)v3, 1);
  v16 = v15;
  *a3 = 1;
  if ( v15 != 5 )
  {
    if ( v15 == 6 )
      Log(a1, 32, 1095774563, 0LL, v3);
    v10 = -1073741810;
  }
  Log(a1, 32, 1095774497, v10, v16);
  return (unsigned int)v10;
}
