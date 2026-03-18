/*
 * XREFs of KdDisableDebugger @ 0x140170694
 * Callers:
 *     NtSystemDebugControl @ 0x1406FBA78 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x14079A2A0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x14079AA3C (KiFilterFiberContext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
