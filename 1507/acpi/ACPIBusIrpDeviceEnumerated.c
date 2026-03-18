/*
 * XREFs of ACPIBusIrpDeviceEnumerated @ 0x1C006AA50
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDispatchForwardIrp @ 0x1C0004180 (ACPIDispatchForwardIrp.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0069EBC (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIQueryDeviceBiosName @ 0x1C006A8B0 (ACPIQueryDeviceBiosName.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C006D598 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0072B80 (ACPIQueryCacheCoherencyAttribute.c)
 */

__int64 __fastcall ACPIBusIrpDeviceEnumerated(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _QWORD *DeviceExtension; // rax
  unsigned int v5; // edi
  ULONG_PTR v6; // rbx
  struct _UNICODE_STRING v8; // [rsp+40h] [rbp-48h] BYREF
  _DWORD Data[6]; // [rsp+50h] [rbp-38h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v5 = 0;
  v6 = (ULONG_PTR)DeviceExtension;
  if ( DeviceExtension )
  {
    if ( (int)ACPIProcessPhysicalDeviceLocation(DeviceExtension, Data) >= 0 )
      IoSetDevicePropertyData(
        *(PDEVICE_OBJECT *)(v6 + 728),
        &DEVPKEY_Device_PhysicalDeviceLocation,
        0,
        0,
        0x1003u,
        0x14u,
        Data);
    if ( (*(_QWORD *)v6 & 0x8000000000000LL) == 0 )
    {
      *(_QWORD *)&v8.Length = 0LL;
      v8.Buffer = 0LL;
      if ( (int)ACPIQueryDeviceBiosName(*(_QWORD *)(v6 + 712), &v8) >= 0 )
      {
        if ( v8.Buffer )
        {
          IoSetDevicePropertyData(
            *(PDEVICE_OBJECT *)(v6 + 728),
            &DEVPKEY_Device_BiosDeviceName,
            0,
            0,
            0x12u,
            v8.Length + 2,
            v8.Buffer);
          ExFreePoolWithTag(v8.Buffer, 0x53706341u);
        }
      }
    }
    if ( (*(_QWORD *)v6 & 0x102000000LL) != 0 )
      AcpiQueryPciDeviceChassisLabel(v6);
    if ( *(_QWORD *)(v6 + 736) == RootDeviceExtension )
      v5 = ACPIQueryCacheCoherencyAttribute(v6);
    if ( (*(_BYTE *)v6 & 0x50) != 0 )
      return ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
  }
  else
  {
    v5 = -1073741823;
  }
  Irp->IoStatus.Status = v5;
  IofCompleteRequest(Irp, 0);
  return v5;
}
