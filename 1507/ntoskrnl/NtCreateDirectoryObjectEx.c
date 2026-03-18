/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x140540100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 NtCreateDirectoryObjectEx()
{
  return ObpCreateDirectoryObject();
}
