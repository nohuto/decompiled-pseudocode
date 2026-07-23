/*
 * XREFs of PnpInitializeSessionId @ 0x14050F95C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 * Callees:
 *     IopGetSessionIdFromPDO @ 0x1404CF1E4 (IopGetSessionIdFromPDO.c)
 *     _PnpSetObjectProperty @ 0x140511490 (_PnpSetObjectProperty.c)
 */

void __fastcall PnpInitializeSessionId(__int64 a1, __int64 a2, char a3)
{
  int SessionIdFromPDO; // r10d
  __int64 v5; // rcx
  struct _DEVICE_OBJECT *v7; // rcx
  int v8; // r8d
  int v9; // eax
  int *v10; // rcx
  int v11; // edx
  int v12; // [rsp+70h] [rbp+18h] BYREF

  SessionIdFromPDO = -1;
  v5 = *(_QWORD *)(a1 + 16);
  v12 = -1;
  if ( v5 )
  {
    v7 = *(struct _DEVICE_OBJECT **)(v5 + 32);
    if ( (v7->DeviceObjectExtension->ExtensionFlags & 0x400) != 0 )
    {
      SessionIdFromPDO = IopGetSessionIdFromPDO(v7);
      v12 = SessionIdFromPDO;
    }
  }
  if ( a3 )
  {
    if ( SessionIdFromPDO == -1 )
      return;
    v8 = 0x20000;
  }
  else
  {
    v8 = 0;
  }
  if ( SessionIdFromPDO == -1 )
  {
    v9 = 0;
    v10 = 0LL;
    v11 = 0;
  }
  else
  {
    v9 = 4;
    v10 = &v12;
    v11 = 7;
  }
  PnpSetObjectProperty(
    PiPnpRtlCtx,
    *(_QWORD *)(a1 + 48),
    1,
    0LL,
    (__int64)&DEVPKEY_Device_SessionId,
    v11,
    (__int64)v10,
    v9,
    v8);
}
