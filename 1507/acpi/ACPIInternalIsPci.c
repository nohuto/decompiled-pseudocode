/*
 * XREFs of ACPIInternalIsPci @ 0x1C0068A8C
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000830C (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetFlags @ 0x1C00044E0 (ACPIInternalSetFlags.c)
 *     IsPciDevice @ 0x1C0008244 (IsPciDevice.c)
 *     IsNsobjPciBus @ 0x1C0069A1C (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInternalIsPci(ULONG_PTR BugCheckParameter3)
{
  __int64 *DeviceExtension; // rbx
  __int64 v4; // rax
  int v5; // r9d
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-10h]
  char v8; // [rsp+68h] [rbp+10h] BYREF

  DeviceExtension = (__int64 *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( (*DeviceExtension & 0x102000000LL) != 0 )
    return 0LL;
  v4 = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( (unsigned __int8)IsNsobjPciBus(*(_QWORD *)(v4 + 704)) == 1 )
  {
    ACPIInternalSetFlags(DeviceExtension, 0x2000000uLL);
    return 0LL;
  }
  v7 = -1073741275;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v5 = IsPciDevice(DeviceExtension[88], (__int64)AmlisuppCompletePassive, (__int64)&Event, &v8);
  if ( v5 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v5 = v7;
  }
  if ( v5 >= 0 && v8 == 1 )
    ACPIInternalSetFlags(DeviceExtension, 0x100000000uLL);
  return (unsigned int)v5;
}
