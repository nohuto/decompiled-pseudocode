/*
 * XREFs of UsbSleepStudy_RegisterPdo @ 0x1C00362B0
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006A240 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     UsbSleepStudy_GetDeviceStringProperty @ 0x1C0036974 (UsbSleepStudy_GetDeviceStringProperty.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall UsbSleepStudy_RegisterPdo(PDEVICE_OBJECT DeviceObject, const void *a2, __int64 a3, _QWORD *a4)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rbx
  unsigned int v9; // edi
  int DeviceStringProperty; // eax
  int v11; // eax
  void *v12; // rcx
  void *v13; // rcx
  KIRQL v14; // al
  _QWORD *v15; // rcx

  DbgPrint("UsbSleepStudy_RegisterPdo: Enter\r\n");
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x53535554u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    DbgPrint("UsbSleepStudy_RegisterPdo: Failed to allocate pCsContext\r\n");
    v9 = -1073741670;
    goto LABEL_15;
  }
  memset(PoolWithTag, 0, 0x58uLL);
  DbgPrint("UsbSleepStudy_RegisterPdo: New pCsContext %#p\r\n", v8);
  DbgPrint("UsbSleepStudy_RegisterPdo: New pCsContext DevicePdo %#p\r\n", DeviceObject);
  DbgPrint("UsbSleepStudy_RegisterPdo: New pCsContext ParentPdo %#p\r\n", a2);
  v8[5] = DeviceObject;
  v8[6] = a2;
  *((_BYTE *)v8 + 16) = 0;
  DeviceStringProperty = UsbSleepStudy_GetDeviceStringProperty(
                           DeviceObject,
                           DevicePropertyDeviceDescription,
                           (PUNICODE_STRING)(v8 + 7));
  v9 = DeviceStringProperty;
  if ( DeviceStringProperty < 0 )
  {
    DbgPrint(
      "UsbSleepStudy_RegisterPdo: Failed UsbSleepStudy_GetDeviceStringProperty for DevicePropertyDeviceDescription %#010x\r\n",
      (unsigned int)DeviceStringProperty);
LABEL_7:
    *a4 = 0LL;
    v12 = (void *)v8[8];
    if ( v12 )
      ExFreePoolWithTag(v12, 0x53535554u);
    v13 = (void *)v8[10];
    if ( v13 )
      ExFreePoolWithTag(v13, 0x53535554u);
    ExFreePoolWithTag(v8, 0x53535554u);
    goto LABEL_15;
  }
  v11 = UsbSleepStudy_GetDeviceStringProperty(
          (PDEVICE_OBJECT)v8[5],
          DevicePropertyHardwareID,
          (PUNICODE_STRING)(v8 + 9));
  v9 = v11;
  if ( v11 < 0 )
  {
    DbgPrint(
      "UsbSleepStudy_RegisterPdo: Failed UsbSleepStudy_GetDeviceStringProperty for DevicePropertyHardwareID %#010x\r\n",
      (unsigned int)v11);
    goto LABEL_7;
  }
  DbgPrint("UsbSleepStudy_RegisterPdo: New pCsContext DeviceDescription %wZ\r\n", v8 + 7);
  DbgPrint("UsbSleepStudy_RegisterPdo: New pCsContext HardwareId %wZ\r\n", v8 + 9);
  *a4 = v8;
  v14 = KeAcquireSpinLockRaiseToDpc(&gDevicesListSpinLock);
  v15 = (_QWORD *)qword_1C005E9C8;
  if ( *(__int64 **)qword_1C005E9C8 != &gDevicesListHead )
    __fastfail(3u);
  *v8 = &gDevicesListHead;
  v8[1] = v15;
  *v15 = v8;
  qword_1C005E9C8 = (__int64)v8;
  KeReleaseSpinLock(&gDevicesListSpinLock, v14);
LABEL_15:
  DbgPrint("UsbSleepStudy_RegisterPdo: Exit %#010x\r\n", v9);
  return v9;
}
