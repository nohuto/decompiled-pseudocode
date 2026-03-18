/*
 * XREFs of BiZwDeleteKey @ 0x14014C564
 * Callers:
 *     BiDeleteKey @ 0x140569810 (BiDeleteKey.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwDeleteKey(HANDLE KeyHandle)
{
  return ZwDeleteKey(KeyHandle);
}
