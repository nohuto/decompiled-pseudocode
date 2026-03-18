/*
 * XREFs of BiZwClose @ 0x14011BBB8
 * Callers:
 *     BiDeleteKey @ 0x1404F5314 (BiDeleteKey.c)
 *     BiCreateKey @ 0x1404FCD80 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x1404FCF24 (BiGetRegistryValue.c)
 *     BiCloseKey @ 0x1404FD274 (BiCloseKey.c)
 *     BiOpenKey @ 0x1404FD5F4 (BiOpenKey.c)
 *     BiDeleteRegistryValue @ 0x14068E22C (BiDeleteRegistryValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall BiZwClose(HANDLE Handle)
{
  return ZwClose(Handle);
}
