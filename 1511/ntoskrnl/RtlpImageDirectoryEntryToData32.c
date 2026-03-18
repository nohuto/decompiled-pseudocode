/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x1400DD7AC
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140035E70 (RtlpImageDirectoryEntryToDataEx.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x1400DD840 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( (unsigned int)a3 >= *(_DWORD *)(a5 + 116) )
    return 3221225485LL;
  v7 = *(unsigned int *)(a5 + 8LL * a3 + 120);
  if ( !(_DWORD)v7 )
    return 3221225474LL;
  if ( a1 < (unsigned __int64)MmHighestUserAddress && a1 + v7 >= (unsigned __int64)MmHighestUserAddress )
    return 3221225485LL;
  *a4 = *(_DWORD *)(a5 + 8LL * a3 + 124);
  if ( a2 || (unsigned int)v7 < *(_DWORD *)(a5 + 84) )
  {
    *a6 = a1 + v7;
    return 0LL;
  }
  else
  {
    v8 = RtlAddressInSectionTable(a5, a1, (unsigned int)v7);
    *a6 = v8;
    return v8 == 0 ? 0xC000000D : 0;
  }
}
