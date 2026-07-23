/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x14002B2E4
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14002B194 (RtlpImageDirectoryEntryToDataEx.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x14002B0D0 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        char *BaseOfImage,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        PIMAGE_NT_HEADERS NtHeaders,
        _QWORD *a6)
{
  __int64 v7; // rcx
  PVOID v8; // rax

  if ( (unsigned int)a3 >= HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapReserve) )
    return 3221225485LL;
  v7 = *((unsigned int *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3);
  if ( !(_DWORD)v7 )
    return 3221225474LL;
  if ( BaseOfImage < MmHighestUserAddress && &BaseOfImage[v7] >= MmHighestUserAddress )
    return 3221225485LL;
  *a4 = *((_DWORD *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3 + 1);
  if ( a2 || (unsigned int)v7 < NtHeaders->OptionalHeader.SizeOfHeaders )
  {
    *a6 = &BaseOfImage[v7];
    return 0LL;
  }
  else
  {
    v8 = RtlAddressInSectionTable(NtHeaders, BaseOfImage, v7);
    *a6 = v8;
    return v8 == 0LL ? 0xC000000D : 0;
  }
}
