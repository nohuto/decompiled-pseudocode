/*
 * XREFs of BiZwClose @ 0x14012E078
 * Callers:
 *     BiDeleteKey @ 0x140532A4C (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x14053C69C (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x14053D6A0 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14053D91C (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14053DE4C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053DFCC (BiCloseKey.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwClose(HANDLE Handle)
{
  return ZwClose(Handle);
}
