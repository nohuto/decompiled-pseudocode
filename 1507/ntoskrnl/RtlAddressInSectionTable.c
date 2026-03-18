/*
 * XREFs of RtlAddressInSectionTable @ 0x14002B0D0
 * Callers:
 *     RtlpImageDirectoryEntryToData64 @ 0x14002B26C (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x14002B2E4 (RtlpImageDirectoryEntryToData32.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1404634F0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x14002B11C (RtlSectionTableFromVirtualAddress.c)
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
