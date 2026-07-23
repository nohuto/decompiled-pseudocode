/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x180031EE0
 * Callers:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180031654 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlpxLookupFunctionTable @ 0x180036540 (RtlpxLookupFunctionTable.c)
 *     RtlComputeImportTableHash @ 0x1800D3400 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x180031578 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007C2B0 (RtlAddressInSectionTable.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
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
  void *v12; // rdx
  PIMAGE_NT_HEADERS v13; // rcx
  __int64 VirtualAddress; // rdx
  PVOID v15; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  v7 = (char *)a1;
  OutHeaders = 0LL;
  v10 = a2;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v10 = a2;
    if ( (a1 & 1) != 0 )
      v10 = 0;
    v7 = (char *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  result = RtlImageNtHeaderEx(1u, v7, 0LL, &OutHeaders);
  v13 = OutHeaders;
  if ( OutHeaders )
  {
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      LOBYTE(v12) = v10;
      return RtlpImageDirectoryEntryToData32((__int64)v7, v12, a3, a4, OutHeaders, v5);
    }
    else if ( OutHeaders->OptionalHeader.Magic == 523 && a3 < OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[a3].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        *a4 = OutHeaders->OptionalHeader.DataDirectory[a3].Size;
        if ( v10 || (unsigned int)VirtualAddress < v13->OptionalHeader.SizeOfHeaders )
        {
          *v5 = &v7[VirtualAddress];
        }
        else
        {
          v15 = RtlAddressInSectionTable(v13, v7, VirtualAddress);
          *v5 = v15;
          return v15 == 0LL ? 0xC000000D : 0;
        }
      }
      else
      {
        return -1073741822;
      }
    }
    else
    {
      return -1073741811;
    }
    return v6;
  }
  return result;
}
