/*
 * XREFs of IoSetDeviceInterfaceState @ 0x1403F1060
 * Callers:
 *     PnpDisableDeviceInterfaces @ 0x1404C3314 (PnpDisableDeviceInterfaces.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1404C35D0 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404C67BC (PiSwDeviceInterfaceSetState.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 */

NTSTATUS __stdcall IoSetDeviceInterfaceState(PUNICODE_STRING SymbolicLinkName, BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v5 = IopProcessSetInterfaceState(SymbolicLinkName);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  if ( v5 < 0 )
    return Enable != 0 ? v5 : 0;
  return v5;
}
