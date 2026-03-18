/*
 * XREFs of OSInterruptVector @ 0x1C00864E0
 * Callers:
 *     ACPIInterruptInitialize @ 0x1C006FB20 (ACPIInterruptInitialize.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C006F918 (AcpiIrqLibSetupSciInterrupt.c)
 */

NTSTATUS __fastcall OSInterruptVector(ULONG_PTR a1)
{
  __int64 DeviceExtension; // rbx
  NTSTATUS result; // eax
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-58h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeDpc(
    (PRKDPC)(DeviceExtension + 88),
    (PKDEFERRED_ROUTINE)ACPIInterruptServiceRoutineDPC,
    (PVOID)DeviceExtension);
  result = AcpiIrqLibSetupSciInterrupt();
  if ( result >= 0 )
  {
    Parameters.Version = 2;
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(DeviceExtension + 72);
    Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(DeviceExtension + 728);
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ACPIInterruptServiceRoutine;
    *(_OWORD *)&Parameters.MessageBased.ServiceContext = (unsigned __int64)DeviceExtension;
    return IoConnectInterruptEx(&Parameters);
  }
  return result;
}
