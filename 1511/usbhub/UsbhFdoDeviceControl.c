/*
 * XREFs of UsbhFdoDeviceControl @ 0x1C003B630
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0010030 (Usbh_SSH_Event.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhFdoChainIrp @ 0x1C0028C38 (UsbhFdoChainIrp.c)
 *     UsbhIoctlCyclePort @ 0x1C00478D4 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004802C (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048354 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C004859C (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004880C (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048AA0 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048D04 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfo @ 0x1C0049054 (UsbhIoctlGetNodeConnectionInfo.c)
 *     UsbhIoctlGetNodeConnectionInfoEx @ 0x1C00490D4 (UsbhIoctlGetNodeConnectionInfoEx.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049460 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0049734 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C00499E8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0049CA4 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0049F58 (UsbhIoctlResetStuckHub.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhFdoDeviceControl(__int64 a1, IRP *a2)
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

  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Log(a1, 8, 1178888559, ((unsigned __int64)LowPart >> 2) & 0xFFF, (__int64)a2);
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql )
  {
    LOBYTE(v28) = 0;
    v27 = v7 & (LowPart >> 2);
    v9 = -1073741811;
    UsbhException(a1, 0, 93, 0, 0, -1073741811, v27, usbfile_hub_c, 1431, v28);
LABEL_3:
    a2->IoStatus.Status = v9;
    IofCompleteRequest(a2, 0);
    return v9;
  }
  v11 = FdoExt(a1, v5, CurrentIrql, v6);
  Usbh_SSH_Event(a1, 6u, (__int64)(v11 + 434), v12);
  if ( LowPart <= 0x220444 )
  {
    if ( LowPart == 2229316 )
      return UsbhIoctlCyclePort(a1, a2);
    v15 = LowPart - 2229256;
    if ( !v15 )
      return UsbhIoctlGetNodeInformation(a1, a2);
    v16 = v15 - 4;
    if ( !v16 )
      return UsbhIoctlGetNodeConnectionInfo(a1, (_DWORD)a2);
    v17 = v16 - 4;
    if ( !v17 )
      return UsbhIoctlGetDescriptorFromNodeConnection(a1, (int)a2);
    v18 = v17 - 4;
    if ( !v18 )
      return UsbhIoctlGetNodeConnectionName(a1, a2);
    v19 = v18 - 12;
    if ( !v19 )
      return UsbhIoctlGetNodeConnectionDriverKeyName(a1, a2);
    v20 = v19 - 28;
    if ( !v20 )
      return UsbhIoctlGetHubCaps(a1, a2);
    if ( v20 == 4 )
      return UsbhIoctlGetNodeConnectionAttributes(a1, a2);
    return UsbhFdoChainIrp(a1, a2, v13, v14);
  }
  v21 = LowPart - 2229320;
  if ( !v21 )
    return UsbhIoctlGetNodeConnectionInfoEx(a1, (_DWORD)a2);
  v22 = v21 - 4;
  if ( !v22 )
    return UsbhIoctlResetStuckHub(a1, a2);
  v23 = v22 - 4;
  if ( !v23 )
    return UsbhIoctlGetHubCapsEx(a1, a2);
  v24 = v23 - 4;
  if ( !v24 )
    return UsbhIoctlGetHubInformationEx(a1, a2);
  v25 = v24 - 4;
  if ( !v25 )
    return UsbhIoctlGetPortConnectorProperties(a1, a2);
  v26 = v25 - 4;
  if ( v26 )
  {
    if ( v26 == 850855 )
    {
      v9 = -1073741808;
      goto LABEL_3;
    }
    return UsbhFdoChainIrp(a1, a2, v13, v14);
  }
  return UsbhIoctlGetNodeConnectionInfoExV2(a1, a2);
}
