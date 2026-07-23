/*
 * XREFs of PiDevCfgProcessDevice @ 0x140511A60
 * Callers:
 *     PpDevCfgProcessDevice @ 0x140510468 (PpDevCfgProcessDevice.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x14001A954 (PnpDiagnosticTraceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400EFAFC (PnpDiagnosticTraceObjectWithStatus.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     PipSetDevNodeProblem @ 0x1404A0BE4 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404A0DFC (PipClearDevNodeProblem.c)
 *     PipClearDevNodeUserFlags @ 0x1404ECD04 (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeUserFlags @ 0x14050AAD0 (PipSetDevNodeUserFlags.c)
 *     PiDevCfgInitDeviceContext @ 0x14051047C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgResolveDriverDependencies @ 0x140510598 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgFindDeviceDriver @ 0x140510680 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgSetObjectProperty @ 0x140512D8C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgFreeDriverNode @ 0x140514E48 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140514F8C (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x14053B1A8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgMigrateRootDevice @ 0x140609150 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x140609E1C (PiDevCfgRequestDriverConfigurations.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14060A40C (PiDevCfgResolveDeviceDependencies.c)
 */

__int64 __fastcall PiDevCfgProcessDevice(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // r13
  int v7; // r14d
  bool v8; // si
  int v9; // r12d
  int inited; // edi
  char v11; // al
  __int64 v12; // r15
  int DeviceDriver; // eax
  __int64 v14; // r15
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rbx
  char v20; // si
  __int64 v21; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  char v25; // si
  int v26; // eax
  int v27; // eax
  int v28; // edx
  int v29; // [rsp+28h] [rbp-D8h]
  int v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+28h] [rbp-D8h]
  int v32; // [rsp+28h] [rbp-D8h]
  int v33; // [rsp+28h] [rbp-D8h]
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+64h] [rbp-9Ch] BYREF
  int v36; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+6Ch] [rbp-94h] BYREF
  int v38; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v42[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v43[10]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v44[16]; // [rsp+100h] [rbp+0h] BYREF
  char v45; // [rsp+190h] [rbp+90h] BYREF
  __int64 v46; // [rsp+198h] [rbp+98h]
  char v47; // [rsp+1A8h] [rbp+A8h]

  v46 = a2;
  LODWORD(v43[0]) = 0;
  v6 = 0LL;
  memset(&v43[1], 0, 0x40uLL);
  v37 = 1;
  v7 = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  v8 = 0;
  UnicodeString.Buffer = 0LL;
  v9 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v39 = 0LL;
  v34 = 0;
  v38 = 0;
  v47 = 0;
  v36 = 0;
  v45 = 0;
  v35 = 0;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_45;
  }
  v6 = a1 + 40;
  PnpDiagnosticTraceObject(&KMPnPEvt_DeviceConfig_Start, (unsigned __int16 *)(a1 + 40));
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, v43);
  if ( inited < 0 )
    goto LABEL_45;
  v11 = v43[0];
  if ( (a3 & 1) != 0 )
  {
    v11 = LOBYTE(v43[0]) | 1;
    LODWORD(v43[0]) |= 1u;
  }
  v12 = v46;
  if ( !v46 )
    v12 = v43[2];
  v46 = v12;
  if ( (v11 & 1) == 0 )
  {
    inited = PiDevCfgResolveDeviceDependencies(v43, &v45);
    if ( inited < 0 )
      goto LABEL_45;
    if ( !v45 )
    {
      inited = 0;
      goto LABEL_45;
    }
    if ( !PnpBootMode )
    {
      memset(v44, 0, 0x50uLL);
      HIDWORD(v44[3]) = 6;
      LODWORD(v44[1]) = 8210;
      v44[0] = &DEVPKEY_Device_PendingConfigurationIds;
      LODWORD(v44[6]) = 8210;
      v23 = *(_QWORD *)(a1 + 48);
      v44[2] = &UnicodeString;
      v44[5] = &DEVPKEY_Device_RequestConfigurationIds;
      v44[7] = &DestinationString;
      HIDWORD(v44[8]) = 6;
      inited = PiDevCfgQueryObjectProperties(6, v23, 1, v12, (__int64)v44, 2);
      if ( inited < 0 )
        goto LABEL_45;
      if ( SLODWORD(v44[4]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v44[9]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
    }
  }
  DeviceDriver = PiDevCfgFindDeviceDriver((__int64)v43, UnicodeString.Buffer, &v39);
  v14 = v39;
  inited = DeviceDriver;
  if ( DeviceDriver >= 0 )
  {
    if ( DestinationString.Buffer )
    {
      inited = PiDevCfgRequestDriverConfigurations(v43, v39);
    }
    else
    {
      inited = PiDevCfgResolveDriverDependencies(v39, &v45);
      if ( inited < 0 )
        goto LABEL_43;
      if ( !v45 )
      {
        inited = 0;
        goto LABEL_43;
      }
      inited = PiDevCfgConfigureDevice(a1, (unsigned int)v43, (__int64)&v38);
      if ( inited >= 0 )
      {
        v7 = v34;
        v47 = 1;
      }
    }
    if ( UnicodeString.Buffer )
      PiDevCfgSetObjectProperty(
        PiPnpRtlCtx,
        (unsigned int)v43,
        *(_QWORD *)(a1 + 48),
        1,
        v46,
        v29,
        (__int64)&DEVPKEY_Device_PendingConfigurationIds,
        0,
        0LL,
        0);
  }
  if ( !DestinationString.Buffer )
  {
    if ( UnicodeString.Buffer )
      goto LABEL_20;
    if ( v14 )
    {
      if ( *(int *)(v14 + 396) >= 0 )
        goto LABEL_20;
      v8 = 1;
      v9 = *(_DWORD *)(v14 + 396);
    }
    else
    {
      if ( inited != -1073740656 || (PiDevCfgMode & 2) == 0 )
        goto LABEL_20;
      if ( !PnpBootMode || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
      {
        if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode )
        {
          v24 = *(_QWORD *)(a1 + 48);
          v35 = 4;
          if ( (int)CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      v24,
                      v46,
                      11,
                      (__int64)&v37,
                      (__int64)&v34,
                      (__int64)&v35) >= 0
            && v37 == 4
            && v35 == 4 )
          {
            v25 = v34;
          }
          else
          {
            v25 = 0;
            v34 = 0;
          }
          v8 = (v25 & 0x20) != 0;
        }
        else
        {
          v8 = 1;
        }
      }
      else
      {
        v7 = 32;
      }
      if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode && (int)PiDevCfgMigrateRootDevice(a1, v43, &v34) >= 0 )
      {
        v7 |= v34;
        if ( (v34 & 1) != 0 )
        {
          v8 = 0;
          v7 &= ~0x20u;
        }
      }
      v9 = -1073740656;
    }
    if ( v8 )
    {
      inited = PiDevCfgConfigureDevice(a1, (unsigned int)v43, (__int64)&v38);
      if ( inited >= 0 )
      {
        v7 = v34;
        v47 = 1;
        switch ( v9 )
        {
          case -1073740656:
            v26 = -536870360;
            v36 = -536870360;
            break;
          case -1073740655:
            v36 = -536870320;
            goto LABEL_98;
          case -1073740654:
            v36 = -536870319;
            goto LABEL_98;
          case -1073740653:
            v36 = -536870318;
            goto LABEL_98;
          case -1073740652:
            v36 = -536870375;
LABEL_98:
            if ( (v34 & 0x40) == 0 )
              goto LABEL_21;
            PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              (unsigned int)v43,
              *(_QWORD *)(a1 + 48),
              1,
              v46,
              v29,
              (__int64)&DEVPKEY_Device_InstallError,
              23,
              (__int64)&v36,
              4);
            goto LABEL_20;
          default:
            v26 = v36;
            break;
        }
        if ( !v26 )
          goto LABEL_21;
        goto LABEL_98;
      }
    }
