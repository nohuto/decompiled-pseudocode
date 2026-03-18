/*
 * XREFs of CiDispatchInitialize @ 0x1C000D140
 * Callers:
 *     CsInitialize @ 0x1C000D030 (CsInitialize.c)
 * Callees:
 *     WPP_SF_Zd @ 0x1C0003E78 (WPP_SF_Zd.c)
 *     WPP_SF_Zq @ 0x1C0003F18 (WPP_SF_Zq.c)
 */

NTSTATUS __fastcall CiDispatchInitialize(struct _DRIVER_OBJECT *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  __int64 DeviceCharacteristics; // [rsp+20h] [rbp-28h]

  a1->FastIoDispatch = (PFAST_IO_DISPATCH)&CiFastIoDispatch;
  a1->MajorFunction[0] = (PDRIVER_DISPATCH)CiDispatchCreate;
  a1->MajorFunction[18] = (PDRIVER_DISPATCH)CiDispatchCleanup;
  a1->MajorFunction[2] = (PDRIVER_DISPATCH)CiDispatchClose;
  a1->DriverUnload = (PDRIVER_UNLOAD)CiDriverUnload;
  result = IoCreateDevice(a1, 0, (PUNICODE_STRING)0x1C000F020LL, 0x22u, 0x20000u, 0, &CiDeviceObject);
  v2 = result;
  if ( result >= 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_Zq((__int64)WPP_GLOBAL_Control->AttachedDevice);
    return v2;
  }
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    LODWORD(DeviceCharacteristics) = result;
    WPP_SF_Zd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x14u,
      (__int64)&WPP_3ae21bf15ad5db9e83e4442bc8a22929_Traceguids,
      (char *)0x1C000F020LL,
      DeviceCharacteristics);
    return v2;
  }
  return result;
}
