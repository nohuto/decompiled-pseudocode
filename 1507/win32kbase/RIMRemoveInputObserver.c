/*
 * XREFs of RIMRemoveInputObserver @ 0x1C00C2B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RIMRemoveInputObserver(HANDLE Handle, KPROCESSOR_MODE PreviousMode)
{
  return ObCloseHandle(Handle, PreviousMode);
}
