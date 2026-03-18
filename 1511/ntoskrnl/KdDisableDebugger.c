/*
 * XREFs of KdDisableDebugger @ 0x140142870
 * Callers:
 *     NtSystemDebugControl @ 0x1406772A8 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x14072D2A0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x14072DA40 (KiFilterFiberContext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
