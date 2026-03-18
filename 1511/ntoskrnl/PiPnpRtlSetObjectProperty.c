/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x1404E5D38
 * Callers:
 *     PiCMSetObjectProperty @ 0x1404E5A40 (PiCMSetObjectProperty.c)
 *     PiSwPropertySet @ 0x1404E5C20 (PiSwPropertySet.c)
 *     PiDqIrpPropertySet @ 0x14050DD30 (PiDqIrpPropertySet.c)
 *     PnpSetDevicePropertyData @ 0x14051C830 (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14053EC08 (PnpSetDeviceInterfacePropertyData.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1403E3928 (SeAuditingWithTokenForSubcategory.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x140458E9C (_CmIsRootEnumeratedDevice.c)
 *     _PnpSetObjectProperty @ 0x14045C530 (_PnpSetObjectProperty.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x1406179C4 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceOperation @ 0x140617A00 (PiAuditDeviceOperation.c)
 */

__int64 PiPnpRtlSetObjectProperty(
        __int64 a1,
        const WCHAR *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int *a8,
        unsigned int a9,
        ...)
{
  unsigned int v9; // r15d
  unsigned int *v12; // rbx
  int v13; // r13d
  __int64 v14; // rdi
  int v15; // r10d
  DEVPROPKEY **v16; // r8
  unsigned int v17; // r9d
  DEVPROPKEY *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // esi
  int v22; // ecx
  unsigned int v23; // eax
  signed int v24; // ebx
  int v25; // edx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  bool v38; // zf
  struct _KTHREAD *CurrentThread; // rax
  __int64 v40; // r9
  __int64 v41; // r8
  int v42; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v43; // [rsp+6Ch] [rbp-25h]
  int v44; // [rsp+70h] [rbp-21h] BYREF
  int v45; // [rsp+74h] [rbp-1Dh] BYREF
  __int64 v46; // [rsp+78h] [rbp-19h]
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-11h] BYREF
  unsigned int v48; // [rsp+D8h] [rbp+47h] BYREF
  int v49; // [rsp+DCh] [rbp+4Bh]
  char v50; // [rsp+E8h] [rbp+57h]
  __int64 v51; // [rsp+F0h] [rbp+5Fh]
  __int64 v52; // [rsp+120h] [rbp+8Fh] BYREF
  va_list va; // [rsp+120h] [rbp+8Fh]
  va_list va1; // [rsp+128h] [rbp+97h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v52 = va_arg(va1, _QWORD);
  v51 = a4;
  v49 = HIDWORD(a1);
  v48 = 0;
  v9 = 0;
  v43 = 0;
  v42 = 0;
  v12 = a8;
  v13 = a7;
  v14 = a6;
  v46 = *(_QWORD *)&PiPnpRtlCtx;
  v50 = 0;
  if ( a3 == 1 )
  {
    v15 = *(_DWORD *)(a6 + 16);
    v16 = PiPnpRtlDeviceReadOnlyProps;
    v17 = 0;
    while ( 1 )
    {
      v18 = *v16;
      if ( v15 == (*v16)->pid )
      {
        v27 = *(_QWORD *)a6 - *(_QWORD *)&v18->fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&v18->fmtid.Data1 )
          v27 = *(_QWORD *)(a6 + 8) - *(_QWORD *)v18->fmtid.Data4;
        if ( !v27 )
          return (unsigned int)-1073741790;
      }
      ++v17;
      ++v16;
      if ( v17 >= 9 )
      {
        v19 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
        v20 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
        if ( v15 != 12 )
          goto LABEL_51;
        v34 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
          v34 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
        if ( v34 )
        {
LABEL_51:
          if ( v15 == 3 )
          {
            v29 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1;
            if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1 )
              v29 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_HardwareIds.fmtid.Data4;
            if ( !v29 )
              goto LABEL_68;
          }
          if ( v15 == 4 )
          {
            v33 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1;
            if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1 )
              v33 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_CompatibleIds.fmtid.Data4;
            if ( !v33 )
            {
LABEL_68:
              v38 = CmIsRootEnumeratedDevice(a2) == 0;
              goto LABEL_69;
            }
          }
          goto LABEL_8;
        }
        if ( a8 && a9 == 4 )
          goto LABEL_8;
        return (unsigned int)-1073741811;
      }
    }
  }
  if ( a3 == 3 )
  {
    if ( *(_DWORD *)(a6 + 16) == 256 )
    {
      v37 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
        v37 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
      v38 = v37 == 0;
LABEL_69:
      if ( v38 )
        return (unsigned int)-1073741790;
    }
  }
  else if ( a3 == 5 && *(_DWORD *)(a6 + 16) == 105 )
  {
    v28 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1 )
      v28 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data4;
    if ( !v28 && a7 != 7 )
      return (unsigned int)-1073741811;
  }
  v19 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
  v20 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
