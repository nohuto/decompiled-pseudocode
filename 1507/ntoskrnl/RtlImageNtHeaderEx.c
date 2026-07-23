/*
 * XREFs of RtlImageNtHeaderEx @ 0x1400106B0
 * Callers:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x14002B194 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpResGetMappingSize @ 0x140463BF8 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x140463D78 (LdrpResGetResourceDirectory.c)
 *     EtwpProviderArrivalCallback @ 0x1404660B8 (EtwpProviderArrivalCallback.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x140575C84 (LdrpFetchAddressOfSecurityCookie.c)
 *     VfDriverEnableVerifierForAll @ 0x1407390F8 (VfDriverEnableVerifierForAll.c)
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
  if ( *(_WORD *)BaseAddress == 23117 )
  {
    v6 = *((unsigned int *)BaseAddress + 15);
    if ( !v5 || v6 < Size && (unsigned int)v6 < 0xFFFFFFE7 && v6 + 24 < Size )
    {
      v7 = (_IMAGE_NT_HEADERS64 *)((char *)BaseAddress + v6);
      if ( (char *)BaseAddress + v6 >= BaseAddress
        && (BaseAddress >= MmHighestUserAddress || v7 < MmHighestUserAddress && &v7[1] < MmHighestUserAddress)
        && v7->Signature == 17744 )
      {
        *NtHeader = v7;
        return v4;
      }
    }
  }
  return -1073741701;
}
