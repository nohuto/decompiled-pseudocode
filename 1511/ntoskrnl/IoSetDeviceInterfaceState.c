/*
 * XREFs of IoSetDeviceInterfaceState @ 0x140454BA4
 * Callers:
 *     PiSwDeviceInterfacesUpdateState @ 0x140494BAC (PiSwDeviceInterfacesUpdateState.c)
 *     PnpDisableDeviceInterfaces @ 0x1404A091C (PnpDisableDeviceInterfaces.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404E3DF0 (PiSwDeviceInterfaceSetState.c)
 *     VerifierIoSetDeviceInterfaceState @ 0x1406C084C (VerifierIoSetDeviceInterfaceState.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IopProcessSetInterfaceState @ 0x140456288 (IopProcessSetInterfaceState.c)
 */

NTSTATUS __stdcall IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  NTSTATUS v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  LOBYTE(v5) = 1;
  LOBYTE(v6) = Enable;
  v7 = IopProcessSetInterfaceState(SymbolicLinkName, v6, v5);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v7 < 0 )
    return Enable != 0 ? v7 : 0;
  return v7;
}
