/*
 * XREFs of UsbhPdoPnp_DeviceEnumerated @ 0x1C001F660
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     UsbhEnableTimerObject @ 0x1C001C9F0 (UsbhEnableTimerObject.c)
 *     UsbhQueryD3ColdSupport @ 0x1C001F764 (UsbhQueryD3ColdSupport.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0021000 (UsbhSetPdoRegistryParameter.c)
 *     UsbhPublishBillboardDetails @ 0x1C005522C (UsbhPublishBillboardDetails.c)
 *     UsbhPublishDualRoleFeaturesProperty @ 0x1C00553D4 (UsbhPublishDualRoleFeaturesProperty.c)
 */

__int64 __fastcall UsbhPdoPnp_DeviceEnumerated(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rbp
  __int64 PortData; // rax

  v6 = PdoExt((__int64)DeviceObject, (__int64)Irp, a3, a4);
  UsbhQueryD3ColdSupport(*((PDEVICE_OBJECT *)v6 + 147), DeviceObject);
  v10 = PdoExt((__int64)DeviceObject, v7, v8, v9);
  if ( v10[700] )
    UsbhSetPdoRegistryParameter(DeviceObject, L"MsOs20Flags", 4u, v10 + 700, 4u);
  PortData = UsbhGetPortData(*((_QWORD *)v10 + 147), *((_WORD *)v10 + 710));
  if ( PortData )
    UsbhSetPdoRegistryParameter(DeviceObject, L"EnumerationRetryCount", 4u, (PVOID)(PortData + 544), 4u);
  UsbhEnableTimerObject(
    *((_QWORD *)v6 + 147),
    (__int64)(v6 + 424),
    10000LL,
    *((unsigned __int16 *)v6 + 710),
    *((_QWORD *)v6 + 105),
    0x77464E44u);
  if ( *((_QWORD *)v6 + 300) )
    UsbhPublishBillboardDetails(DeviceObject);
  if ( (v6[356] & 0x40000) != 0 )
    UsbhPublishDualRoleFeaturesProperty(DeviceObject);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
