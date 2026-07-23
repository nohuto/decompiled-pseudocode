/*
 * XREFs of PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1404C2DC4
 * Callers:
 *     PiDcHandleContainerEvent @ 0x1404C2FD0 (PiDcHandleContainerEvent.c)
 *     PiDcInit @ 0x14079D9B0 (PiDcInit.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14015D930 (ZwUpdateWnfStateData.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x140511490 (_PnpSetObjectProperty.c)
 */

__int64 __fastcall PiDcGenerateConfigNotificationIfContainerRequiresConfiguration(int a1)
{
  int ObjectProperty; // ebx
  int v3; // eax
  _DWORD v5[4]; // [rsp+60h] [rbp-10h] BYREF
  char v6; // [rsp+A8h] [rbp+38h] BYREF
  int v7; // [rsp+B0h] [rbp+40h] BYREF
  char v8; // [rsp+B8h] [rbp+48h] BYREF

  v7 = 0;
  v6 = 0;
  ObjectProperty = PnpGetObjectProperty(
                     PiPnpRtlCtx,
                     a1,
                     5,
                     0,
                     0LL,
                     (__int64)&DEVPKEY_DeviceContainer_IsConnected,
                     (__int64)&v7,
                     (__int64)&v6,
                     1,
                     (__int64)&v8,
                     0);
  if ( ObjectProperty >= 0 && v6 && v7 == 17 )
  {
    v3 = PnpGetObjectProperty(
           PiPnpRtlCtx,
           a1,
           5,
           0,
           0LL,
           (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
           (__int64)&v7,
           (__int64)v5,
           4,
           (__int64)&v8,
           0);
    ObjectProperty = v3;
    if ( v3 >= 0 )
    {
      if ( v7 != 7 )
      {
LABEL_9:
        ObjectProperty = PnpSetObjectProperty(
                           PiPnpRtlCtx,
                           a1,
                           5,
                           0LL,
                           (__int64)&DEVPKEY_DeviceContainer_ConfigFlags,
                           7,
                           (__int64)&unconfiguredConfigFlags,
                           4,
                           0);
        if ( ObjectProperty < 0 )
          return (unsigned int)ObjectProperty;
LABEL_10:
        ZwUpdateWnfStateData(&WNF_PNPC_CONTAINER_CONFIG_REQUESTED, 0LL, 0, 0LL, 0LL, 0, 0);
        return (unsigned int)ObjectProperty;
      }
      if ( !v5[0] )
        return (unsigned int)ObjectProperty;
    }
    if ( v3 != -1073741275 )
      goto LABEL_10;
    goto LABEL_9;
  }
  return (unsigned int)ObjectProperty;
}
