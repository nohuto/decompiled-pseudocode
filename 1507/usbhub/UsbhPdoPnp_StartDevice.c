/*
 * XREFs of UsbhPdoPnp_StartDevice @ 0x1C001B890
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReadPdoRegistryKeys @ 0x1C0005E80 (UsbhReadPdoRegistryKeys.c)
 *     Usbh__TestPoint__Ulong @ 0x1C00075B8 (Usbh__TestPoint__Ulong.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C00084E0 (SET_PDO_SWPNPSTATE.c)
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C000BDAC (UsbhPdoPnp_EnablePdo.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C0019B00 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDisableTimerObject @ 0x1C001A5B0 (UsbhDisableTimerObject.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001C128 (UsbhEtwLogDeviceDescription.c)
 *     UsbhPdoSetDeviceData @ 0x1C001F290 (UsbhPdoSetDeviceData.c)
 *     UsbhSetPdo_AllowIo @ 0x1C00271A0 (UsbhSetPdo_AllowIo.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C0027288 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoRegisterWmi @ 0x1C0027D4C (UsbhPdoRegisterWmi.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D1E8 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 *     UsbhUpdateSqmFlags @ 0x1C006F000 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhPdoPnp_StartDevice(PDEVICE_OBJECT Pdo, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rax
  _QWORD *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  signed int DeviceProperty; // ebp
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // rcx
  __int64 v29; // rcx
  PVOID PoolWithTag; // rax
  void *v31; // rbx
  GUID *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r9
  int v38; // ebx
  _DWORD *v40; // rbx
  const EVENT_DESCRIPTOR *v41; // r8
  int v42; // [rsp+48h] [rbp-30h]
  ULONG ResultLength; // [rsp+88h] [rbp+10h] BYREF

  v6 = PdoExt((__int64)Pdo, (__int64)Irp, a3, a4);
  UsbhEtwLogDeviceIrpEvent((__int64)v6, (__int64)Irp, &USBHUB_ETW_EVENT_DEVICE_START_DISPATCH, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      1,
      14,
      (__int64)&WPP_eb1fb4854d83e9122fff90925f566374_Traceguids,
      (char)Pdo);
  if ( PdoExt((__int64)Pdo, v7, v8, v9)[280] == 101 )
  {
    v38 = 0;
    goto LABEL_23;
  }
  UsbhSetPdo_AllowIo(v10, Pdo);
  UsbhDisableTimerObject(*((_QWORD *)v6 + 147), (__int64)(v6 + 424), v11, v12);
  v16 = PdoExt((__int64)Pdo, v13, v14, v15);
  v17 = (_QWORD *)UsbhIncHubBusy(*((PDEVICE_OBJECT *)v6 + 147), (__int64)(v16 + 236), (__int64)Pdo, 1346728819LL, 1);
  KeWaitForSingleObject(v6 + 714, Executive, 0, 0, 0LL);
  DeviceProperty = UsbhPdoPnp_EnablePdo((__int64)Pdo, v18, v19, v20);
  if ( PdoExt((__int64)Pdo, v22, v23, v24)[280] == 103 || PdoExt((__int64)Pdo, v25, v26, v27)[280] == 102 )
  {
    v40 = PdoExt((__int64)Pdo, v25, v26, v27);
    IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0, 0, 0LL);
    v40[697] = 0;
    if ( (v6[283] & 4) != 0 )
    {
      DeviceProperty = 0;
      goto LABEL_20;
    }
  }
  if ( (DeviceProperty & 0xC0000000) != 0xC0000000 && PdoExt((__int64)Pdo, v25, v26, v27)[280] != 103 )
  {
    v28 = (void *)*((_QWORD *)v6 + 279);
    if ( v28 )
    {
      ExFreePoolWithTag(v28, 0);
      *((_QWORD *)v6 + 279) = 0LL;
    }
    DeviceProperty = IoGetDeviceProperty(Pdo, DevicePropertyDeviceDescription, 0, 0LL, &ResultLength);
    if ( DeviceProperty == -1073741789 && ResultLength )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, ResultLength, 0x42554855u);
      v31 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_20;
      memset(PoolWithTag, 0, ResultLength);
      DeviceProperty = IoGetDeviceProperty(Pdo, DevicePropertyDeviceDescription, ResultLength, v31, &ResultLength);
      if ( DeviceProperty < 0 )
      {
        ExFreePoolWithTag(v31, 0);
        goto LABEL_20;
      }
      *((_QWORD *)v6 + 279) = v31;
      v6[560] = ResultLength;
      UsbhEtwLogDeviceDescription(v6, &USBHUB_ETW_EVENT_DEVICE_START_DEVICE_DESCRIPTION);
    }
    DeviceProperty = UsbhReadPdoRegistryKeys(v29, Pdo);
    if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
    {
      v41 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_START_REGISTRY_FAILURE;
    }
    else
    {
      v32 = &GUID_DEVINTERFACE_USB_HUB;
      if ( (v6[353] & 4) == 0 )
        v32 = &GUID_DEVINTERFACE_USB_DEVICE;
      DeviceProperty = UsbhPdoCreateSymbolicLink(Pdo, v32);
      if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
      {
        UsbhPdoRegisterWmi(Pdo);
        goto LABEL_20;
      }
      v41 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_START_SYMBOLIC_LINK_FAILURE;
    }
    UsbhEtwLogDeviceIrpEvent((__int64)v6, (__int64)Irp, v41, (unsigned int)DeviceProperty);
  }
LABEL_20:
  SET_PDO_SWPNPSTATE((__int64)Pdo, 101, 1);
  KeSetEvent((PRKEVENT)v6 + 119, 0, 0);
  PdoExt((__int64)Pdo, v33, v34, v35);
  UsbhDecHubBusy(*((_QWORD *)v6 + 147), v36, v17, v37);
  UsbhPdoSetDeviceData(*((_QWORD *)v6 + 147), Pdo, Pdo);
  v38 = Usbh__TestPoint__Ulong(*((_QWORD *)v6 + 147), 2u, DeviceProperty, *((unsigned __int16 *)v6 + 710));
  if ( v38 < 0 )
  {
    LOBYTE(v42) = 0;
    UsbhException(*((_QWORD *)v6 + 147), *((unsigned __int16 *)v6 + 710), 103, 0, 0, v38, 0, usbfile_pdo_c, 1565, v42);
  }
  else if ( (v6[353] & 1) != 0 )
  {
    LOBYTE(v42) = 0;
    UsbhException(*((_QWORD *)v6 + 147), *((unsigned __int16 *)v6 + 710), 42, 0, 0, v38, 0, usbfile_pdo_c, 1549, v42);
  }
LABEL_23:
  Log(*((_QWORD *)v6 + 147), 256, 1398035004, (__int64)Irp, v38);
  UsbhEtwLogDeviceIrpEvent((__int64)v6, (__int64)Irp, &USBHUB_ETW_EVENT_DEVICE_START_COMPLETE, 0LL);
  Irp->IoStatus.Status = v38;
  IofCompleteRequest(Irp, 0);
  UsbhUpdateSqmFlags(Pdo);
  return (unsigned int)v38;
}
