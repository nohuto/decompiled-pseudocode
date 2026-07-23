/*
 * XREFs of VfThunkApplyDriverAddedThunks @ 0x14070F3E8
 * Callers:
 *     ViDriverReApplyVerifierForAll @ 0x140704E94 (ViDriverReApplyVerifierForAll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ViThunkFindAllSpecialTables @ 0x14070F8F0 (ViThunkFindAllSpecialTables.c)
 *     ViThunkReplaceImportEntry @ 0x14070FCF0 (ViThunkReplaceImportEntry.c)
 */

__int64 __fastcall VfThunkApplyDriverAddedThunks(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  ULONG v3; // edi
  _QWORD *AllSpecialTables; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdi
  _QWORD *v7; // rax
  int v8; // ecx
  ULONG v9; // [rsp+30h] [rbp+8h] BYREF

  result = (__int64)RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &v9);
  v2 = result;
  if ( result )
  {
    v3 = v9 >> 3;
    AllSpecialTables = (_QWORD *)ViThunkFindAllSpecialTables(result, v9 >> 3);
    if ( v3 )
    {
      v5 = v3;
      do
      {
        if ( !AllSpecialTables )
          goto LABEL_10;
        LODWORD(v6) = 0;
        if ( !*AllSpecialTables )
          goto LABEL_10;
        v7 = AllSpecialTables;
        do
        {
          v8 = ViThunkReplaceImportEntry(*v7 + 24LL, v2);
          if ( v8 == 1 )
            break;
          v6 = (unsigned int)(v6 + 1);
          v7 = &AllSpecialTables[v6];
        }
        while ( *v7 );
        if ( !v8 )
LABEL_10:
          ViThunkReplaceImportEntry(&ViVerifierDriverAddedThunkListHead, v2);
        v2 += 8LL;
        --v5;
      }
      while ( v5 );
    }
    if ( AllSpecialTables )
      ExFreePoolWithTag(AllSpecialTables, 0);
    return 1LL;
  }
  return result;
}
