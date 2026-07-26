/*
 * XREFs of ndisPnPDispatch @ 0x1C009FAA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     Template_jqxq @ 0x1C003A110 (Template_jqxq.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C009A8A0 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisPnPIrpQueryInterface @ 0x1C009F92C (ndisPnPIrpQueryInterface.c)
 *     ndisPnPIrpQueryCapabilities @ 0x1C009FCDC (ndisPnPIrpQueryCapabilities.c)
 *     ndisPnPIrpFilterResourceRequirements @ 0x1C009FDD4 (ndisPnPIrpFilterResourceRequirements.c)
 *     ndisPnPIrpQueryPnPDeviceState @ 0x1C009FE58 (ndisPnPIrpQueryPnPDeviceState.c)
 *     ndisPnPIrpStartDevice @ 0x1C009FF2C (ndisPnPIrpStartDevice.c)
 *     NdisMSleep @ 0x1C00AFE00 (NdisMSleep.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00D49C4 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00D4A98 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpDeviceUsageNotification @ 0x1C00D4B64 (ndisPnPIrpDeviceUsageNotification.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00D4C18 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPIrpQueryStop @ 0x1C00D4CF4 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D4D9C (ndisPnPIrpStopDevice.c)
 *     ?ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00E29E0 (-ndisSetupDevicePnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E5488 (ndisPnPIrpRemoveDevice.c)
 */

__int64 __fastcall ndisPnPDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int v2; // esi
  unsigned int MinorFunction; // r15d
  PVOID v6; // rcx
  signed __int32 v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r9
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Stop; // eax
  __int64 *v14; // [rsp+20h] [rbp-20h]
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  char v16; // [rsp+80h] [rbp+40h] BYREF

  v2 = 0;
  LOBYTE(v15) = 1;
  MinorFunction = 0;
  v16 = 1;
  if ( DeviceObject && *(_BYTE *)DeviceObject->DeviceExtension == 23 )
    return ndisSetupDevicePnp(DeviceObject, Irp);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qq(0x32u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, DeviceObject, Irp);
  v6 = ImageSectionHandle;
  v7 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v7 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
      v6 = ImageSectionHandle;
    }
    else
    {
      do
      {
        NdisMSleep(0x32u);
        v6 = ImageSectionHandle;
      }
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(v6);
  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)DeviceObject->DeviceExtension;
  if ( DeviceExtension->Header.Type != 17 )
  {
    if ( (unsigned __int8)byte_1C0085314 >= 4u )
      WPP_SF_qq(0x33u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, DeviceObject, Irp);
    v2 = -1073741808;
    goto LABEL_28;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qD(
      0x34u,
      &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids,
      (__int64)DeviceObject->DeviceExtension,
      CurrentStackLocation->MinorFunction);
  if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
    Template_jqxq(
      v8,
      &DispatchPnPIrp,
      &DeviceExtension->InterfaceGuid,
      (unsigned __int64)&DeviceExtension->InterfaceGuid,
      DeviceExtension->IfIndex,
      DeviceExtension->NetLuid.Value,
      MinorFunction);
  if ( MinorFunction <= 6 )
  {
    if ( MinorFunction == 6 )
    {
      Stop = ndisPnPIrpCancelStop(v8, DeviceExtension, Irp, &v16, &v15);
    }
    else if ( MinorFunction )
    {
      switch ( MinorFunction )
      {
        case 1u:
          v14 = &v15;
          Stop = ndisPnPIrpQueryRemove(v8, DeviceExtension, Irp);
          break;
        case 2u:
          Stop = ndisPnPIrpRemoveDevice(DeviceObject, DeviceExtension, Irp, (__int64)&v15);
          break;
        case 3u:
          Stop = ndisPnPIrpCancelRemove(v8, DeviceExtension, Irp, &v16, &v15);
          break;
        default:
          v14 = &v15;
          if ( MinorFunction == 4 )
            Stop = ndisPnPIrpStopDevice(v8, DeviceExtension, Irp);
          else
            Stop = ndisPnPIrpQueryStop(v8, DeviceExtension, Irp);
          break;
      }
    }
    else
    {
      Stop = ndisPnPIrpStartDevice(v8, DeviceExtension, Irp, &v16, &v15);
    }
  }
  else
  {
    switch ( MinorFunction )
    {
      case 8u:
        Stop = ndisPnPIrpQueryInterface(v8, (__int64)DeviceExtension, (__int64)Irp, v9, &v15);
        break;
      case 9u:
        Stop = ndisPnPIrpQueryCapabilities(v8, (_DWORD)DeviceExtension, (_DWORD)Irp, v9, (__int64)&v15);
        break;
      case 0xDu:
        Stop = ndisPnPIrpFilterResourceRequirements(v8, (_DWORD)DeviceExtension, (_DWORD)Irp, v9, (__int64)&v15);
        break;
      case 0x14u:
        Stop = ndisPnPIrpQueryPnPDeviceState(v8, (_DWORD)DeviceExtension, (_DWORD)Irp, v9, (__int64)&v15);
        break;
      case 0x16u:
        Stop = ndisPnPIrpDeviceUsageNotification(
                 (_DWORD)DeviceObject,
                 (_DWORD)DeviceExtension,
                 (_DWORD)Irp,
                 v9,
                 (__int64)&v15);
        break;
      case 0x17u:
        Stop = ndisPnPIrpSurpriseRemoval(v8, (__int64)DeviceExtension, (__int64)Irp, &v16, &v15);
        break;
      default:
        if ( (unsigned __int8)byte_1C0085314 >= 4u )
          WPP_SF_qD(0x35u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, (__int64)DeviceExtension, MinorFunction);
        goto LABEL_20;
    }
  }
  v2 = Stop;
  if ( !(_BYTE)v15 )
  {
LABEL_27:
    if ( !v16 )
      goto LABEL_22;
LABEL_28:
    Irp->IoStatus.Status = v2;
    IofCompleteRequest(Irp, 0);
    goto LABEL_22;
  }
LABEL_20:
  if ( !DeviceExtension->NextDeviceObject )
    goto LABEL_27;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v2 = IofCallDriver(DeviceExtension->NextDeviceObject, Irp);
LABEL_22:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
  {
    LODWORD(v14) = v2;
    WPP_SF_qdD(0x36u, &WPP_8f6d621b9670942a7823ab6ddc5f2e50_Traceguids, (__int64)DeviceExtension, MinorFunction, v14);
  }
  return v2;
}
