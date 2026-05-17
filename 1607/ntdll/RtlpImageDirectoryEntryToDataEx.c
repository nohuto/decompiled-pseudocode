/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x1800318FC
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x1800303A8 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18003122C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlComputeImportTableHash @ 0x1800DB660 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData64 @ 0x18002FFDC (RtlpImageDirectoryEntryToData64.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x1800316C4 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 *a5)
{
  __int64 *v5; // rsi
  unsigned __int64 v6; // rbx
  char v9; // di
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = a1;
  v12 = 0LL;
  v9 = a2;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v9 = a2;
    if ( (a1 & 1) != 0 )
      v9 = 0;
    v6 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  result = RtlImageNtHeaderEx(1LL, v6, 0LL, &v12);
  if ( v12 )
  {
    if ( *(_WORD *)(v12 + 24) == 267 )
    {
      LOBYTE(v11) = v9;
      return RtlpImageDirectoryEntryToData32(v6, v11, a3, a4, v12, v5);
    }
    else if ( *(_WORD *)(v12 + 24) == 523 )
    {
      return RtlpImageDirectoryEntryToData64(v6, v9, a3, a4, v12, v5);
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
