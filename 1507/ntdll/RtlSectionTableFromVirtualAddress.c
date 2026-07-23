/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x180017440
 * Callers:
 *     RtlAddressInSectionTable @ 0x180017410 (RtlAddressInSectionTable.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180017554 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x180041260 (LdrpFetchAddressOfSecurityCookie.c)
 *     RtlImageRvaToVa @ 0x180071AC0 (RtlImageRvaToVa.c)
 *     LdrpLocateMrdata @ 0x1800C14D4 (LdrpLocateMrdata.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlSectionTableFromVirtualAddress(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG VirtualAddress)
{
  unsigned int NumberOfSections; // r10d
  _IMAGE_SECTION_HEADER *v4; // r9
  int v5; // edx
  ULONG v6; // ecx

  NumberOfSections = NtHeaders->FileHeader.NumberOfSections;
  v4 = (_IMAGE_SECTION_HEADER *)((char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader);
  v5 = 0;
  if ( !NtHeaders->FileHeader.NumberOfSections )
    return 0LL;
  while ( 1 )
  {
    v6 = v4->VirtualAddress;
    if ( VirtualAddress >= v6 && VirtualAddress < v4->SizeOfRawData + v6 )
      break;
    ++v4;
    if ( ++v5 >= NumberOfSections )
      return 0LL;
  }
  return v4;
}
