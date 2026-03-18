/*
 * XREFs of UsbhPdoPnp_StartDevice @ 0x1C001A2F0
 * Callers:
 *     <none>
 * Callees:
 *     Usbh__TestPoint__Ulong @ 0x1C00059E0 (Usbh__TestPoint__Ulong.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C0008DB0 (UsbhReadPdoRegistryKeys.c)
 *     UsbhDecHubBusy @ 0x1C000D2D0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSetPdo_AllowIo @ 0x1C001A68C (UsbhSetPdo_AllowIo.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C001B6A8 (UsbhPdoPnp_EnablePdo.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C001B744 (SET_PDO_SWPNPSTATE.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C001BBA0 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDisableTimerObject @ 0x1C001C6C0 (UsbhDisableTimerObject.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001DD90 (UsbhEtwLogDeviceDescription.c)
 *     UsbhPdoSetDeviceData @ 0x1C0020F50 (UsbhPdoSetDeviceData.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C0026FC0 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoRegisterWmi @ 0x1C00277B0 (UsbhPdoRegisterWmi.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D738 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 *     UsbhUpdateSqmFlags @ 0x1C0070000 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhPdoPnp_StartDevice(PDEVICE_OBJECT Pdo, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rax
  _QWORD *v15; // r12
  signed int DeviceProperty; // ebp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rcx
  __int64 v24; // rcx
  PVOID PoolWithTag; // rax
  void *v26; // rbx
  GUID *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r9
  int v33; // ebx
  _DWORD *v35; // rbx
  void *v36; // r8
  int v37; // [rsp+48h] [rbp-30h]
  ULONG ResultLength; // [rsp+88h] [rbp+10h] BYREF

  v6 = PdoExt((__int64)Pdo, (__int64)Irp, a3, a4);
  UsbhEtwLogDeviceIrpEvent(v6, Irp, &USBHUB_ETW_EVENT_DEVICE_START_DISPATCH, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      1,
      14,
      (__int64)&WPP_eedbca65ee47349068ca6cb62991bd41_Traceguids,
      (char)Pdo);
  if ( PdoExt((__int64)Pdo, v7, v8, v9)[280] == 101 )
  {
    v33 = 0;
    goto LABEL_23;
  }
  UsbhSetPdo_AllowIo(v10, Pdo);
  UsbhDisableTimerObject(*((_QWORD *)v6 + 147), v6 + 424);
  v14 = PdoExt((__int64)Pdo, v11, v12, v13);
  v15 = (_QWORD *)UsbhIncHubBusy(*((PDEVICE_OBJECT *)v6 + 147), (__int64)(v14 + 236), (__int64)Pdo, 1346728819LL, 1);
  KeWaitForSingleObject(v6 + 716, Executive, 0, 0, 0LL);
  DeviceProperty = UsbhPdoPnp_EnablePdo(Pdo);
  if ( PdoExt((__int64)Pdo, v17, v18, v19)[280] == 103 || PdoExt((__int64)Pdo, v20, v21, v22)[280] == 102 )
  {
    v35 = PdoExt((__int64)Pdo, v20, v21, v22);
    IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0, 0, 0LL);
    v35[699] = 0;
    if ( (v6[283] & 4) != 0 )
    {
      DeviceProperty = 0;
      goto LABEL_20;
    }
  }
  if ( (DeviceProperty & 0xC0000000) != 0xC0000000 && PdoExt((__int64)Pdo, v20, v21, v22)[280] != 103 )
  {
    v23 = (void *)*((_QWORD *)v6 + 279);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      *((_QWORD *)v6 + 279) = 0LL;
    }
    DeviceProperty = IoGetDeviceProperty(Pdo, DevicePropertyDeviceDescription, 0, 0LL, &ResultLength);
    if ( DeviceProperty == -1073741789 && ResultLength )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, ResultLength, 0x42554855u);
      v26 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_20;
      memset(PoolWithTag, 0, ResultLength);
      DeviceProperty = IoGetDeviceProperty(Pdo, DevicePropertyDeviceDescription, ResultLength, v26, &ResultLength);
      if ( DeviceProperty < 0 )
      {
        ExFreePoolWithTag(v26, 0);
        goto LABEL_20;
      }
      *((_QWORD *)v6 + 279) = v26;
      v6[560] = ResultLength;
      UsbhEtwLogDeviceDescription(v6, &USBHUB_ETW_EVENT_DEVICE_START_DEVICE_DESCRIPTION);
    }
    DeviceProperty = UsbhReadPdoRegistryKeys(v24, Pdo);
    if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
    {
      v36 = &USBHUB_ETW_EVENT_DEVICE_START_REGISTRY_FAILURE;
    }
    else
    {
      v27 = &GUID_DEVINTERFACE_USB_HUB;
      if ( (v6[353] & 4) == 0 )
        v27 = &GUID_DEVINTERFACE_USB_DEVICE;
      DeviceProperty = UsbhPdoCreateSymbolicLink(Pdo, v27);
      if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
      {
        UsbhPdoRegisterWmi(Pdo);
        goto LABEL_20;
      }
      v36 = &USBHUB_ETW_EVENT_DEVICE_START_SYMBOLIC_LINK_FAILURE;
    }
    UsbhEtwLogDeviceIrpEvent(v6, Irp, v36, (unsigned int)DeviceProperty);
  }
LABEL_20:
  SET_PDO_SWPNPSTATE(Pdo, 101LL, 1LL);
  KeSetEvent((PRKEVENT)(v6 + 716), 0, 0);
  PdoExt((__int64)Pdo, v28, v29, v30);
  UsbhDecHubBusy(*((_QWORD *)v6 + 147), v31, v15, v32);
  UsbhPdoSetDeviceData(*((_QWORD *)v6 + 147), Pdo, Pdo);
  v33 = Usbh__TestPoint__Ulong(*((_QWORD *)v6 + 147), 2u, DeviceProperty, *((unsigned __int16 *)v6 + 710));
  if ( v33 < 0 )
  {
    LOBYTE(v37) = 0;
    UsbhException(*((_QWORD *)v6 + 147), *((unsigned __int16 *)v6 + 710), 103, 0, 0, v33, 0, usbfile_pdo_c, 1564, v37);
  }
  else if ( (v6[353] & 1) != 0 )
  {
    LOBYTE(v37) = 0;
    UsbhException(*((_QWORD *)v6 + 147), *((unsigned __int16 *)v6 + 710), 42, 0, 0, v33, 0, usbfile_pdo_c, 1548, v37);
  }
LABEL_23:
  Log(*((_QWORD *)v6 + 147), 256, 1398035004, (__int64)Irp, v33);
  UsbhEtwLogDeviceIrpEvent(v6, Irp, &USBHUB_ETW_EVENT_DEVICE_START_COMPLETE, 0LL);
  Irp->IoStatus.Status = v33;
  IofCompleteRequest(Irp, 0);
  UsbhUpdateSqmFlags(Pdo);
  return (unsigned int)v33;
}
