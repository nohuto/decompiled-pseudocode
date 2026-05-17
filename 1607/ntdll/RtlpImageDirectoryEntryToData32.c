/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x1800316C4
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800318FC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     LdrpGetProcedureAddress @ 0x180032370 (LdrpGetProcedureAddress.c)
 *     LdrpSnapModule @ 0x180033FA0 (LdrpSnapModule.c)
 *     RtlpxLookupFunctionTable @ 0x1800362F0 (RtlpxLookupFunctionTable.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x180031680 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r11

  if ( (unsigned int)a3 >= *(_DWORD *)(a5 + 116) )
    return 3221225485LL;
  v7 = a3;
  v8 = *(unsigned int *)(a5 + 8LL * a3 + 120);
  if ( !(_DWORD)v8 )
    return 3221225474LL;
  *a4 = *(_DWORD *)(a5 + 8 * v7 + 124);
  if ( (_BYTE)a2 || (unsigned int)v8 < *(_DWORD *)(a5 + 84) )
  {
    *a6 = a1 + v8;
    return 0LL;
  }
  else
  {
    v9 = RtlSectionTableFromVirtualAddress(a5, a2, v8);
    if ( v9 )
      v11 = v10 + a1 + *(unsigned int *)(v9 + 20) - (unsigned __int64)*(unsigned int *)(v9 + 12);
    *a6 = v11;
    return v11 == 0 ? 0xC000000D : 0;
  }
}