LABEL_20:
    if ( !v47 )
    {
LABEL_25:
      v15 = *(_QWORD *)(a1 + 48);
      v35 = 4;
      if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v15, v46, 11, (__int64)&v37, (__int64)&v34, (__int64)&v35) < 0
        || v37 != 4
        || v35 != 4 )
      {
        v34 = 0;
      }
      v16 = *(_DWORD *)(a1 + 396);
      if ( inited < 0 )
      {
        v27 = *(_DWORD *)(a1 + 396) & 0x2000;
        if ( v27 && (v28 = *(_DWORD *)(a1 + 404), v28 == 1) || v27 && (v28 = *(_DWORD *)(a1 + 404), v28 == 18) )
          PipSetDevNodeProblem(a1, v28, inited);
        v19 = v46;
      }
      else
      {
        v34 &= 0xFFFFFB9F;
        v7 &= ~0x20u;
        v17 = v16 & 0x2000;
        if ( v17 && *(_DWORD *)(a1 + 404) == 1 || v17 && (*(_DWORD *)(a1 + 404) == 28 || *(_DWORD *)(a1 + 404) == 18) )
          PipClearDevNodeProblem(a1);
        if ( ((*(_DWORD *)(a1 + 300) - 770) & 0xFFFFFFEF) == 0 )
        {
          v18 = *(_DWORD *)(a1 + 396);
          if ( (v18 & 0x6000) != 0 )
          {
            if ( (v18 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 && (v38 & 2) == 0 )
            {
              PipClearDevNodeProblem(a1);
              PipClearDevNodeUserFlags(a1, 4);
            }
          }
          else if ( (v38 & 2) == 0 || PnpBootMode )
          {
            if ( (v7 & 0x40) != 0 )
              PipSetDevNodeProblem(a1, 28, v9);
          }
          else
          {
            PipSetDevNodeProblem(a1, 14, -1073741102);
            PipSetDevNodeUserFlags(a1, 4);
          }
        }
        v19 = v46;
        if ( (v43[0] & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            (unsigned int)v43,
            *(_QWORD *)(v6 + 8),
            1,
            v46,
            v30,
            (__int64)&DEVPKEY_Device_FirmwareDependencies,
            0,
            0LL,
            0);
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            (unsigned int)v43,
            *(_QWORD *)(v6 + 8),
            1,
            v19,
            v33,
            (__int64)&DEVPKEY_Device_DependencyBootSession,
            0,
            0LL,
            0);
        }
      }
      v20 = v47;
      if ( v47 || v7 )
      {
        v34 |= v7;
        PiDevCfgSetDeviceRegProp(4, (unsigned int)v43, 11, 4, (__int64)&v34, 4);
        if ( v20 )
        {
          v21 = *(_QWORD *)(v6 + 8);
          v42[0] = MEMORY[0xFFFFF78000000014];
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            (unsigned int)v43,
            v21,
            1,
            v19,
            v31,
            (__int64)&DEVPKEY_Device_InstallDate,
            16,
            (__int64)v42,
            8);
          if ( (unsigned int)PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               *(_QWORD *)(v6 + 8),
                               1u,
                               v19,
                               0LL,
                               (__int64)&DEVPKEY_Device_FirstInstallDate,
                               (__int64)&v37,
                               0LL,
                               0,
                               (__int64)&v35,
                               0) != -1073741789
            || v35 != 8 )
          {
            PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              (unsigned int)v43,
              *(_QWORD *)(v6 + 8),
              1,
              v19,
              v32,
              (__int64)&DEVPKEY_Device_FirstInstallDate,
              16,
              (__int64)v42,
              8);
          }
          v14 = v39;
        }
      }
      goto LABEL_43;
    }
LABEL_21:
    if ( PnpBootMode )
      v7 |= 0x40000u;
    if ( (v7 & 0x40) == 0 )
      *(_DWORD *)(a1 + 704) |= 1u;
    goto LABEL_25;
  }
LABEL_43:
  if ( v14 )
    PiDevCfgFreeDriverNode(v14);
LABEL_45:
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&DestinationString);
  PiDevCfgFreeDeviceContext(v43);
  if ( v6 )
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DeviceConfig_Stop, (unsigned __int16 *)v6, inited);
  return (unsigned int)inited;
}
