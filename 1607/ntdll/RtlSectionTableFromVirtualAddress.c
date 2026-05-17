/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x180031680
 * Callers:
 *     LdrpFetchAddressOfSecurityCookie @ 0x18002FF00 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18003122C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800316C4 (RtlpImageDirectoryEntryToData32.c)
 *     LdrpHandleProtectedDelayload @ 0x180033840 (LdrpHandleProtectedDelayload.c)
 *     RtlAddressInSectionTable @ 0x180080BF0 (RtlAddressInSectionTable.c)
 *     RtlImageRvaToVa @ 0x1800823D0 (RtlImageRvaToVa.c)
 *     LdrpLocateMrdata @ 0x1800D2EB0 (LdrpLocateMrdata.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSectionTableFromVirtualAddress(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  int v5; // edx
  unsigned int v6; // ecx

  v3 = *(unsigned __int16 *)(a1 + 6);
  v4 = *(unsigned __int16 *)(a1 + 20) + a1 + 24;
  v5 = 0;
  if ( !*(_WORD *)(a1 + 6) )
    return 0LL;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v4 + 12);
    if ( a3 >= v6 && a3 < *(_DWORD *)(v4 + 16) + v6 )
      break;
    v4 += 40LL;
    if ( ++v5 >= v3 )
      return 0LL;
  }
  return v4;
}
