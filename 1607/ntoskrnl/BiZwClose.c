/*
 * XREFs of BiZwClose @ 0x14012E5E8
 * Callers:
 *     BiDeleteKey @ 0x140532F8C (BiDeleteKey.c)
 *     BiDeleteRegistryValue @ 0x14053CBDC (BiDeleteRegistryValue.c)
 *     BiCreateKey @ 0x14053DBE0 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14053DE5C (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwClose(HANDLE Handle)
{
  return ZwClose(Handle);
}
