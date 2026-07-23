/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x1800318EC
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180030398 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18003121C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlComputeImportTableHash @ 0x1800DB720 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData64 @ 0x18002FFCC (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800316B4 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  _QWORD *v5; // rsi
  void *v6; // rbx
  char v9; // di
  NTSTATUS result; // eax
  void *v11; // rdx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = (void *)a1;
  OutHeaders = 0LL;
  v9 = a2;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v9 = a2;
    if ( (a1 & 1) != 0 )
      v9 = 0;
    v6 = (void *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  result = RtlImageNtHeaderEx(1u, v6, 0LL, &OutHeaders);
  if ( OutHeaders )
  {
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      LOBYTE(v11) = v9;
      return RtlpImageDirectoryEntryToData32((__int64)v6, v11, a3, a4, OutHeaders, v5);
    }
    else if ( OutHeaders->OptionalHeader.Magic == 523 )
    {
      return RtlpImageDirectoryEntryToData64((char *)v6, v9, a3, a4, OutHeaders, v5);
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