LABEL_8:
  v21 = 5;
  if ( a3 == 1 )
  {
    v22 = *(_DWORD *)(v14 + 16);
    if ( v22 != 10 )
      goto LABEL_59;
    v30 = *(_QWORD *)v14 - *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1;
    if ( *(_QWORD *)v14 == *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1 )
      v30 = *(_QWORD *)(v14 + 8) - *(_QWORD *)DEVPKEY_Device_ClassGuid.fmtid.Data4;
    if ( v30 )
    {
LABEL_59:
      if ( v22 != 12 )
        goto LABEL_99;
      v35 = *(_QWORD *)v14 - v20;
      if ( *(_QWORD *)v14 == v20 )
        v35 = *(_QWORD *)(v14 + 8) - v19;
      if ( v35 )
      {
LABEL_99:
        if ( v22 == 5 )
        {
          v31 = *(_QWORD *)v14 - DEVPKEY_Device_InstallError;
          if ( *(_QWORD *)v14 == DEVPKEY_Device_InstallError )
            v31 = *(_QWORD *)(v14 + 8) - 0x293B573F92A15394LL;
          if ( !v31 && SeAuditingWithTokenForSubcategory(137, 0LL) )
          {
            LODWORD(v52) = 4;
            if ( (int)PnpGetObjectProperty(
                        v46,
                        (__int64)a2,
                        1u,
                        v51,
                        0LL,
                        (__int64)&DEVPKEY_Device_InstallError,
                        (__int64)&v45,
                        (__int64)&v42,
                        4,
                        (__int64)va,
                        0) < 0
              || (_DWORD)v52 != 4
              || v45 != 23 )
            {
              v42 = 0;
            }
            v23 = a9;
            if ( a9 == 4 && v13 == 23 )
              v9 = *v12;
            goto LABEL_13;
          }
        }
      }
      else if ( SeAuditingWithTokenForSubcategory(137, 0LL) )
      {
        LODWORD(v52) = 4;
        if ( (int)CmGetDeviceRegProp(v46, (__int64)a2, v51, 11, (__int64)&v44, (__int64)&v48, (__int64)va) < 0
          || (_DWORD)v52 != 4
          || v44 != 4 )
        {
          v48 = 0;
        }
        v43 = *v12;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      v50 = 1;
    }
  }
  v23 = a9;
LABEL_13:
  v24 = PnpSetObjectProperty(v46, (__int64)a2, a3, v51, a5, v14, v13, (__int64)v12, v23, 0);
  if ( a3 == 1 )
  {
    v25 = *(_DWORD *)(v14 + 16);
    if ( v25 == 12 )
    {
      v36 = *(_QWORD *)v14 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
      if ( *(_QWORD *)v14 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
        v36 = *(_QWORD *)(v14 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
      if ( !v36 )
      {
        if ( SeAuditingWithTokenForSubcategory(137, 0LL) )
        {
          RtlInitUnicodeString(&DestinationString, a2);
          LOBYTE(v40) = v24 >= 0;
          PiAuditDeviceEnableDisableRequest(&DestinationString, v48, v43, v40);
        }
        goto LABEL_16;
      }
    }
    if ( v25 == 5 )
    {
      v32 = *(_QWORD *)v14 - DEVPKEY_Device_InstallError;
      if ( *(_QWORD *)v14 == DEVPKEY_Device_InstallError )
        v32 = *(_QWORD *)(v14 + 8) - 0x293B573F92A15394LL;
      if ( !v32 && SeAuditingWithTokenForSubcategory(137, 0LL) )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        if ( v42 == -536870328 )
        {
          if ( v9 == -536870328 )
            goto LABEL_16;
          v21 = 6;
        }
        else if ( v9 != -536870328 )
        {
          goto LABEL_16;
        }
        LOBYTE(v41) = v24 >= 0;
        PiAuditDeviceOperation(&DestinationString, v21, v41);
      }
    }
  }
LABEL_16:
  if ( v50 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v24;
}
