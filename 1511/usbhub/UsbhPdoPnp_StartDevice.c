/*
 * XREFs of UsbhPdoPnp_StartDevice @ 0x1C000CBE0
 * Callers:
 *     <none>
 * Callees:
 *     Usbh__TestPoint__Ulong @ 0x1C00058D0 (Usbh__TestPoint__Ulong.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C0006CC0 (UsbhReadPdoRegistryKeys.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C000B4F0 (UsbhEtwLogDeviceDescription.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C000BD7C (SET_PDO_SWPNPSTATE.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C000BF70 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     UsbhSetPdo_AllowIo @ 0x1C000CF18 (UsbhSetPdo_AllowIo.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000D190 (UsbhEtwLogDeviceIrpEvent.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C000E0A0 (UsbhDisableTimerObject.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 *     UsbhPdoSetDeviceData @ 0x1C001EBB0 (UsbhPdoSetDeviceData.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C0026440 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoRegisterWmi @ 0x1C0026E30 (UsbhPdoRegisterWmi.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D418 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 *     UsbhUpdateSqmFlags @ 0x1C0070000 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhPdoPnp_StartDevice(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  __int64 v4; // rdi
  int v5; // edx
  __int64 v6; // rcx
  int v7; // eax
  _QWORD *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  signed int DeviceProperty; // ebp
  void *v13; // rcx
  __int64 v14; // rcx
  PVOID PoolWithTag; // rax
  void *v16; // rbx
  GUID *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r9
  int v20; // ebx
  __int64 v22; // rbx
  void *v23; // r8
  int v24; // [rsp+48h] [rbp-30h]
  ULONG ResultLength; // [rsp+88h] [rbp+10h] BYREF

  v4 = PdoExt(Pdo);
  UsbhEtwLogDeviceIrpEvent(v4, Irp, &USBHUB_ETW_EVENT_DEVICE_START_DISPATCH, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1,
      14,
      (__int64)&WPP_028cdac27fb3dffc4d89443566e788cd_Traceguids,
      (char)Pdo);
  if ( *(_DWORD *)(PdoExt(Pdo) + 1120) == 101 )
  {
    v20 = 0;
    goto LABEL_23;
  }
  UsbhSetPdo_AllowIo(v6, Pdo);
  UsbhDisableTimerObject(*(_QWORD *)(v4 + 1176), v4 + 1696);
  v7 = PdoExt(Pdo);
  v8 = (_QWORD *)UsbhIncHubBusy(*(_QWORD *)(v4 + 1176), v7 + 944, (_DWORD)Pdo, 1346728819, 1);
  KeWaitForSingleObject((PVOID)(v4 + 2864), Executive, 0, 0, 0LL);
  DeviceProperty = UsbhPdoPnp_EnablePdo((__int64)Pdo, v9, v10, v11);
  if ( *(_DWORD *)(PdoExt(Pdo) + 1120) == 103 || *(_DWORD *)(PdoExt(Pdo) + 1120) == 102 )
  {
    v22 = PdoExt(Pdo);
    IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0, 0, 0LL);
    *(_DWORD *)(v22 + 2796) = 0;
    if ( (*(_DWORD *)(v4 + 1132) & 4) != 0 )
    {
      DeviceProperty = 0;
      goto LABEL_20;
    }
  }
  if ( (DeviceProperty & 0xC0000000) != 0xC0000000 && *(_DWORD *)(PdoExt(Pdo) + 1120) != 103 )
  {
    v13 = *(void **)(v4 + 2232);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *(_QWORD *)(v4 + 2232) = 0LL;
    }
    DeviceProperty = IoGetDeviceProperty(Pdo, DevicePropertyDeviceDescription, 0, 0LL, &ResultLength);
    if ( DeviceProperty == -1073741789 && ResultLength )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, ResultLength, 0x42554855u);
      v16 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_20;
      memset(PoolWithTag, 0, ResultLength);
      DeviceProperty = IoGetDeviceProperty(Pdo, DevicePropertyDeviceDescription, ResultLength, v16, &ResultLength);
      if ( DeviceProperty < 0 )
      {
        ExFreePoolWithTag(v16, 0);
        goto LABEL_20;
      }
      *(_QWORD *)(v4 + 2232) = v16;
      *(_DWORD *)(v4 + 2240) = ResultLength;
      UsbhEtwLogDeviceDescription(v4, &USBHUB_ETW_EVENT_DEVICE_START_DEVICE_DESCRIPTION);
    }
    DeviceProperty = UsbhReadPdoRegistryKeys(v14, Pdo);
    if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
    {
      v23 = &USBHUB_ETW_EVENT_DEVICE_START_REGISTRY_FAILURE;
    }
    else
    {
      v17 = &GUID_DEVINTERFACE_USB_HUB;
      if ( (*(_BYTE *)(v4 + 1412) & 4) == 0 )
        v17 = &GUID_DEVINTERFACE_USB_DEVICE;
      DeviceProperty = UsbhPdoCreateSymbolicLink(Pdo, v17);
      if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
      {
        UsbhPdoRegisterWmi(Pdo);
        goto LABEL_20;
      }
      v23 = &USBHUB_ETW_EVENT_DEVICE_START_SYMBOLIC_LINK_FAILURE;
    }
    UsbhEtwLogDeviceIrpEvent(v4, Irp, v23, (unsigned int)DeviceProperty);
  }
LABEL_20:
  SET_PDO_SWPNPSTATE((__int64)Pdo, 101, 1);
  KeSetEvent((PRKEVENT)(v4 + 2864), 0, 0);
  PdoExt(Pdo);
  UsbhDecHubBusy(*(_QWORD *)(v4 + 1176), v18, v8, v19);
  UsbhPdoSetDeviceData(*(_QWORD *)(v4 + 1176), Pdo, Pdo);
  v20 = Usbh__TestPoint__Ulong(*(_QWORD *)(v4 + 1176), 2u, DeviceProperty, *(unsigned __int16 *)(v4 + 1420));
  if ( v20 < 0 )
  {
    LOBYTE(v24) = 0;
    UsbhException(*(_QWORD *)(v4 + 1176), *(unsigned __int16 *)(v4 + 1420), 103, 0, 0, v20, 0, usbfile_pdo_c, 1564, v24);
  }
  else if ( (*(_DWORD *)(v4 + 1412) & 1) != 0 )
  {
    LOBYTE(v24) = 0;
    UsbhException(*(_QWORD *)(v4 + 1176), *(unsigned __int16 *)(v4 + 1420), 42, 0, 0, v20, 0, usbfile_pdo_c, 1548, v24);
  }
LABEL_23:
  Log(*(_QWORD *)(v4 + 1176), 256, 1398035004, (_DWORD)Irp, v20);
  UsbhEtwLogDeviceIrpEvent(v4, Irp, &USBHUB_ETW_EVENT_DEVICE_START_COMPLETE, 0LL);
  Irp->IoStatus.Status = v20;
  IofCompleteRequest(Irp, 0);
  UsbhUpdateSqmFlags(Pdo);
  return (unsigned int)v20;
}
