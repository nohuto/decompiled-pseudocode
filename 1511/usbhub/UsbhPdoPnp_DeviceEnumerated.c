/*
 * XREFs of UsbhPdoPnp_DeviceEnumerated @ 0x1C00090F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueryD3ColdSupport @ 0x1C0008F68 (UsbhQueryD3ColdSupport.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0009514 (UsbhSetPdoRegistryParameter.c)
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C000E3D0 (UsbhEnableTimerObject.c)
 *     UsbhPublishBillboardDetails @ 0x1C0054BFC (UsbhPublishBillboardDetails.c)
 *     UsbhPublishDualRoleFeaturesProperty @ 0x1C0054DA4 (UsbhPublishDualRoleFeaturesProperty.c)
 */

__int64 __fastcall UsbhPdoPnp_DeviceEnumerated(PDEVICE_OBJECT a1, PIRP Irp)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 PortData; // rax

  v4 = PdoExt(a1);
  UsbhQueryD3ColdSupport(*(PDEVICE_OBJECT *)(v4 + 1176), a1);
  v5 = PdoExt(a1);
  if ( *(_DWORD *)(v5 + 2800) )
    UsbhSetPdoRegistryParameter(a1, L"MsOs20Flags", 4u, (PVOID)(v5 + 2800), 4u);
  PortData = UsbhGetPortData(*(_QWORD *)(v5 + 1176), *(unsigned __int16 *)(v5 + 1420));
  if ( PortData )
    UsbhSetPdoRegistryParameter(a1, L"EnumerationRetryCount", 4u, (PVOID)(PortData + 544), 4u);
  UsbhEnableTimerObject(
    *(_QWORD *)(v4 + 1176),
    v4 + 1696,
    10000,
    *(unsigned __int16 *)(v4 + 1420),
    *(_QWORD *)(v4 + 840),
    2001096260);
  if ( *(_QWORD *)(v4 + 2400) )
    UsbhPublishBillboardDetails(a1);
  if ( (*(_DWORD *)(v4 + 1424) & 0x40000) != 0 )
    UsbhPublishDualRoleFeaturesProperty(a1);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
