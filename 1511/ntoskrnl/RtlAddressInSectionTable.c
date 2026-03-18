/*
 * XREFs of RtlAddressInSectionTable @ 0x1400DD840
 * Callers:
 *     RtlpImageDirectoryEntryToData64 @ 0x140035DAC (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1400DD7AC (RtlpImageDirectoryEntryToData32.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1404A1430 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x1400DD890 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall RtlAddressInSectionTable(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax

  v3 = a3;
  v5 = RtlSectionTableFromVirtualAddress();
  if ( v5
    && (a2 >= (unsigned __int64)MmHighestUserAddress
     || v3 + a2 + *(unsigned int *)(v5 + 20) - (unsigned __int64)*(unsigned int *)(v5 + 12) < (unsigned __int64)MmHighestUserAddress) )
  {
    return v3 + a2 + *(unsigned int *)(v5 + 20) - (unsigned __int64)*(unsigned int *)(v5 + 12);
  }
  else
  {
    return 0LL;
  }
}
