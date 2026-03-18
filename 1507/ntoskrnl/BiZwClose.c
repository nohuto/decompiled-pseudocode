/*
 * XREFs of BiZwClose @ 0x14014FE44
 * Callers:
 *     BiDeleteKey @ 0x140569810 (BiDeleteKey.c)
 *     BiCreateKey @ 0x14056F820 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14056F9C4 (BiGetRegistryValue.c)
 *     BiCloseKey @ 0x14056FD14 (BiCloseKey.c)
 *     BiOpenKey @ 0x140570094 (BiOpenKey.c)
 *     BiDeleteRegistryValue @ 0x14070DD44 (BiDeleteRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwClose(HANDLE Handle)
{
  return ZwClose(Handle);
}
