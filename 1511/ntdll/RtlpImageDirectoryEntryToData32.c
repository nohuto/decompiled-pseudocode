/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x180031578
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180031EE0 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 *     LdrpGetProcedureAddress @ 0x180034810 (LdrpGetProcedureAddress.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x180031610 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        __int64 a1,
        void *a2,
        unsigned __int16 a3,
        _DWORD *a4,
        PIMAGE_NT_HEADERS NtHeaders,
        _QWORD *a6)
{
  __int64 v8; // rax
  __int64 v9; // r8
  PIMAGE_SECTION_HEADER v10; // rax
  __int64 v11; // r8
  __int64 v12; // r11

  if ( (unsigned int)a3 >= HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapReserve) )
    return 3221225485LL;
  v8 = a3;
  v9 = *((unsigned int *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3);
  if ( !(_DWORD)v9 )
    return 3221225474LL;
  *a4 = *((_DWORD *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v8 + 1);
  if ( (_BYTE)a2 || (unsigned int)v9 < NtHeaders->OptionalHeader.SizeOfHeaders )
  {
    *a6 = a1 + v9;
    return 0LL;
  }
  else
  {
    v10 = RtlSectionTableFromVirtualAddress(NtHeaders, a2, v9);
    if ( v10 )
      v12 = v11 + a1 + v10->PointerToRawData - (unsigned __int64)v10->VirtualAddress;
    *a6 = v12;
    return v12 == 0 ? 0xC000000D : 0;
  }
}
