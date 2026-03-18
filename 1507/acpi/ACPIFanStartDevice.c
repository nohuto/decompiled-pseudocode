/*
 * XREFs of ACPIFanStartDevice @ 0x1C007AB40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C0008044 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000CB88 (ACPIThermalAcquireCoolingInterfaces.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C001A780 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C001A9B8 (ACPIInternalSetDeviceInterface.c)
 *     ACPIFanLoop @ 0x1C003B218 (ACPIFanLoop.c)
 */

__int64 __fastcall ACPIFanStartDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rbx
  int v6; // edi

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)a1);
  v5 = DeviceExtension;
  if ( !*(_DWORD *)(DeviceExtension + 184) )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(DeviceExtension + 176));
    KeInitializeEvent((PRKEVENT)(v5 + 288), NotificationEvent, 1u);
  }
  *(_DWORD *)(v5 + 184) = 0x10000000;
  *(_QWORD *)(v5 + 216) = v5 + 208;
  *(_QWORD *)(v5 + 208) = v5 + 208;
  *(_QWORD *)(v5 + 224) = AMLIGetNamedChild(*(_QWORD *)(v5 + 704), 1414743647);
  KeClearEvent((PRKEVENT)(v5 + 288));
  v6 = ACPIInternalSetDeviceInterface(a1, &GUID_DEVICE_FAN);
  if ( v6 >= 0 )
  {
    v6 = ACPIInternalSetDeviceInterface(a1, &GUID_DEVINTERFACE_THERMAL_COOLING);
    if ( v6 >= 0 )
    {
      ACPIRegisterForDeviceNotifications(*(_QWORD *)(v5 + 712), (__int64)ACPIFanEvent, *(_QWORD *)(v5 + 712));
      *(_DWORD *)(v5 + 312) = 2;
      ACPIDeviceInternalDeviceRequest(v5, 4, (int)ACPIFanPowerCallback, 0, 0);
      ACPIThermalAcquireCoolingInterfaces(v5);
      v6 = 0;
      a2->IoStatus.Status = 0;
      a2->IoStatus.Information = 0LL;
      IofCompleteRequest(a2, 0);
      ACPIFanLoop(v5, 0x10000000, 0x20000000);
    }
  }
  return (unsigned int)v6;
}
