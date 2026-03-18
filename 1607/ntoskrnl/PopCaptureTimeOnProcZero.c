/*
 * XREFs of PopCaptureTimeOnProcZero @ 0x1403D058C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopDiagTraceHiberStats @ 0x140530FB4 (PopDiagTraceHiberStats.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D6DC (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KeInsertQueueDpc @ 0x1400D82A0 (KeInsertQueueDpc.c)
 */

__int64 PopCaptureTimeOnProcZero()
{
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp-48h] BYREF
  __int64 SystemArgument1; // [rsp+A0h] [rbp+8h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopTimestampTargetProcessor, 0LL);
  Dpc.Importance = 2;
  if ( !Dpc.DpcData )
    Dpc.Number = 640;
  KeInsertQueueDpc(&Dpc, &SystemArgument1, &Event);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return SystemArgument1;
}
