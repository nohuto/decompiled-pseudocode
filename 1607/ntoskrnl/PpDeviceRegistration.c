/*
 * XREFs of PpDeviceRegistration @ 0x1404C7C74
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1404C7C20 (PnpCleanupDeviceRegistryValues.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140646B3C (PiCMDeleteDevice.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     PiDeviceRegistration @ 0x1404C7D00 (PiDeviceRegistration.c)
 */

__int64 __fastcall PpDeviceRegistration(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v6 = a2;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  }
  LOBYTE(a2) = v6;
  v9 = PiDeviceRegistration(a1, a2, a3);
  if ( !a4 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  }
  return v9;
}
