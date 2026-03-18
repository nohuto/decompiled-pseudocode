/*
 * XREFs of ACPIDispatchIrpDepRemoveDevice @ 0x1C0046E20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004FB94 (ACPIInitResetDeviceExtension.c)
 */

__int64 __fastcall ACPIDispatchIrpDepRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  a2->IoStatus.Status = 0;
  v4 = DeviceExtension;
  IofCompleteRequest(a2, 0);
  ACPIInitResetDeviceExtension(v4);
  return 0LL;
}
