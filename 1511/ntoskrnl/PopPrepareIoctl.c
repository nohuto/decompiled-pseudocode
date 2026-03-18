/*
 * XREFs of PopPrepareIoctl @ 0x14054CA20
 * Callers:
 *     PopThermalWorker @ 0x14054C618 (PopThermalWorker.c)
 *     PopBatteryInitialize @ 0x140636B2C (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x140636CC0 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x140636D40 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x140636EBC (PopBatteryReadTag.c)
 *     PopBatteryWaitTag @ 0x140637214 (PopBatteryWaitTag.c)
 *     PopFanWorker @ 0x14063BDDC (PopFanWorker.c)
 * Callees:
 *     IoReuseIrp @ 0x140100350 (IoReuseIrp.c)
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
