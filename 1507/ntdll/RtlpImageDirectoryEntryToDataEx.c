/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x180015594
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180017554 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlComputeImportTableHash @ 0x1800CA930 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x180017390 (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x180017410 (RtlAddressInSectionTable.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  _QWORD *v5; // r14
  int v6; // ebx
  char *v7; // rdi
  char v10; // si
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v12; // rcx
  __int64 VirtualAddress; // rdx
  PVOID v14; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  v7 = (char *)BaseOfImage;
  OutHeaders = 0LL;
  v10 = a2;
  *a5 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
  {
    v10 = a2;
    if ( (BaseOfImage & 1) != 0 )
      v10 = 0;
    v7 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
  }
  result = RtlImageNtHeaderEx(1u, v7, 0LL, &OutHeaders);
  v12 = OutHeaders;
  if ( OutHeaders )
  {
    if ( OutHeaders->OptionalHeader.Magic == 267 )
      return RtlpImageDirectoryEntryToData32(v7, OutHeaders, (__int64)v5);
    if ( OutHeaders->OptionalHeader.Magic != 523 || a3 >= OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
      return -1073741811;
    VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[a3].VirtualAddress;
    if ( !(_DWORD)VirtualAddress )
      return -1073741822;
    *a4 = OutHeaders->OptionalHeader.DataDirectory[a3].Size;
    if ( v10 || (unsigned int)VirtualAddress < v12->OptionalHeader.SizeOfHeaders )
    {
      *v5 = &v7[VirtualAddress];
    }
    else
    {
      v14 = RtlAddressInSectionTable(v12, v7, VirtualAddress);
      *v5 = v14;
      return v14 == 0LL ? 0xC000000D : 0;
    }
    return v6;
  }
  return result;
}
