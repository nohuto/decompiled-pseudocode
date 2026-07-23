/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x1400DD890
 * Callers:
 *     RtlAddressInSectionTable @ 0x1400DD840 (RtlAddressInSectionTable.c)
 *     KiShadowProcessorAllocation @ 0x1403B19D4 (KiShadowProcessorAllocation.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1404A1430 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     CcInitializeBcbProfiler @ 0x14072D2C4 (CcInitializeBcbProfiler.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlSectionTableFromVirtualAddress(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG VirtualAddress)
{
  _IMAGE_SECTION_HEADER *v3; // r9
  unsigned int NumberOfSections; // r10d
  int v5; // edx
  ULONG v6; // ecx
  unsigned __int64 Name; // rax

  v3 = (_IMAGE_SECTION_HEADER *)((char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader);
  NumberOfSections = NtHeaders->FileHeader.NumberOfSections;
  if ( NtHeaders <= MmHighestUserAddress )
  {
    if ( v3 > MmHighestUserAddress )
      return 0LL;
    Name = (unsigned __int64)v3[NtHeaders->FileHeader.NumberOfSections].Name;
    if ( Name < (unsigned __int64)v3 || Name >= (unsigned __int64)MmHighestUserAddress )
      return 0LL;
  }
  v5 = 0;
  if ( !NtHeaders->FileHeader.NumberOfSections )
    return 0LL;
  while ( 1 )
  {
    v6 = v3->VirtualAddress;
    if ( VirtualAddress >= v6 && VirtualAddress < v3->SizeOfRawData + v6 )
      break;
    ++v3;
    if ( ++v5 >= NumberOfSections )
      return 0LL;
  }
  return v3;
}
