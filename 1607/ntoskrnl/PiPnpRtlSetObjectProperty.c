/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x140510FE4
 * Callers:
 *     PiCMSetObjectProperty @ 0x1404CCC18 (PiCMSetObjectProperty.c)
 *     PiSwPropertySet @ 0x140510214 (PiSwPropertySet.c)
 *     PnpSetDevicePropertyData @ 0x14054D73C (PnpSetDevicePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14057082C (PnpSetDeviceInterfacePropertyData.c)
 *     PiDqIrpPropertySet @ 0x140631994 (PiDqIrpPropertySet.c)
 *     PiDevCfgSetObjectProperty @ 0x1406410B0 (PiDevCfgSetObjectProperty.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     _CmIsRootEnumeratedDevice @ 0x1403F3B14 (_CmIsRootEnumeratedDevice.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14045F3F4 (SeAuditingWithTokenForSubcategory.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     _PnpSetObjectProperty @ 0x140511490 (_PnpSetObjectProperty.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x14064C7C8 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceOperation @ 0x14064C804 (PiAuditDeviceOperation.c)
 */

__int64 __fastcall PiPnpRtlSetObjectProperty(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int *a8,
        int a9,
        int a10)
{
  unsigned int v12; // r14d
  signed int v13; // ebx
  bool v14; // zf
  int v15; // edx
  DEVPROPKEY **v16; // r8
  unsigned int v17; // r9d
  DEVPROPKEY *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  unsigned int v21; // esi
  int v22; // ecx
  struct _KTHREAD *CurrentThread; // rax
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // r8
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  int v30; // [rsp+68h] [rbp-29h] BYREF
  unsigned int v31; // [rsp+6Ch] [rbp-25h] BYREF
  int v32; // [rsp+70h] [rbp-21h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-1Dh]
  int v34; // [rsp+78h] [rbp-19h] BYREF
  int v35; // [rsp+7Ch] [rbp-15h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-11h] BYREF
  char v38; // [rsp+E8h] [rbp+57h]

  v31 = 0;
  v33 = 0;
  v12 = 0;
  v32 = 0;
  v38 = 0;
  if ( a3 == 1 )
  {
    v15 = *(_DWORD *)(a6 + 16);
    v16 = PiPnpRtlDeviceReadOnlyProps;
    v17 = 0;
    while ( 1 )
    {
      v18 = *v16;
      if ( v15 == (*v16)->pid
        && *(_QWORD *)a6 == *(_QWORD *)&v18->fmtid.Data1
        && *(_QWORD *)(a6 + 8) == *(_QWORD *)v18->fmtid.Data4 )
      {
        return (unsigned int)-1073741790;
      }
      ++v17;
      ++v16;
      if ( v17 >= 9 )
      {
        v19 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
        v20 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
        if ( v15 != 12
          || *(_QWORD *)a6 != *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1
          || *(_QWORD *)(a6 + 8) != *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4 )
        {
          if ( v15 == 3
            && *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1
            && *(_QWORD *)(a6 + 8) == *(_QWORD *)DEVPKEY_Device_HardwareIds.fmtid.Data4
            || v15 == 4
            && *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1
            && *(_QWORD *)(a6 + 8) == *(_QWORD *)DEVPKEY_Device_CompatibleIds.fmtid.Data4 )
          {
            v14 = CmIsRootEnumeratedDevice(a2) == 0;
            goto LABEL_12;
          }
          goto LABEL_33;
        }
        if ( a8 && a9 == 4 )
          goto LABEL_33;
        return (unsigned int)-1073741811;
      }
    }
  }
  if ( a3 == 3 )
  {
    if ( *(_DWORD *)(a6 + 16) != 256 || *(_QWORD *)a6 != *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
      goto LABEL_32;
    v14 = *(_QWORD *)(a6 + 8) == *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
LABEL_12:
    if ( !v14 )
      goto LABEL_32;
    return (unsigned int)-1073741790;
  }
  if ( a3 == 5
    && *(_DWORD *)(a6 + 16) == 105
    && *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1
    && *(_QWORD *)(a6 + 8) == *(_QWORD *)DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data4
    && a7 != 7 )
  {
    return (unsigned int)-1073741811;
  }
LABEL_32:
  v19 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
  v20 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
LABEL_33:
  v21 = 5;
  if ( a3 == 1 )
  {
    v22 = *(_DWORD *)(a6 + 16);
    if ( v22 == 10
      && *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1
      && *(_QWORD *)(a6 + 8) == *(_QWORD *)DEVPKEY_Device_ClassGuid.fmtid.Data4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v38 = 1;
    }
    else if ( v22 == 12 && *(_QWORD *)a6 == v20 && *(_QWORD *)(a6 + 8) == v19 )
    {
      if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
      {
        v30 = 4;
        if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, a4, 11, (__int64)&v34, (__int64)&v31, (__int64)&v30, 0) < 0
          || v30 != 4
          || v34 != 4 )
        {
          v31 = 0;
        }
        v33 = *a8;
      }
    }
    else if ( v22 == 5
           && *(_QWORD *)a6 == DEVPKEY_Device_InstallError
           && *(_QWORD *)(a6 + 8) == 0x293B573F92A15394LL
           && SeAuditingWithTokenForSubcategory(138, 0LL) )
    {
      v30 = 4;
      if ( (int)PnpGetObjectProperty(
                  a1,
                  (__int64)a2,
                  1u,
                  a4,
                  0LL,
                  (__int64)&DEVPKEY_Device_InstallError,
                  (__int64)&v35,
                  (__int64)&v32,
                  4,
                  (__int64)&v30,
                  0) < 0
        || v30 != 4
        || v35 != 23 )
      {
        v32 = 0;
      }
      if ( a9 == 4 && a7 == 23 )
        v12 = *a8;
    }
  }
  v13 = PnpSetObjectProperty(a1, (_DWORD)a2, a3, a5, a6, a7, (__int64)a8, a9, a10);
  if ( a3 != 1 )
    goto LABEL_74;
  v24 = *(_DWORD *)(a6 + 16);
  if ( v24 == 12
    && *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1
    && *(_QWORD *)(a6 + 8) == *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4 )
  {
    if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      LOBYTE(v25) = v13 >= 0;
      PiAuditDeviceEnableDisableRequest(&DestinationString, v31, v33, v25);
    }
    goto LABEL_74;
  }
  if ( v24 == 5
    && *(_QWORD *)a6 == DEVPKEY_Device_InstallError
    && *(_QWORD *)(a6 + 8) == 0x293B573F92A15394LL
    && SeAuditingWithTokenForSubcategory(138, 0LL) )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    if ( v32 == -536870328 )
    {
      if ( v12 != -536870328 )
      {
        v21 = 6;
LABEL_73:
        LOBYTE(v26) = v13 >= 0;
        PiAuditDeviceOperation(&DestinationString, v21, v26);
      }
    }
    else if ( v12 == -536870328 )
    {
      goto LABEL_73;
    }
  }
LABEL_74:
  if ( v38 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    v27 = KeGetCurrentThread();
    v28 = v27->KernelApcDisable + 1;
    v27->KernelApcDisable = v28;
    if ( !v28
      && ($2B8565053CDC740D4E4887693DD8AC9E *)v27->ApcState.ApcListHead[0].Flink != &v27->152
      && !v27->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v27);
    }
  }
  return (unsigned int)v13;
}
