/*
 * XREFs of PiDevCfgProcessDevice @ 0x14058793C
 * Callers:
 *     PpDevCfgProcessDevice @ 0x140587928 (PpDevCfgProcessDevice.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PipClearDevNodeUserFlags @ 0x1404615D0 (PipClearDevNodeUserFlags.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140538C94 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeUserFlags @ 0x140581810 (PipSetDevNodeUserFlags.c)
 *     PiDevCfgFreeDriverNode @ 0x140587BE8 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgResolveDriverDependencies @ 0x140588148 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgFindDeviceDriver @ 0x140588230 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgSetObjectProperty @ 0x140589E38 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgMigrateDevice @ 0x140589F68 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgInitDeviceContext @ 0x14058A12C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x1405B20A8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x140688120 (PiDevCfgOpenDeviceMigrationKey.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x140689244 (PiDevCfgRequestDriverConfigurations.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x1406893E8 (PiDevCfgResolveDeviceDependencies.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14068CBF4 (PiDevCfgSetDeviceRegProp.c)
 */

__int64 __fastcall PiDevCfgProcessDevice(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 *v6; // r15
  int v7; // esi
  bool v8; // r14
  REGHANDLE v9; // rdi
  int inited; // edi
  char v11; // al
  __int64 v12; // r12
  int DeviceDriver; // eax
  __int64 v14; // r13
  char v15; // r14
  __int64 v16; // rdx
  REGHANDLE v17; // rbx
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rdx
  char v22; // r14
  int v23; // eax
  __int64 v24; // r8
  int v25; // r8d
  int v26; // [rsp+28h] [rbp-D8h]
  int v27; // [rsp+28h] [rbp-D8h]
  int v28; // [rsp+28h] [rbp-D8h]
  int v29; // [rsp+28h] [rbp-D8h]
  int v30; // [rsp+28h] [rbp-D8h]
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[4]; // [rsp+64h] [rbp-9Ch] BYREF
  __int16 v33; // [rsp+68h] [rbp-98h] BYREF
  int v34; // [rsp+6Ch] [rbp-94h] BYREF
  int v35; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+74h] [rbp-8Ch] BYREF
  int v37; // [rsp+78h] [rbp-88h] BYREF
  __int16 v38; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  __int64 v40; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v45[2]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v46[10]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v47[10]; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+170h] [rbp+70h] BYREF
  __int64 v49; // [rsp+180h] [rbp+80h]
  int v50; // [rsp+188h] [rbp+88h]
  int v51; // [rsp+18Ch] [rbp+8Ch]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+190h] [rbp+90h] BYREF
  __int64 v53; // [rsp+1A0h] [rbp+A0h]
  int v54; // [rsp+1A8h] [rbp+A8h]
  int v55; // [rsp+1ACh] [rbp+ACh]
  __int64 *v56; // [rsp+1B0h] [rbp+B0h]
  int v57; // [rsp+1B8h] [rbp+B8h]
  int v58; // [rsp+1BCh] [rbp+BCh]

  v44 = a2;
  LODWORD(v46[0]) = 0;
  v6 = 0LL;
  memset(&v46[1], 0, 0x40uLL);
  v7 = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  v8 = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  v40 = 0LL;
  v31 = 0;
  v37 = 0;
  LOBYTE(v33) = 0;
  v36 = 0;
  v32[0] = 0;
  Handle = 0LL;
  P = 0LL;
  v35 = 1;
  v34 = 0;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_30;
  }
  v9 = PnpEtwHandle;
  v6 = (unsigned __int16 *)(a1 + 40);
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DeviceConfig_Start) )
  {
    v19 = *v6;
    UserData.Reserved = 0;
    v51 = 0;
    v38 = (unsigned __int16)v19 >> 1;
    UserData.Ptr = (ULONGLONG)&v38;
    v49 = *(_QWORD *)(a1 + 48);
    UserData.Size = 2;
    v50 = v19;
    EtwWrite(v9, &KMPnPEvt_DeviceConfig_Start, 0LL, 2u, &UserData);
  }
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, v46);
  if ( inited >= 0 )
  {
    v11 = v46[0];
    if ( (a3 & 1) != 0 )
    {
      v11 = LOBYTE(v46[0]) | 1;
      LODWORD(v46[0]) |= 1u;
    }
    v12 = v44;
    if ( !v44 )
      v12 = v46[2];
    if ( (v11 & 1) == 0 )
    {
      inited = PiDevCfgResolveDeviceDependencies(v46, v32);
      if ( inited < 0 )
        goto LABEL_30;
      if ( !v32[0] )
      {
        inited = 0;
        goto LABEL_30;
      }
      if ( !PnpBootMode )
      {
        memset(v47, 0, sizeof(v47));
        LODWORD(v47[1]) = 8210;
        LODWORD(v47[6]) = 8210;
        v20 = *(_QWORD *)(a1 + 48);
        v47[0] = &DEVPKEY_Device_PendingConfigurationIds;
        HIDWORD(v47[3]) = 6;
        v47[2] = &UnicodeString;
        v47[5] = &DEVPKEY_Device_RequestConfigurationIds;
        v47[7] = &DestinationString;
        HIDWORD(v47[8]) = 6;
        inited = PiDevCfgQueryObjectProperties(6, v20, 1, v12, (__int64)v47, 2);
        if ( inited < 0 )
          goto LABEL_30;
        if ( SLODWORD(v47[4]) < 0 )
          RtlInitUnicodeString(&UnicodeString, 0LL);
        if ( SLODWORD(v47[9]) < 0 )
          RtlInitUnicodeString(&DestinationString, 0LL);
      }
    }
    DeviceDriver = PiDevCfgFindDeviceDriver(v46, UnicodeString.Buffer, &v40);
    v14 = v40;
    inited = DeviceDriver;
    if ( DeviceDriver < 0 )
      goto LABEL_48;
    if ( !DestinationString.Buffer )
    {
      inited = PiDevCfgResolveDriverDependencies(v40, v32);
      if ( inited >= 0 )
      {
        if ( v32[0] )
        {
          inited = PiDevCfgConfigureDevice(a1, (unsigned int)v46, (__int64)&v37);
          if ( inited >= 0 )
          {
            v7 = v31;
            LOBYTE(v33) = 1;
          }
          goto LABEL_17;
        }
        inited = 0;
      }
LABEL_28:
      if ( v14 )
        PiDevCfgFreeDriverNode(v14);
      goto LABEL_30;
    }
    inited = PiDevCfgRequestDriverConfigurations(v46, v40);
LABEL_17:
    if ( !UnicodeString.Buffer )
      goto LABEL_18;
    PiDevCfgSetObjectProperty(
      PiPnpRtlCtx,
      (unsigned int)v46,
      *(_QWORD *)(a1 + 48),
      1,
      v12,
      v26,
      (__int64)&DEVPKEY_Device_PendingConfigurationIds,
      0,
      0LL,
      0);
LABEL_48:
    if ( UnicodeString.Buffer )
      goto LABEL_21;
LABEL_18:
    if ( DestinationString.Buffer )
      goto LABEL_21;
    if ( v14 )
    {
      if ( !*(_DWORD *)(v14 + 396) )
        goto LABEL_21;
      v8 = 1;
      v36 = *(_DWORD *)(v14 + 396);
    }
    else
    {
      if ( inited != -1073741772 || (PiDevCfgMode & 2) == 0 )
        goto LABEL_21;
      if ( !PnpBootMode || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
      {
        if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode )
        {
          v21 = *(_QWORD *)(a1 + 48);
          v34 = 4;
          if ( (int)CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      v21,
                      v12,
                      11,
                      (__int64)&v35,
                      (__int64)&v31,
                      (__int64)&v34) >= 0
            && v35 == 4
            && v34 == 4 )
          {
            v22 = v31;
          }
          else
          {
            v22 = 0;
            v31 = 0;
          }
          v8 = (v22 & 0x20) != 0;
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
      if ( *(_QWORD *)(a1 + 16) == IopRootDeviceNode && (int)PiDevCfgOpenDeviceMigrationKey(*(PCWSTR *)(a1 + 48)) >= 0 )
      {
        v31 = 0;
        if ( IopGetRegistryValue(Handle, L"ConfigFlags", 0, &P) >= 0 )
        {
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
            v31 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
          ExFreePoolWithTag(P, 0);
        }
        if ( (v31 & 1) != 0 && IopGetRegistryValue(Handle, L"DriverInfName", 0, &P) >= 0 )
        {
          ExFreePoolWithTag(P, 0);
          v31 = 0;
        }
        ZwClose(Handle);
        if ( (v31 & 1) != 0 && (int)PiDevCfgMigrateDevice(a1, (unsigned int)v46, 0, 0, (__int64)&v31, 0LL) >= 0 )
        {
          v7 |= v31;
          if ( (v31 & 1) != 0 )
          {
            v8 = 0;
            v7 &= ~0x20u;
          }
        }
      }
      v36 = -536870360;
    }
    if ( v8 )
    {
      inited = PiDevCfgConfigureDevice(a1, (unsigned int)v46, (__int64)&v37);
      if ( inited >= 0 )
      {
        v7 = v31;
        LOBYTE(v33) = 1;
        if ( !v36 || (v31 & 0x40) == 0 )
        {
          v15 = v33;
          goto LABEL_85;
        }
        PiDevCfgSetObjectProperty(
          PiPnpRtlCtx,
          (unsigned int)v46,
          *(_QWORD *)(a1 + 48),
          1,
          v12,
          v26,
          (__int64)&DEVPKEY_Device_InstallError,
          23,
          (__int64)&v36,
          4);
      }
    }
LABEL_21:
    v15 = v33;
    if ( !(_BYTE)v33 )
    {
LABEL_22:
      v16 = *(_QWORD *)(a1 + 48);
      v34 = 4;
      if ( (int)CmGetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v16, v12, 11, (__int64)&v35, (__int64)&v31, (__int64)&v34) < 0
        || v35 != 4
        || v34 != 4 )
      {
        v31 = 0;
      }
      if ( inited >= 0 )
      {
        v31 &= 0xFFFFFB9F;
        v7 &= ~0x20u;
        if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 1
          || (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && (*(_DWORD *)(a1 + 404) == 28 || *(_DWORD *)(a1 + 404) == 18) )
        {
          PipClearDevNodeProblem(a1);
        }
        if ( ((*(_DWORD *)(a1 + 300) - 770) & 0xFFFFFFEF) == 0 )
        {
          v23 = *(_DWORD *)(a1 + 396);
          if ( (v23 & 0x6000) != 0 )
          {
            if ( (v23 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 && (v37 & 2) == 0 )
            {
              PipClearDevNodeProblem(a1);
              PipClearDevNodeUserFlags(a1, 4);
            }
          }
          else if ( (v37 & 2) == 0 || PnpBootMode )
          {
            if ( (v7 & 0x40) != 0 )
              PipSetDevNodeProblem(a1, 28, 0);
          }
          else
          {
            PipSetDevNodeProblem(a1, 14, 0);
            PipSetDevNodeUserFlags(a1, 4);
          }
        }
        if ( (v46[0] & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            (unsigned int)v46,
            *(_QWORD *)(a1 + 48),
            1,
            v12,
            v27,
            (__int64)&DEVPKEY_Device_FirmwareDependencies,
            0,
            0LL,
            0);
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            (unsigned int)v46,
            *(_QWORD *)(a1 + 48),
            1,
            v12,
            v28,
            (__int64)&DEVPKEY_Device_DependencyBootSession,
            0,
            0LL,
            0);
        }
      }
      if ( v15 || v7 )
      {
        v31 |= v7;
        PiDevCfgSetDeviceRegProp(PiPnpRtlCtx, (unsigned int)v46, 11, 4, (__int64)&v31, 4);
        if ( v15 )
        {
          v24 = *(_QWORD *)(a1 + 48);
          v45[0] = MEMORY[0xFFFFF78000000014];
          PiDevCfgSetObjectProperty(
            PiPnpRtlCtx,
            (unsigned int)v46,
            v24,
            1,
            v12,
            v29,
            (__int64)&DEVPKEY_Device_InstallDate,
            16,
            (__int64)v45,
            8);
          if ( (unsigned int)PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               *(_QWORD *)(a1 + 48),
                               1u,
                               v12,
                               0LL,
                               (__int64)&DEVPKEY_Device_FirstInstallDate,
                               (__int64)&v35,
                               0LL,
                               0,
                               (__int64)&v34,
                               0) != -1073741789
            || v34 != 8 )
          {
            PiDevCfgSetObjectProperty(
              PiPnpRtlCtx,
              (unsigned int)v46,
              *(_QWORD *)(a1 + 48),
              1,
              v12,
              v30,
              (__int64)&DEVPKEY_Device_FirstInstallDate,
              16,
              (__int64)v45,
              8);
          }
          v14 = v40;
        }
      }
      goto LABEL_28;
    }
LABEL_85:
    if ( PnpBootMode )
      v7 |= 0x40000u;
    if ( (v7 & 0x40) == 0 )
      *(_DWORD *)(a1 + 704) |= 1u;
    goto LABEL_22;
  }
LABEL_30:
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&DestinationString);
  PiDevCfgFreeDeviceContext(v46);
  if ( v6 )
  {
    v17 = PnpEtwHandle;
    LODWORD(v44) = inited;
    if ( PnpEtwHandle )
    {
      if ( EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_DeviceConfig_Stop) )
      {
        v25 = *v6;
        v52.Reserved = 0;
        v55 = 0;
        v58 = 0;
        v33 = (unsigned __int16)v25 >> 1;
        v52.Ptr = (ULONGLONG)&v33;
        v53 = *((_QWORD *)v6 + 1);
        v56 = &v44;
        v54 = v25;
        v52.Size = 2;
        v57 = 4;
        EtwWrite(v17, &KMPnPEvt_DeviceConfig_Stop, 0LL, 3u, &v52);
      }
    }
  }
  return (unsigned int)inited;
}
