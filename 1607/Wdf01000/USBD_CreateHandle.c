/*
 * XREFs of USBD_CreateHandle @ 0x1C009D4D4
 * Callers:
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C008E520 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     USBDInternal_BuildAndSendQueryInterfaceSynchronously @ 0x1C009CF08 (USBDInternal_BuildAndSendQueryInterfaceSynchronously.c)
 *     USBDInternal_BuildServicePath @ 0x1C009D044 (USBDInternal_BuildServicePath.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C009D2B4 (USBDInternal_QueryUsbVerifierSettings.c)
 */

__int64 __fastcall USBD_CreateHandle(
        _DEVICE_OBJECT *DeviceObject,
        _DEVICE_OBJECT *TargetDeviceObject,
        unsigned int USBDClientContractVersion,
        ULONG PoolTag,
        USBD_HANDLE__ **USBDHandle)
{
  wchar_t *v7; // rsi
  int v10; // ebx
  USBD_HANDLE__ *PoolWithTag; // rax
  USBD_HANDLE__ *v12; // rdi
  int InterfaceSynchronously; // eax
  bool v14; // zf
  int v15; // eax
  void (__fastcall *v17)(_QWORD); // rax
  char v18; // [rsp+30h] [rbp-D0h]
  wchar_t *servicePath; // [rsp+38h] [rbp-C8h] BYREF
  _USB_BUS_INTERFACE_USBDI_V1 usbBusInterface; // [rsp+40h] [rbp-C0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+90h] [rbp-70h] BYREF

  v18 = 0;
  v7 = 0LL;
  servicePath = 0LL;
  if ( KeGetCurrentIrql() )
  {
    if ( BYTE4(WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next) )
      DbgPrintEx(0x4Du, 0, "Irql Too High\n");
    v10 = -1073741496;
    goto LABEL_59;
  }
  if ( !g_NonPagedPoolInitialized )
  {
    g_NonPagedPoolType = NonPagedPool;
    memset(&VersionInformation, 0, sizeof(VersionInformation));
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( RtlGetVersion(&VersionInformation) >= 0
      && (VersionInformation.dwMajorVersion > 6
       || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
    {
      g_NonPagedPoolType = NonPagedPoolNx;
    }
  }
  g_NonPagedPoolInitialized = 1;
  if ( !DeviceObject )
  {
    if ( BYTE4(WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next) )
      DbgPrintEx(0x4Du, 0, "DeviceObject cannot be NULL\n");
LABEL_14:
    v10 = -1073741811;
LABEL_59:
    if ( USBDHandle )
      *USBDHandle = 0LL;
    goto LABEL_47;
  }
  if ( !TargetDeviceObject )
  {
    if ( BYTE4(WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next) )
      DbgPrintEx(0x4Du, 0, "TargetDeviceObject cannot be NULL\n");
    goto LABEL_14;
  }
  if ( USBDClientContractVersion != 1538 )
  {
    if ( BYTE4(WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next) )
      DbgPrintEx(0x4Du, 0, "USBDClientContractVersion %d not supported\n", USBDClientContractVersion);
    goto LABEL_14;
  }
  if ( !PoolTag )
  {
    if ( BYTE4(WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next) )
      DbgPrintEx(0x4Du, 0, "PoolTag must be specified\n");
    goto LABEL_14;
  }
  if ( USBDHandle )
  {
    USBDInternal_BuildServicePath(DeviceObject, &servicePath, PoolTag);
    PoolWithTag = (USBD_HANDLE__ *)ExAllocatePoolWithTag(g_NonPagedPoolType, 0xB8uLL, PoolTag);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( BYTE4(WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next) )
        DbgPrintEx(0x4Du, 0, "Allocation Failed\n");
      v7 = servicePath;
      v10 = -1073741670;
      goto LABEL_59;
    }
    memset(PoolWithTag, 0, 0xB8uLL);
    v7 = servicePath;
    if ( servicePath )
      USBDInternal_QueryUsbVerifierSettings(DeviceObject, servicePath, (_USBD_INTERFACE_V1 *)(v12 + 2), PoolTag);
    *(_DWORD *)v12 = 1145197397;
    *((_QWORD *)v12 + 7) = DeviceObject;
    *((_WORD *)v12 + 4) = 152;
    *((_DWORD *)v12 + 16) = PoolTag;
    *((_WORD *)v12 + 5) = 1538;
    *((_DWORD *)v12 + 10) = 1538;
    *((_DWORD *)v12 + 42) = 1538;
    *((_QWORD *)v12 + 9) = v12;
    *((_QWORD *)v12 + 20) = TargetDeviceObject;
    *((_DWORD *)v12 + 43) = 1;
    InterfaceSynchronously = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
                               DeviceObject,
                               TargetDeviceObject,
                               &GUID_USBD_INTERFACE_V1,
                               (_INTERFACE *)(v12 + 2));
    v10 = InterfaceSynchronously;
    if ( InterfaceSynchronously >= 0 )
    {
      v18 = 1;
    }
    else
    {
      v14 = BYTE4(WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next) == 0;
      *((_DWORD *)v12 + 42) = 1536;
      if ( !v14 )
        DbgPrintEx(
          0x4Du,
          3u,
          "Core stack (TargetDevieObject 0x%p) failed USBD_INTERFACE_VERSION_602, 0x%x\n",
          TargetDeviceObject,
          InterfaceSynchronously);
      v10 = 0;
    }
    if ( BYTE4(WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next) )
      DbgPrintEx(0x4Du, 3u, "USBD_CreateHandle Successful: usbdHandleInfo 0x%p\n", v12);
    if ( *((_DWORD *)v12 + 42) == 1536 )
    {
      memset(&usbBusInterface.Version, 0, 0x46uLL);
      *(_DWORD *)&usbBusInterface.Size = 65608;
      v15 = USBDInternal_BuildAndSendQueryInterfaceSynchronously(
              DeviceObject,
              TargetDeviceObject,
              &USB_BUS_INTERFACE_USBDI_GUID,
              (_INTERFACE *)&usbBusInterface);
      v10 = v15;
      if ( v15 < 0 )
      {
        if ( BYTE4(WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next) )
          DbgPrintEx(
            0x4Du,
            0,
            "Core stack (TargetDevieObject 0x%p) failed query to USB_BUS_INTERFACE_USBDI_GUID : USB_BUSIF_USBDI_VERSION_1, 0x%x\n",
            TargetDeviceObject,
            v15);
        *((_DWORD *)v12 + 42) = -1;
        v10 = 0;
        goto LABEL_46;
      }
      if ( usbBusInterface.IsDeviceHighSpeed )
        *((_BYTE *)v12 + 176) = usbBusInterface.IsDeviceHighSpeed(usbBusInterface.BusContext);
      else
        *((_BYTE *)v12 + 176) = 0;
      usbBusInterface.InterfaceDereference(usbBusInterface.BusContext);
    }
    if ( v10 < 0 )
    {
      if ( v18 )
      {
        v17 = (void (__fastcall *)(_QWORD))*((_QWORD *)v12 + 14);
        if ( v17 )
          v17(*((_QWORD *)v12 + 6));
      }
      ExFreePoolWithTag(v12, PoolTag);
      goto LABEL_59;
    }
LABEL_46:
    *USBDHandle = v12;
LABEL_47:
    if ( v7 )
      ExFreePoolWithTag(v7, PoolTag);
    return (unsigned int)v10;
  }
  if ( BYTE4(WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next) )
    DbgPrintEx(0x4Du, 0, "USBDHandle cannot be NULL\n");
  return (unsigned int)-1073741811;
}
