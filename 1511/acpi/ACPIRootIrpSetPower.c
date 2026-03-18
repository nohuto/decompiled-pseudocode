/*
 * XREFs of ACPIRootIrpSetPower @ 0x1C00404A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1C003891C (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C003A210 (ACPIDispatchForwardPowerIrp.c)
 */

__int64 __fastcall ACPIRootIrpSetPower(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( (AcpiGlobalFlags & 1) == 0 )
    KeBugCheckEx(0xA3u, 1uLL, 0xD056AuLL, 0LL, 0LL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Create.Options || (CurrentStackLocation->Parameters.Read.Length & 0x200000) != 0 )
  {
    ACPIDispatchForwardPowerIrp(a1, a2);
  }
  else
  {
    a2->IoStatus.Status = 0;
    _InterlockedAdd((volatile signed __int32 *)(DeviceExtension + 672), 1u);
    ACPIDeviceIrpSystemRequest(a1, a2);
  }
  return 259LL;
}
