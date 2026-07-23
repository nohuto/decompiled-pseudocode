/*
 * XREFs of RtlImageNtHeaderEx @ 0x140013DE0
 * Callers:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x14007BB94 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1404831CC (LdrpFetchAddressOfSecurityCookie.c)
 *     EtwpProviderArrivalCallback @ 0x1404B47FC (EtwpProviderArrivalCallback.c)
 *     LdrpResGetResourceDirectory @ 0x1404FE824 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x1404FEBB4 (LdrpResGetMappingSize.c)
 *     LdrRelocateImage @ 0x1405545D4 (LdrRelocateImage.c)
 *     VfDriverEnableVerifierForAll @ 0x140704C74 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlImageNtHeaderEx(ULONG Flags, PVOID BaseAddress, ULONGLONG Size, PIMAGE_NT_HEADERS *NtHeader)
{
  NTSTATUS v4; // r10d
  char v5; // al
  ULONGLONG v6; // rcx
  _IMAGE_NT_HEADERS64 *v7; // rax

  if ( !NtHeader )
    return -1073741811;
  v4 = 0;
  *NtHeader = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 || (char *)BaseAddress - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( Size < 0x40 )
      return -1073741701;
  }
  if ( *(_WORD *)BaseAddress != 23117 )
    return -1073741701;
  v6 = *((unsigned int *)BaseAddress + 15);
  if ( v5 )
  {
    if ( v6 >= Size || (unsigned int)v6 >= 0xFFFFFFE7 || v6 + 24 >= Size )
      return -1073741701;
  }
  v7 = (_IMAGE_NT_HEADERS64 *)((char *)BaseAddress + v6);
  if ( (char *)BaseAddress + v6 < BaseAddress
    || (unsigned __int64)BaseAddress < 0x7FFFFFFEFFFFLL
    && ((unsigned __int64)v7 >= 0x7FFFFFFEFFFFLL || (unsigned __int64)&v7[1] >= 0x7FFFFFFEFFFFLL) )
  {
    return -1073741701;
  }
  if ( v7->Signature != 17744 )
    return -1073741701;
  *NtHeader = v7;
  return v4;
}
