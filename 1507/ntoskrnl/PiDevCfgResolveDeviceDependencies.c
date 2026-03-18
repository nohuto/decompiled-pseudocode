/*
 * XREFs of PiDevCfgResolveDeviceDependencies @ 0x1406893E8
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PiDevCfgSetObjectProperty @ 0x140589E38 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x14067A4E0 (PipHardwareConfigTriggerRespecialize.c)
 *     PnpCheckDriverDependencies @ 0x14067DE50 (PnpCheckDriverDependencies.c)
 *     PnpGetStableSystemBootTime @ 0x14067E2EC (PnpGetStableSystemBootTime.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14068CBF4 (PiDevCfgSetDeviceRegProp.c)
 */

__int64 __fastcall PiDevCfgResolveDeviceDependencies(__int64 a1, _BYTE *a2)
{
  void *v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  int ObjectProperties; // ebx
  void *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // eax
  int v15; // [rsp+28h] [rbp-51h]
  int v16; // [rsp+28h] [rbp-51h]
  __int64 v17; // [rsp+60h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v19[11]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v20; // [rsp+E0h] [rbp+67h] BYREF
  int v21; // [rsp+E8h] [rbp+6Fh] BYREF
  int v22; // [rsp+F0h] [rbp+77h] BYREF
  int v23; // [rsp+F8h] [rbp+7Fh] BYREF

  *a2 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v21 = 0;
  v23 = 1;
  LOBYTE(v20) = 0;
  v22 = 0;
  memset(v19, 0, 0x28uLL);
  v4 = *(void **)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  v19[0] = &DEVPKEY_Device_FirmwareDependencies;
  v19[2] = &DestinationString;
  LODWORD(v19[1]) = 8210;
  HIDWORD(v19[3]) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(v6, v5, 1u, v4, (__int64)v19, 1u);
  if ( ObjectProperties >= 0 )
  {
    ObjectProperties = v19[4];
    if ( LODWORD(v19[4]) == -1073741275 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    else if ( SLODWORD(v19[4]) < 0 )
    {
      goto LABEL_27;
    }
    if ( !DestinationString.Buffer || DestinationString.Length < 2u )
    {
      *a2 = 1;
      goto LABEL_26;
    }
    ObjectProperties = PnpCheckDriverDependencies(DestinationString.Buffer, a2, &v20);
    if ( ObjectProperties < 0 || !*a2 )
      goto LABEL_26;
    if ( (_BYTE)v20 )
    {
      memset(v19, 0, 0x28uLL);
      v8 = *(void **)(a1 + 16);
      v9 = *(_QWORD *)(a1 + 8);
      v19[2] = &v17;
      v19[0] = &DEVPKEY_Device_DependencyBootSession;
      LODWORD(v19[1]) = 16;
      LODWORD(v19[3]) = 8;
      ObjectProperties = PiDevCfgQueryObjectProperties(v10, v9, 1u, v8, (__int64)v19, 1u);
      if ( ObjectProperties < 0 )
        goto LABEL_27;
      if ( LODWORD(v19[4]) != -1073741275 )
      {
        if ( SLODWORD(v19[4]) < 0 )
        {
          ObjectProperties = v19[4];
          goto LABEL_27;
        }
        ObjectProperties = PnpGetStableSystemBootTime(&v20);
        if ( ObjectProperties < 0 || v20 == v17 )
        {
          *a2 = 0;
LABEL_26:
          ObjectProperties = 0;
          goto LABEL_27;
        }
      }
    }
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_QWORD *)(a1 + 8);
    v22 = 4;
    if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v12, v11, 11, (__int64)&v23, (__int64)&v21, (__int64)&v22) < 0
      || v23 != 4
      || (v13 = v21, v22 != 4) )
    {
      v13 = 0;
    }
    v21 = v13 | 0x20;
    if ( (int)PiDevCfgSetDeviceRegProp(PiPnpRtlCtx, a1, 11, 4, (__int64)&v21, 4) >= 0 )
    {
      PiDevCfgSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        (_BYTE *)a1,
        *(_QWORD *)(a1 + 8),
        1u,
        *(_QWORD *)(a1 + 16),
        v15,
        (__int64)&DEVPKEY_Device_FirmwareDependencies,
        0,
        0LL,
        0);
      PiDevCfgSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        (_BYTE *)a1,
        *(_QWORD *)(a1 + 8),
        1u,
        *(_QWORD *)(a1 + 16),
        v16,
        (__int64)&DEVPKEY_Device_DependencyBootSession,
        0,
        0LL,
        0);
    }
    if ( PnpBootMode )
      PipHardwareConfigTriggerRespecialize(0LL);
  }
LABEL_27:
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)ObjectProperties;
}
