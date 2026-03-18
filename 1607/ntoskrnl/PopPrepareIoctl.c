/*
 * XREFs of PopPrepareIoctl @ 0x140574348
 * Callers:
 *     PopThermalWorker @ 0x140573F40 (PopThermalWorker.c)
 *     PopBatteryInitialize @ 0x14066EF08 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x14066F09C (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x14066F124 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x14066F2A0 (PopBatteryReadTag.c)
 *     PopBatteryWaitTag @ 0x14066F638 (PopBatteryWaitTag.c)
 *     PopFanWorker @ 0x140673168 (PopFanWorker.c)
 * Callees:
 *     IoReuseIrp @ 0x1400D11E0 (IoReuseIrp.c)
 */

__int64 __fastcall PopPrepareIoctl(IRP *a1, ULONG a2, char a3, struct _IRP *a4, ULONG a5, ULONG a6)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 result; // rax

  IoReuseIrp(a1, -1073741637);
  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = (a3 != 0) + 14;
  CurrentStackLocation[-1].Parameters.Create.Options = a5;
  result = a6;
  CurrentStackLocation[-1].Parameters.Read.Length = a6;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a2;
  a1->AssociatedIrp.MasterIrp = a4;
  return result;
}
