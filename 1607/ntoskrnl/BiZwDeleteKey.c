/*
 * XREFs of BiZwDeleteKey @ 0x140125310
 * Callers:
 *     BiDeleteKey @ 0x140532F8C (BiDeleteKey.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwDeleteKey(HANDLE KeyHandle)
{
  return ZwDeleteKey(KeyHandle);
}
