/*
 * XREFs of VfZwRestoreKey @ 0x1406D416C
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
