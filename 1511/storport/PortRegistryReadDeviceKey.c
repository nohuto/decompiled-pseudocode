/*
 * XREFs of PortRegistryReadDeviceKey @ 0x1C0051E90
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 *     RaidUnitGet1667DeviceRegistryValue @ 0x1C000C8CC (RaidUnitGet1667DeviceRegistryValue.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C000CC54 (RaidUnitGetInitialTimestamp.c)
 *     RaidRegGetDeviceDumpCustomGPLogPage @ 0x1C000F884 (RaidRegGetDeviceDumpCustomGPLogPage.c)
 *     RaidUnitGetPowerCycleCount @ 0x1C000FA08 (RaidUnitGetPowerCycleCount.c)
 *     ShimGetMsftId @ 0x1C003C744 (ShimGetMsftId.c)
 *     RaidInitializeAdapter @ 0x1C0051794 (RaidInitializeAdapter.c)
 * Callees:
 *     PortRegistryReadWithHandle @ 0x1C0051F3C (PortRegistryReadWithHandle.c)
 */

__int64 __fastcall PortRegistryReadDeviceKey(struct _DEVICE_OBJECT *a1, int a2, int a3, int a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // rdi
  NTSTATUS v10; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  v6 = a6;
  Handle = 0LL;
  LODWORD(a6) = *a6;
  v10 = IoOpenDeviceRegistryKey(a1, 1u, 0x20019u, &Handle);
  if ( v10 >= 0 )
  {
    v10 = PortRegistryReadWithHandle((_DWORD)Handle, a2, a3, a4, a5, (__int64)&a6);
    ZwClose(Handle);
    if ( v10 >= 0 )
      *v6 = (_DWORD)a6;
  }
  return (unsigned int)v10;
}
