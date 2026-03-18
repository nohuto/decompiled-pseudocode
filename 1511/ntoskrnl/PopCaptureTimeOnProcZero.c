/*
 * XREFs of PopCaptureTimeOnProcZero @ 0x1403A58B0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopDiagTraceHiberStats @ 0x1404F81FC (PopDiagTraceHiberStats.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140043D30 (KeInsertQueueDpc.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 */

__int64 PopCaptureTimeOnProcZero()
{
  struct _KEVENT Event; // [rsp+30h] [rbp-68h] BYREF
  struct _KDPC Dpc; // [rsp+50h] [rbp-48h] BYREF
  __int64 SystemArgument1; // [rsp+A0h] [rbp+8h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopTimestampTargetProcessor, 0LL);
  Dpc.Importance = 2;
  Dpc.Number = 640;
  KeInsertQueueDpc(&Dpc, &SystemArgument1, &Event);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return SystemArgument1;
}
