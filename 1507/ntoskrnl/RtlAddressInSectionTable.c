/*
 * XREFs of RtlAddressInSectionTable @ 0x14002B0D0
 * Callers:
 *     RtlpImageDirectoryEntryToData64 @ 0x14002B26C (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x14002B2E4 (RtlpImageDirectoryEntryToData32.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1404634F0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x14002B11C (RtlSectionTableFromVirtualAddress.c)
 */

PVOID __cdecl RtlAddressInSectionTable(PIMAGE_NT_HEADERS NtHeaders, PVOID BaseOfImage, ULONG VirtualAddress)
{
  __int64 v3; // rdi
  PIMAGE_SECTION_HEADER v5; // rax

  v3 = VirtualAddress;
  v5 = RtlSectionTableFromVirtualAddress(NtHeaders, BaseOfImage, VirtualAddress);
  if ( v5
    && (BaseOfImage >= MmHighestUserAddress
     || (char *)BaseOfImage + v5->PointerToRawData - (unsigned __int64)v5->VirtualAddress + v3 < MmHighestUserAddress) )
  {
    return (char *)BaseOfImage + v5->PointerToRawData - (unsigned __int64)v5->VirtualAddress + v3;
  }
  else
  {
    return 0LL;
  }
}
