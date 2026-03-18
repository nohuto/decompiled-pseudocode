/*
 * XREFs of ACPIInternalIsPci @ 0x1C00730E0
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0017ECC (ACPIDetectFilterDevices.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetFlags @ 0x1C0004338 (ACPIInternalSetFlags.c)
 *     IsPciDevice @ 0x1C0008884 (IsPciDevice.c)
 *     IsNsobjPciBus @ 0x1C0067064 (IsNsobjPciBus.c)
 */

__int64 __fastcall ACPIInternalIsPci(ULONG_PTR BugCheckParameter3)
{
  __int64 *DeviceExtension; // rbx
  __int64 v3; // rax
  int v5; // r9d
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-10h]
  char v8; // [rsp+68h] [rbp+10h] BYREF

  DeviceExtension = (__int64 *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( (*DeviceExtension & 0x102000000LL) != 0 )
    return 0LL;
  v3 = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( IsNsobjPciBus(*(_QWORD *)(v3 + 704)) == 1 )
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
