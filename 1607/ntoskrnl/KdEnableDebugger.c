/*
 * XREFs of KdEnableDebugger @ 0x1401D1624
 * Callers:
 *     KdpStub @ 0x1400F67A4 (KdpStub.c)
 *     NtSystemDebugControl @ 0x1404DE844 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x1407772E0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140777A80 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x1401D1658 (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x1401D1D98 (KeRelaxTimingConstraints.c)
 */

NTSTATUS KdEnableDebugger(void)
{
  unsigned __int8 v0; // al
  __int64 v1; // rcx
  unsigned int v2; // edi
  NTSTATUS v3; // ebx

  v0 = KeRelaxTimingConstraints(1LL);
  LOBYTE(v1) = 1;
  v2 = v0;
  v3 = KdEnableDebuggerWithLock(v1);
  KeRelaxTimingConstraints(v2);
  return v3;
}
