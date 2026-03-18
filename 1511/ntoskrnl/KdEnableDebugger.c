/*
 * XREFs of KdEnableDebugger @ 0x1401C1FF0
 * Callers:
 *     KdpStub @ 0x1400236C8 (KdpStub.c)
 *     NtSystemDebugControl @ 0x1406772A8 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x14072D2A0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x14072DA40 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x1401C2024 (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x1401C3890 (KeRelaxTimingConstraints.c)
 */

NTSTATUS KdEnableDebugger(void)
{
  bool v0; // zf
  char v1; // cl
  bool v2; // bl
  NTSTATUS v3; // r10d

  v0 = KeEnableWatchdogTimeout == 0;
  v1 = 1;
  KeEnableWatchdogTimeout = 0;
  v2 = v0;
  KdEnableDebuggerWithLock(v1);
  KeRelaxTimingConstraints(v2);
  return v3;
}
