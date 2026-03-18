/*
 * XREFs of UsbhPdoPnp_DeviceEnumerated @ 0x1C001E1E0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSetPdoRegistryParameter @ 0x1C000AB2C (UsbhSetPdoRegistryParameter.c)
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C001A8E0 (UsbhEnableTimerObject.c)
 *     UsbhQueryD3ColdSupport @ 0x1C001E2C4 (UsbhQueryD3ColdSupport.c)
 */

__int64 __fastcall UsbhPdoPnp_DeviceEnumerated(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rsi
  __int64 PortData; // rax

  v6 = PdoExt((__int64)DeviceObject, (__int64)Irp, a3, a4);
  UsbhQueryD3ColdSupport(*((PDEVICE_OBJECT *)v6 + 147), DeviceObject);
  v10 = PdoExt((__int64)DeviceObject, v7, v8, v9);
  if ( v10[698] )
    UsbhSetPdoRegistryParameter(DeviceObject, L"MsOs20Flags", 4u, v10 + 698, 4u);
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
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
