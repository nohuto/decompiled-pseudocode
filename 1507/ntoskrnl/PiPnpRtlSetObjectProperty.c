/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x1404D83F4
 * Callers:
 *     PiSwPropertySet @ 0x1404D7440 (PiSwPropertySet.c)
 *     PiCMSetObjectProperty @ 0x1404DA470 (PiCMSetObjectProperty.c)
 *     PnpSetDevicePropertyData @ 0x140597994 (PnpSetDevicePropertyData.c)
 *     PiDqIrpPropertySet @ 0x1405B2FC8 (PiDqIrpPropertySet.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1405B36D0 (PnpSetDeviceInterfacePropertyData.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     _PnpSetObjectProperty @ 0x1404D8694 (_PnpSetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x1404E2280 (_CmIsRootEnumeratedDevice.c)
 */

__int64 __fastcall PiPnpRtlSetObjectProperty(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9)
{
  char v11; // r12
  int v12; // edx
  DEVPROPKEY **v13; // r8
  unsigned int v14; // r10d
  DEVPROPKEY *v15; // r9
  unsigned int v16; // ebx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rax
  struct _KTHREAD *v26; // rdx
  __int16 v27; // cx
  __int64 v28; // rax
  bool v29; // zf
  int v30; // [rsp+80h] [rbp+8h]

  v30 = PiPnpRtlCtx;
  v11 = 0;
  if ( a3 == 1 )
  {
    v12 = *(_DWORD *)(a6 + 16);
    v13 = PiPnpRtlDeviceReadOnlyProps;
    v14 = 0;
    while ( 1 )
    {
      v15 = *v13;
      if ( v12 == (*v13)->pid )
      {
        v18 = *(_QWORD *)a6 - *(_QWORD *)&v15->fmtid.Data1;
        if ( *(_QWORD *)a6 == *(_QWORD *)&v15->fmtid.Data1 )
          v18 = *(_QWORD *)(a6 + 8) - *(_QWORD *)v15->fmtid.Data4;
        if ( !v18 )
          return (unsigned int)-1073741790;
      }
      ++v14;
      ++v13;
      if ( v14 >= 9 )
      {
        if ( v12 == 12 )
        {
          v25 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
          if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
            v25 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
          if ( !v25 )
          {
            if ( !a8 )
              return (unsigned int)-1073741811;
            v23 = a9 == 4;
            goto LABEL_33;
          }
        }
        if ( v12 == 3 )
        {
          v19 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1;
          if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1 )
            v19 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_HardwareIds.fmtid.Data4;
          if ( !v19 )
            goto LABEL_51;
        }
        if ( v12 == 4 )
        {
          v24 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1;
          if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1 )
            v24 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_CompatibleIds.fmtid.Data4;
          if ( !v24 )
          {
LABEL_51:
            v29 = (unsigned __int8)CmIsRootEnumeratedDevice(a2) == 0;
            goto LABEL_52;
          }
        }
        goto LABEL_8;
      }
    }
  }
  if ( a3 == 3 )
  {
    if ( *(_DWORD *)(a6 + 16) == 256 )
    {
      v28 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
        v28 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
      v29 = v28 == 0;
LABEL_52:
      if ( v29 )
        return (unsigned int)-1073741790;
    }
  }
  else if ( a3 == 5 && *(_DWORD *)(a6 + 16) == 105 )
  {
    v22 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1 )
      v22 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data4;
    if ( !v22 )
    {
      v23 = a7 == 7;
LABEL_33:
      if ( !v23 )
        return (unsigned int)-1073741811;
    }
  }
LABEL_8:
  if ( a3 == 1 && *(_DWORD *)(a6 + 16) == 10 )
  {
    v20 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1 )
      v20 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ClassGuid.fmtid.Data4;
    if ( !v20 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      v11 = 1;
    }
  }
  v16 = PnpSetObjectProperty(v30, (_DWORD)a2, a3, a5, a6, a7, a8, a9, 0);
  if ( v11 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    v26 = KeGetCurrentThread();
    v27 = v26->KernelApcDisable + 1;
    v26->KernelApcDisable = v27;
    if ( !v27
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
      && !v26->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v16;
}
