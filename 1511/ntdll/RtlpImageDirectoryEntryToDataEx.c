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

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 *a5)
{
  __int64 *v5; // r14
  unsigned int v6; // ebx
  unsigned __int64 v7; // rdi
  char v10; // si
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  v7 = a1;
  v16 = 0LL;
  v10 = a2;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v10 = a2;
    if ( (a1 & 1) != 0 )
      v10 = 0;
    v7 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  result = RtlImageNtHeaderEx(1LL, v7, 0LL, &v16);
  v13 = v16;
  if ( v16 )
  {
    if ( *(_WORD *)(v16 + 24) == 267 )
    {
      LOBYTE(v12) = v10;
      return (unsigned int)RtlpImageDirectoryEntryToData32(v7, v12, a3, a4, v16, v5);
    }
    else if ( *(_WORD *)(v16 + 24) == 523 && (unsigned int)a3 < *(_DWORD *)(v16 + 132) )
    {
      v14 = *(unsigned int *)(v16 + 8LL * a3 + 136);
      if ( (_DWORD)v14 )
      {
        *a4 = *(_DWORD *)(v16 + 8LL * a3 + 140);
        if ( v10 || (unsigned int)v14 < *(_DWORD *)(v13 + 84) )
        {
          *v5 = v7 + v14;
        }
        else
        {
          v15 = RtlAddressInSectionTable(v13, v7, (unsigned int)v14);
          *v5 = v15;
          return v15 == 0 ? 0xC000000D : 0;
        }
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
    return v6;
  }
  return result;
}
