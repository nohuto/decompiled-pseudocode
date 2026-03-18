/*
 * XREFs of ACPIThermalStartDevice @ 0x1C006EEB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     AMLIFreeDataBuffs @ 0x1C0004D14 (AMLIFreeDataBuffs.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C0008044 (ACPIDeviceInternalDeviceRequest.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     ACPIThermalLoopEx @ 0x1C0019DFC (ACPIThermalLoopEx.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001A680 (ACPIThermalGetSensorDevice.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C001A780 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C001A9B8 (ACPIInternalSetDeviceInterface.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C006DFF0 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalStartDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  __int64 v5; // rsi
  int SensorDevice; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PIRP Irp; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v10; // rbx
  struct _DEVICE_OBJECT *v11; // rcx
  __int64 v13; // rdx
  void *v14; // rcx
  IRP *v15; // rcx
  void *v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-88h] BYREF
  __int128 v18; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v19[48]; // [rsp+50h] [rbp-68h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)a1);
  *(_DWORD *)(*(_QWORD *)(DeviceExtension + 192) + 92LL) = 100;
  v5 = *(_QWORD *)(DeviceExtension + 192);
  *(_DWORD *)(DeviceExtension + 184) |= 0x8000000u;
  KeClearEvent((PRKEVENT)(v5 + 280));
  *(_QWORD *)(v5 + 112) = AMLIGetNamedChild(*(_QWORD *)(DeviceExtension + 704), 1347245151);
  v17 = 0LL;
  memset(v19, 0, sizeof(v19));
  v18 = THRM_EXTENSIONS_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(*(_QWORD *)(DeviceExtension + 704), (__int64)&v18, 0, 0, (__int64)v19, &v17) >= 0 )
  {
    v13 = v17;
    if ( *(_WORD *)(v17 + 2) == 3 && *(_DWORD *)(v17 + 24) )
      *(_DWORD *)(v5 + 128) = **(unsigned __int8 **)(v17 + 32);
    AMLIFreeDataBuffs(v13);
  }
  else
  {
    *(_DWORD *)(v5 + 128) = 0;
  }
  SensorDevice = ACPIInternalSetDeviceInterface(a1, &GUID_DEVICE_THERMAL_ZONE);
  if ( SensorDevice < 0 )
    goto LABEL_18;
  AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(DeviceExtension + 712));
  *(_QWORD *)(v5 + 200) = AttachedDeviceReference;
  Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
  *(_QWORD *)(v5 + 192) = Irp;
  if ( !Irp
    || (ACPIRegisterForDeviceNotifications(
          *(_QWORD *)(DeviceExtension + 712),
          (__int64)ACPIThermalEvent,
          *(_QWORD *)(DeviceExtension + 712)),
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x54706341u),
        (v10 = PoolWithTag) == 0LL) )
  {
    SensorDevice = -1073741670;
LABEL_18:
    v14 = *(void **)(v5 + 200);
    if ( v14 )
    {
      ObfDereferenceObject(v14);
      *(_QWORD *)(v5 + 200) = 0LL;
    }
    v15 = *(IRP **)(v5 + 192);
    if ( v15 )
    {
      IoFreeIrp(v15);
      *(_QWORD *)(v5 + 192) = 0LL;
    }
    v16 = *(void **)(DeviceExtension + 216);
    if ( v16 )
    {
      ExFreePoolWithTag(v16, 0x54706341u);
      *(_QWORD *)(DeviceExtension + 216) = 0LL;
    }
    KeSetEvent((PRKEVENT)(v5 + 280), 0, 0);
    goto LABEL_12;
  }
  memset(PoolWithTag, 0, 0x40uLL);
  *(_DWORD *)v10 = 1;
  v10[1] = &ACPIThermalGuidList;
  v10[2] = ACPIThermalQueryWmiRegInfo;
  v10[3] = ACPIThermalQueryWmiDataBlock;
  v11 = *(struct _DEVICE_OBJECT **)(DeviceExtension + 712);
  *(_QWORD *)(DeviceExtension + 216) = v10;
  SensorDevice = IoWMIRegistrationControl(v11, 1u);
  if ( SensorDevice < 0 )
    goto LABEL_18;
  SensorDevice = ACPIThermalGetSensorDevice((_QWORD *)DeviceExtension);
  if ( SensorDevice < 0 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(DeviceExtension + 712), 2u);
  }
  else
  {
    *(_DWORD *)(DeviceExtension + 312) = 2;
    SensorDevice = ACPIDeviceInternalDeviceRequest(DeviceExtension, 1, 0, 0, 0);
    if ( SensorDevice == 259 )
      SensorDevice = 0;
    ACPIThermalLoopEx(DeviceExtension, 0x8000000, 0x10000000);
  }
  if ( SensorDevice < 0 )
    goto LABEL_18;
LABEL_12:
  a2->IoStatus.Status = SensorDevice;
  IofCompleteRequest(a2, 0);
  return (unsigned int)SensorDevice;
}
