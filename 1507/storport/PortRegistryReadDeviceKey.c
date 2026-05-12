/*
 * XREFs of PortRegistryReadDeviceKey @ 0x1C004E2B4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 *     RaidUnitGet1667DeviceRegistryValue @ 0x1C000A694 (RaidUnitGet1667DeviceRegistryValue.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C000AA1C (RaidUnitGetInitialTimestamp.c)
 *     RaidRegGetDeviceDumpCustomGPLogPage @ 0x1C000D614 (RaidRegGetDeviceDumpCustomGPLogPage.c)
 *     RaidUnitGetPowerCycleCount @ 0x1C000D798 (RaidUnitGetPowerCycleCount.c)
 *     ShimGetMsftId @ 0x1C0039D14 (ShimGetMsftId.c)
 *     RaidInitializeAdapter @ 0x1C004DBB8 (RaidInitializeAdapter.c)
 * Callees:
 *     PortRegistryReadWithHandle @ 0x1C004E360 (PortRegistryReadWithHandle.c)
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
