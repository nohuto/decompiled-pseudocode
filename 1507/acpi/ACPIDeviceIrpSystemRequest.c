/*
 * XREFs of ACPIDeviceIrpSystemRequest @ 0x1C0037D2C
 * Callers:
 *     ACPIRootIrpSetPower @ 0x1C00409F0 (ACPIRootIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C000AE8C (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C0037CE0 (ACPIDeviceIrpForwardRequest.c)
 */

__int64 __fastcall ACPIDeviceIrpSystemRequest(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  int EaLength; // r11d
  int v6; // r8d
  int v7; // edx
  int Status; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v6 = (CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF;
  v7 = (unsigned __int8)HIBYTE(LOWORD(CurrentStackLocation->Parameters.Create.SecurityContext)) >> 4;
  if ( v7 == 5 && (v6 == 2 || (unsigned int)(v6 - 3) <= 1) )
    v7 = (CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF;
  if ( a2->PendingReturned )
    CurrentStackLocation->Control |= 1u;
  Status = a2->IoStatus.Status;
  if ( Status >= 0 )
    return ACPIDeviceInitializePowerRequest(
             DeviceExtension,
             (POWER_STATE)v7,
             (_SLIST_ENTRY *)ACPIDeviceIrpForwardRequest,
             (__int64)a2,
             EaLength,
             1,
             0);
  ACPIDeviceIrpForwardRequest(DeviceExtension, a2, Status);
  return (unsigned int)Status;
}
