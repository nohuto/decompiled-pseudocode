/*
 * XREFs of PortRegistryWriteDeviceKey @ 0x1C004FBE4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C000AA1C (RaidUnitGetInitialTimestamp.c)
 *     RaidUnitSavePowerCycleCount @ 0x1C000FBFC (RaidUnitSavePowerCycleCount.c)
 *     RaidAdapterHack @ 0x1C00214D8 (RaidAdapterHack.c)
 *     ShimGetMsftId @ 0x1C0039D14 (ShimGetMsftId.c)
 *     RaidInitializeAdapter @ 0x1C004DBB8 (RaidInitializeAdapter.c)
 * Callees:
 *     PortRegistryWriteWithHandle @ 0x1C00558E0 (PortRegistryWriteWithHandle.c)
 */

__int64 __fastcall PortRegistryWriteDeviceKey(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  NTSTATUS v9; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  Handle = 0LL;
  v9 = IoOpenDeviceRegistryKey(a1, 1u, 0x20006u, &Handle);
  if ( v9 >= 0 )
  {
    v9 = PortRegistryWriteWithHandle(Handle, a2, a3, a4, a5, a6);
    ZwClose(Handle);
  }
  return (unsigned int)v9;
}
