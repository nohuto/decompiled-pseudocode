/*
 * XREFs of RtlImageNtHeaderEx @ 0x140037D00
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140035E70 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1403CC9F8 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpResGetResourceDirectory @ 0x140464F18 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x1404652AC (LdrpResGetMappingSize.c)
 *     EtwpProviderArrivalCallback @ 0x1404CEF74 (EtwpProviderArrivalCallback.c)
 *     VfDriverEnableVerifierForAll @ 0x1406B8BB8 (VfDriverEnableVerifierForAll.c)
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
    || BaseAddress < MmHighestUserAddress && (v7 >= MmHighestUserAddress || &v7[1] >= MmHighestUserAddress) )
  {
    return -1073741701;
  }
  if ( v7->Signature != 17744 )
    return -1073741701;
  *NtHeader = v7;
  return v4;
}
