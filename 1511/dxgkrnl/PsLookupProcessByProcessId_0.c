/*
 * XREFs of PsLookupProcessByProcessId_0 @ 0x1C0011640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall PsLookupProcessByProcessId_0(HANDLE ProcessId, PEPROCESS *Process)
{
  return PsLookupProcessByProcessId(ProcessId, Process);
}
