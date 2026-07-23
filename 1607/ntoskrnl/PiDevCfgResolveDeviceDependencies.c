/*
 * XREFs of PiDevCfgResolveDeviceDependencies @ 0x14063DBB0
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14063B1DC (PiDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x140629A20 (PipHardwareConfigTriggerRespecialize.c)
 *     PnpCheckDriverDependencies @ 0x14062D430 (PnpCheckDriverDependencies.c)
 *     PnpGetStableSystemBootTime @ 0x14062D8CC (PnpGetStableSystemBootTime.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140641064 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgSetObjectProperty @ 0x1406410B0 (PiDevCfgSetObjectProperty.c)
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
  int v13; // ecx
  int v14; // eax
  __int64 v16; // [rsp+60h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-11h] BYREF
  _QWORD v18[11]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v19; // [rsp+E0h] [rbp+67h] BYREF
  int v20; // [rsp+E8h] [rbp+6Fh] BYREF
  int v21; // [rsp+F0h] [rbp+77h] BYREF
  int v22; // [rsp+F8h] [rbp+7Fh] BYREF

  *a2 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v20 = 0;
  v22 = 1;
  LOBYTE(v19) = 0;
  v21 = 0;
  memset(v18, 0, 0x28uLL);
  v4 = *(void **)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  v18[0] = &DEVPKEY_Device_FirmwareDependencies;
  v18[2] = &DestinationString;
  LODWORD(v18[1]) = 8210;
  HIDWORD(v18[3]) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(v6, v5, 1u, v4, (__int64)v18, 1u);
  if ( ObjectProperties >= 0 )
  {
    ObjectProperties = v18[4];
    if ( LODWORD(v18[4]) == -1073741275 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
    else if ( SLODWORD(v18[4]) < 0 )
    {
      goto LABEL_27;
    }
    if ( !DestinationString.Buffer || DestinationString.Length < 2u )
    {
      *a2 = 1;
      goto LABEL_26;
    }
    ObjectProperties = PnpCheckDriverDependencies(DestinationString.Buffer, a2, &v19);
    if ( ObjectProperties < 0 || !*a2 )
      goto LABEL_26;
    if ( (_BYTE)v19 )
    {
      memset(v18, 0, 0x28uLL);
      v8 = *(void **)(a1 + 16);
      v9 = *(_QWORD *)(a1 + 8);
      v18[2] = &v16;
      v18[0] = &DEVPKEY_Device_DependencyBootSession;
      LODWORD(v18[1]) = 16;
      LODWORD(v18[3]) = 8;
      ObjectProperties = PiDevCfgQueryObjectProperties(v10, v9, 1u, v8, (__int64)v18, 1u);
      if ( ObjectProperties < 0 )
        goto LABEL_27;
      if ( LODWORD(v18[4]) != -1073741275 )
      {
        if ( SLODWORD(v18[4]) < 0 )
        {
          ObjectProperties = v18[4];
          goto LABEL_27;
        }
        ObjectProperties = PnpGetStableSystemBootTime(&v19);
        if ( ObjectProperties < 0 || v19 == v16 )
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
    v21 = 4;
    if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v12, v11, 11, (__int64)&v22, (__int64)&v20, (__int64)&v21, 0) < 0
      || v22 != 4
      || (v14 = v20, v21 != 4) )
    {
      v14 = 0;
    }
    v20 = v14 | 0x20;
    if ( (int)PiDevCfgSetDeviceRegProp(v13, a1, 11, 4, (__int64)&v20, 4) >= 0 )
    {
      PiDevCfgSetObjectProperty(PiPnpRtlCtx, a1, *(_QWORD *)(a1 + 8), 1, *(_QWORD *)(a1 + 16));
      PiDevCfgSetObjectProperty(PiPnpRtlCtx, a1, *(_QWORD *)(a1 + 8), 1, *(_QWORD *)(a1 + 16));
    }
    if ( PnpBootMode )
      PipHardwareConfigTriggerRespecialize(0LL);
  }
LABEL_27:
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)ObjectProperties;
}
