/*
 * XREFs of ZwWaitForSingleObject_0 @ 0x1C000FDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwWaitForSingleObject_0(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  return ZwWaitForSingleObject(Handle, Alertable, Timeout);
}
