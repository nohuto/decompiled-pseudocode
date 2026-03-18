/*
 * XREFs of PpDeviceRegistration @ 0x1404E660C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14053503C (PnpCleanupDeviceRegistryValues.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406923BC (PiCMDeleteDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PiDeviceRegistration @ 0x1404E6474 (PiDeviceRegistration.c)
 */

__int64 __fastcall PpDeviceRegistration(__int64 a1, char a2, UNICODE_STRING *a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx
  struct _KTHREAD *v10; // rdx
  __int16 v11; // cx

  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  }
  v9 = PiDeviceRegistration(a1, a2, a3);
  if ( !a4 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    v10 = KeGetCurrentThread();
    v11 = v10->KernelApcDisable + 1;
    v10->KernelApcDisable = v11;
    if ( !v11
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
      && !v10->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v9;
}
