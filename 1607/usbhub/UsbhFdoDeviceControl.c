/*
 * XREFs of UsbhFdoDeviceControl @ 0x1C003BA50
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C0019340 (Usbh_SSH_Event.c)
 *     UsbhFdoChainIrp @ 0x1C00292F8 (UsbhFdoChainIrp.c)
 *     UsbhIoctlCyclePort @ 0x1C0047CC4 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0048440 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048768 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C00489B0 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C0048C20 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048EB4 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0049118 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfo @ 0x1C0049454 (UsbhIoctlGetNodeConnectionInfo.c)
 *     UsbhIoctlGetNodeConnectionInfoEx @ 0x1C00494D4 (UsbhIoctlGetNodeConnectionInfoEx.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049860 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0049B34 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049DE8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C004A0A4 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C004A358 (UsbhIoctlResetStuckHub.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhFdoDeviceControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int LowPart; // ebx
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // r10d
  __int64 CurrentIrql; // r8
  int v9; // ebx
  _DWORD *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  int v27; // [rsp+30h] [rbp-28h]
  int v28; // [rsp+48h] [rbp-10h]

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Log((__int64)DeviceObject, 8, 1178888559, ((unsigned __int64)LowPart >> 2) & 0xFFF, (__int64)Irp);
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql )
  {
    LOBYTE(v28) = 0;
    v27 = v7 & (LowPart >> 2);
    v9 = -1073741811;
    UsbhException((int)DeviceObject, 0, 93, 0, 0, -1073741811, v27, usbfile_hub_c, 1431, v28);
LABEL_3:
    Irp->IoStatus.Status = v9;
    IofCompleteRequest(Irp, 0);
    return v9;
  }
  v11 = FdoExt((__int64)DeviceObject, v5, CurrentIrql, v6);
  Usbh_SSH_Event(DeviceObject, 6u, (__int64)(v11 + 434), v12);
  if ( LowPart <= 0x220444 )
  {
    if ( LowPart == 2229316 )
      return UsbhIoctlCyclePort((_DWORD)DeviceObject, Irp);
    v15 = LowPart - 2229256;
    if ( !v15 )
      return UsbhIoctlGetNodeInformation((_DWORD)DeviceObject, Irp);
    v16 = v15 - 4;
    if ( !v16 )
      return UsbhIoctlGetNodeConnectionInfo((_DWORD)DeviceObject, (_DWORD)Irp);
    v17 = v16 - 4;
    if ( !v17 )
      return UsbhIoctlGetDescriptorFromNodeConnection((int)DeviceObject, (int)Irp);
    v18 = v17 - 4;
    if ( !v18 )
      return UsbhIoctlGetNodeConnectionName((_DWORD)DeviceObject, Irp);
    v19 = v18 - 12;
    if ( !v19 )
      return UsbhIoctlGetNodeConnectionDriverKeyName((_DWORD)DeviceObject, Irp);
    v20 = v19 - 28;
    if ( !v20 )
      return UsbhIoctlGetHubCaps((_DWORD)DeviceObject, Irp);
    if ( v20 == 4 )
      return UsbhIoctlGetNodeConnectionAttributes((_DWORD)DeviceObject, Irp);
    return UsbhFdoChainIrp((__int64)DeviceObject, Irp, v13, v14);
  }
  v21 = LowPart - 2229320;
  if ( !v21 )
    return UsbhIoctlGetNodeConnectionInfoEx((_DWORD)DeviceObject, (_DWORD)Irp);
  v22 = v21 - 4;
  if ( !v22 )
    return UsbhIoctlResetStuckHub((_DWORD)DeviceObject, Irp);
  v23 = v22 - 4;
  if ( !v23 )
    return UsbhIoctlGetHubCapsEx((_DWORD)DeviceObject, Irp);
  v24 = v23 - 4;
  if ( !v24 )
    return UsbhIoctlGetHubInformationEx((_DWORD)DeviceObject, Irp);
  v25 = v24 - 4;
  if ( !v25 )
    return UsbhIoctlGetPortConnectorProperties((_DWORD)DeviceObject, Irp);
  v26 = v25 - 4;
  if ( v26 )
  {
    if ( v26 == 850855 )
    {
      v9 = -1073741808;
      goto LABEL_3;
    }
    return UsbhFdoChainIrp((__int64)DeviceObject, Irp, v13, v14);
  }
  return UsbhIoctlGetNodeConnectionInfoExV2((_DWORD)DeviceObject, Irp);
}
