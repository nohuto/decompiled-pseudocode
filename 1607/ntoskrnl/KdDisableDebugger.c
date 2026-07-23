/*
 * XREFs of KdDisableDebugger @ 0x1401D137C
 * Callers:
 *     NtSystemDebugControl @ 0x1404C1E48 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x1407772E0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140777A80 (KiFilterFiberContext.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
