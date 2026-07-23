/*
 * XREFs of PiDevCfgProcessDevice @ 0x14063B1DC
 * Callers:
 *     PpDevCfgProcessDevice @ 0x140641430 (PpDevCfgProcessDevice.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x14000805C (PnpDiagnosticTraceObject.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400AF2C8 (PnpDiagnosticTraceObjectWithStatus.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PipClearDevNodeUserFlags @ 0x1403F03B8 (PipClearDevNodeUserFlags.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     PipSetDevNodeProblem @ 0x140484270 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404844A0 (PipClearDevNodeProblem.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PiDevCfgFreeDeviceContext @ 0x14050E7C8 (PiDevCfgFreeDeviceContext.c)
 *     PipSetDevNodeUserFlags @ 0x140545DD0 (PipSetDevNodeUserFlags.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637B88 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFreeDriverNode @ 0x140638DD0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgInitDeviceContext @ 0x140639568 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgMigrateRootDevice @ 0x14063AE00 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14063D598 (PiDevCfgRequestDriverConfigurations.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14063DBB0 (PiDevCfgResolveDeviceDependencies.c)
 *     PiDevCfgResolveDriverDependencies @ 0x14063DE54 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140641064 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgSetObjectProperty @ 0x1406410B0 (PiDevCfgSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgProcessDevice(__int64 a1, void *a2, char a3)
{
  __int64 v5; // r15
  int v6; // r14d
  bool v7; // si
  int v8; // r13d
  int inited; // edi
  char v10; // al
  __int64 v11; // r12
  void *v12; // r9
  unsigned __int16 *v13; // r12
  __int64 v14; // rdx
  int DeviceDriver; // eax
  __int64 v16; // rdx
  char v17; // si
  char v18; // al
  __int64 v19; // rdx
  int DeviceRegProp; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rbx
  int v26; // eax
  int v27; // edx
  __int64 v28; // r8
  int v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+28h] [rbp-D8h]
  int v32; // [rsp+28h] [rbp-D8h]
  int v33; // [rsp+28h] [rbp-D8h]
  int v34; // [rsp+28h] [rbp-D8h]
  int v35; // [rsp+28h] [rbp-D8h]
  int v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+64h] [rbp-9Ch] BYREF
  int v38; // [rsp+68h] [rbp-98h] BYREF
  int v39; // [rsp+6Ch] [rbp-94h] BYREF
  int v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 *v42; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-68h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v46[10]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v47[16]; // [rsp+100h] [rbp+0h] BYREF
  char v48; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h]
  char v51; // [rsp+1A8h] [rbp+A8h] BYREF

  v42 = 0LL;
  LODWORD(v46[0]) = 0;
  memset(&v46[1], 0, 0x40uLL);
  v5 = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  v6 = 0;
  DestinationString.Buffer = 0LL;
  v7 = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  v8 = 0;
  UnicodeString.Buffer = 0LL;
  v41 = 0LL;
  v36 = 0;
  v40 = 0;
  v48 = 0;
  v38 = 0;
  v51 = 0;
  v39 = 1;
  v37 = 0;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_120;
  }
  v42 = (unsigned __int16 *)(a1 + 40);
  PnpDiagnosticTraceObject(&KMPnPEvt_DeviceConfig_Start, (unsigned __int16 *)(a1 + 40));
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, v46);
  if ( inited >= 0 )
  {
    v10 = v46[0];
    if ( (a3 & 1) != 0 )
    {
      v10 = LOBYTE(v46[0]) | 1;
      LODWORD(v46[0]) |= 1u;
    }
    v11 = (__int64)a2;
    if ( !a2 )
      v11 = v46[2];
    v50 = v11;
    if ( (v10 & 1) != 0 )
      goto LABEL_21;
    inited = PiDevCfgResolveDeviceDependencies(v46, &v51);
    if ( inited < 0 )
      goto LABEL_120;
    if ( !v51 )
    {
      inited = 0;
      goto LABEL_120;
    }
    if ( PnpBootMode )
    {
LABEL_21:
      v13 = v42;
    }
    else
    {
      memset(v47, 0, 0x50uLL);
      HIDWORD(v47[3]) = 6;
      LODWORD(v47[1]) = 8210;
      v47[0] = &DEVPKEY_Device_PendingConfigurationIds;
      v12 = (void *)v11;
      v13 = v42;
      v47[2] = &DestinationString;
      LODWORD(v47[6]) = 8210;
      v47[5] = &DEVPKEY_Device_RequestConfigurationIds;
      v14 = *((_QWORD *)v42 + 1);
      v47[7] = &UnicodeString;
      HIDWORD(v47[8]) = 6;
      inited = PiDevCfgQueryObjectProperties(6LL, v14, 1u, v12, (__int64)v47, 2u);
      if ( inited < 0 )
        goto LABEL_120;
      if ( SLODWORD(v47[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( SLODWORD(v47[9]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( DestinationString.Buffer && !*DestinationString.Buffer )
      {
        v7 = 1;
        v8 = -1073740656;
        goto LABEL_30;
      }
    }
    DeviceDriver = PiDevCfgFindDeviceDriver((__int64)v46, DestinationString.Buffer, &v41);
    v5 = v41;
    inited = DeviceDriver;
    if ( DeviceDriver < 0 )
      goto LABEL_30;
    if ( UnicodeString.Buffer )
    {
      inited = PiDevCfgRequestDriverConfigurations(v46, v41);
      goto LABEL_30;
    }
    inited = PiDevCfgResolveDriverDependencies(v41, &v51);
    if ( inited >= 0 )
    {
      if ( v51 )
      {
        inited = PiDevCfgConfigureDevice(a1, (__int64)v46, v5, &v36, &v40);
        if ( inited >= 0 )
        {
          v6 = v36;
          v48 = 1;
        }
LABEL_30:
        if ( DestinationString.Buffer && (v5 || v7) )
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            (unsigned int)v46,
            *((_QWORD *)v13 + 1),
            1,
            v50,
            v30,
            (__int64)&DEVPKEY_Device_PendingConfigurationIds,
            0,
            0LL,
            0);
        if ( UnicodeString.Buffer )
          goto LABEL_118;
        if ( !DestinationString.Buffer )
        {
          if ( v7 )
          {
LABEL_59:
            inited = PiDevCfgConfigureDevice(a1, (__int64)v46, 0LL, &v36, &v40);
            if ( inited >= 0 )
            {
              v6 = v36;
              v18 = 1;
              v48 = 1;
              if ( v8 != -1073740656 )
              {
                switch ( v8 )
                {
                  case -1073740655:
                    v38 = -536870320;
                    break;
                  case -1073740654:
                    v38 = -536870319;
                    break;
                  case -1073740653:
                    v38 = -536870318;
                    break;
                  case -1073740652:
                    v38 = -536870375;
                    break;
                }
LABEL_72:
                if ( PnpBootMode )
                  v6 |= 0x40000u;
                if ( (v6 & 0x40) == 0 )
                  *(_DWORD *)(a1 + 704) |= 1u;
LABEL_76:
                v19 = *((_QWORD *)v13 + 1);
                v37 = 4;
                DeviceRegProp = CmGetDeviceRegProp(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  v19,
                                  v50,
                                  11,
                                  (__int64)&v39,
                                  (__int64)&v36,
                                  (__int64)&v37,
                                  0);
                v21 = 0;
                if ( DeviceRegProp < 0 || v39 != 4 || v37 != 4 )
                  v36 = 0;
                v22 = *(_DWORD *)(a1 + 396);
                if ( inited < 0 )
                {
                  v26 = *(_DWORD *)(a1 + 396) & 0x2000;
                  if ( v26 && (v27 = *(_DWORD *)(a1 + 404), v27 == 1) || v26 && (v27 = *(_DWORD *)(a1 + 404), v27 == 18) )
                    PipSetDevNodeProblem(a1, v27, inited);
                  goto LABEL_111;
                }
                v36 &= 0xFFFFFB9F;
                v6 &= ~0x20u;
                v23 = v22 & 0x2000;
                if ( v23 && *(_DWORD *)(a1 + 404) == 1
                  || v23 && (*(_DWORD *)(a1 + 404) == 28 || *(_DWORD *)(a1 + 404) == 18) )
                {
                  PipClearDevNodeProblem(a1);
                  v21 = 0;
                }
                if ( ((*(_DWORD *)(a1 + 300) - 770) & 0xFFFFFFEF) == 0 )
                {
                  v24 = *(_DWORD *)(a1 + 396);
                  if ( (v24 & 0x6000) != 0 )
                  {
                    if ( (v24 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 && (v40 & 2) == 0 )
                    {
                      PipClearDevNodeProblem(a1);
                      PipClearDevNodeUserFlags(a1, 4);
                      goto LABEL_98;
                    }
                  }
                  else
                  {
                    if ( (v40 & 2) != 0 && !PnpBootMode )
                    {
                      PipSetDevNodeProblem(a1, 14, -1073741102);
                      PipSetDevNodeUserFlags(a1, 4);
LABEL_98:
                      v21 = 0;
                      goto LABEL_99;
                    }
                    if ( (v6 & 0x40) != 0 )
                    {
                      PipSetDevNodeProblem(a1, 28, v8);
                      goto LABEL_98;
                    }
                  }
                }
LABEL_99:
                if ( v38 && (v6 & 0x40) != 0 )
                {
                  v25 = v50;
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    (unsigned int)v46,
                    *((_QWORD *)v13 + 1),
                    1,
                    v50,
                    v31,
                    (__int64)&DEVPKEY_Device_InstallError,
                    23,
                    (__int64)&v38,
                    4);
                }
                else
                {
                  v25 = v50;
                  if ( (v46[0] & 1) != 0 )
                  {
LABEL_111:
                    if ( v48 || v6 )
                    {
                      v36 |= v6;
                      PiDevCfgSetDeviceRegProp(v21, (unsigned int)v46, 11, 4, (__int64)&v36, 4);
                      if ( v48 )
                      {
                        v28 = *((_QWORD *)v13 + 1);
                        v45 = MEMORY[0xFFFFF78000000014];
                        PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          (unsigned int)v46,
                          v28,
                          1,
                          v50,
                          v34,
                          (__int64)&DEVPKEY_Device_InstallDate,
                          16,
                          (__int64)&v45,
                          8);
                        if ( (unsigned int)PnpGetObjectProperty(
                                             *(__int64 *)&PiPnpRtlCtx,
                                             *((_QWORD *)v13 + 1),
                                             1u,
                                             v50,
                                             0LL,
                                             (__int64)&DEVPKEY_Device_FirstInstallDate,
                                             (__int64)&v39,
                                             0LL,
                                             0,
                                             (__int64)&v37,
                                             0) != -1073741789
                          || v37 != 8 )
                        {
                          PiDevCfgSetObjectProperty(
                            PiPnpRtlCtx,
                            (unsigned int)v46,
                            *((_QWORD *)v13 + 1),
                            1,
                            v50,
                            v35,
                            (__int64)&DEVPKEY_Device_FirstInstallDate,
                            16,
                            (__int64)&v45,
                            8);
                        }
                        v5 = v41;
                      }
                    }
                    goto LABEL_118;
                  }
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    (unsigned int)v46,
                    *((_QWORD *)v13 + 1),
                    1,
                    v50,
                    v31,
                    (__int64)&DEVPKEY_Device_InstallError,
                    0,
                    0LL,
                    0);
                }
                v21 = 0;
                if ( (v46[0] & 1) == 0 )
                {
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    (unsigned int)v46,
                    *((_QWORD *)v13 + 1),
                    1,
                    v25,
                    v32,
                    (__int64)&DEVPKEY_Device_FirmwareDependencies,
                    0,
                    0LL,
                    0);
                  PiDevCfgSetObjectProperty(
                    PiPnpRtlCtx,
                    (unsigned int)v46,
                    *((_QWORD *)v13 + 1),
                    1,
                    v25,
                    v33,
                    (__int64)&DEVPKEY_Device_DependencyBootSession,
                    0,
                    0LL,
                    0);
                }
                goto LABEL_111;
              }
              v38 = -536870360;
LABEL_71:
              if ( !v18 )
                goto LABEL_76;
              goto LABEL_72;
            }
LABEL_70:
            v18 = v48;
            goto LABEL_71;
          }
          if ( v5 )
          {
            if ( *(int *)(v5 + 396) >= 0 )
              goto LABEL_70;
            v7 = 1;
            v8 = *(_DWORD *)(v5 + 396);
          }
          else
          {
            if ( inited != -1073740656 || (PiDevCfgMode & 2) == 0 )
              goto LABEL_70;
            if ( !PnpBootMode || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
            {
              if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode )
              {
                v16 = *((_QWORD *)v13 + 1);
                v37 = 4;
                if ( (int)CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            v16,
                            v50,
                            11,
                            (__int64)&v39,
                            (__int64)&v36,
                            (__int64)&v37,
                            0) >= 0
                  && v39 == 4
                  && v37 == 4 )
                {
                  v17 = v36;
                }
                else
                {
                  v17 = 0;
                  v36 = 0;
                }
                v7 = (v17 & 0x20) != 0;
              }
              else
              {
                v7 = 1;
              }
            }
            else
            {
              v6 = 32;
            }
            if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode
              && (int)PiDevCfgMigrateRootDevice(a1, (__int64)v46, &v36) >= 0 )
            {
              v6 |= v36;
              if ( (v36 & 1) != 0 )
              {
                v7 = 0;
                v6 &= ~0x20u;
              }
            }
            v8 = -1073740656;
          }
        }
        if ( !v7 )
          goto LABEL_70;
        goto LABEL_59;
      }
      inited = 0;
    }
LABEL_118:
    if ( v5 )
      PiDevCfgFreeDriverNode(v5);
  }
LABEL_120:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  PiDevCfgFreeDeviceContext((__int64)v46);
  if ( v42 )
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DeviceConfig_Stop, v42, inited);
  return (unsigned int)inited;
}
