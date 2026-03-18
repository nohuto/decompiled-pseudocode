/*
 * XREFs of VfZwRestoreKey @ 0x140757D34
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VfZwRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  return pXdvZwRestoreKey(KeyHandle, FileHandle, Flags);
}
