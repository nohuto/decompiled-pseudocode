/*
 * XREFs of BiZwDeleteKey @ 0x14011752C
 * Callers:
 *     BiDeleteKey @ 0x1404F5314 (BiDeleteKey.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwDeleteKey(HANDLE KeyHandle)
{
  return ZwDeleteKey(KeyHandle);
}
