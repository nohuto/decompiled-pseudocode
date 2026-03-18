/*
 * XREFs of BiZwDeleteKey @ 0x140124DA0
 * Callers:
 *     BiDeleteKey @ 0x140532A4C (BiDeleteKey.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwDeleteKey(HANDLE KeyHandle)
{
  return ZwDeleteKey(KeyHandle);
}
