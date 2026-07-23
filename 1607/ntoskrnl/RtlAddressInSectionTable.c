/*
 * XREFs of RtlAddressInSectionTable @ 0x1400F8250
 * Callers:
 *     RtlpImageDirectoryEntryToData64 @ 0x14007BC6C (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1400F81B8 (RtlpImageDirectoryEntryToData32.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1404FFAE4 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x1400F82A0 (RtlSectionTableFromVirtualAddress.c)
 */

PVOID __cdecl RtlAddressInSectionTable(PIMAGE_NT_HEADERS NtHeaders, PVOID BaseOfImage, ULONG VirtualAddress)
{
  __int64 v3; // rdi
  PIMAGE_SECTION_HEADER v5; // rax

  v3 = VirtualAddress;
  v5 = RtlSectionTableFromVirtualAddress(NtHeaders, BaseOfImage, VirtualAddress);
  if ( v5
    && ((unsigned __int64)BaseOfImage >= 0x7FFFFFFEFFFFLL
     || (unsigned __int64)BaseOfImage + v5->PointerToRawData - (unsigned __int64)v5->VirtualAddress + v3 < 0x7FFFFFFEFFFFLL) )
  {
    return (char *)BaseOfImage + v5->PointerToRawData - (unsigned __int64)v5->VirtualAddress + v3;
  }
  else
  {
    return 0LL;
  }
}
