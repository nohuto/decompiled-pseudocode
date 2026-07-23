/*
 * XREFs of ViThunkReplaceAllThunkedImports @ 0x14070FB94
 * Callers:
 *     ViThunkApplyThunksCurrentSession @ 0x14070F7B4 (ViThunkApplyThunksCurrentSession.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x1401E5DD4 (MmReplaceImportEntry.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ViThunkFindAllSpecialTables @ 0x14070F8F0 (ViThunkFindAllSpecialTables.c)
 *     ViThunkReplaceImportEntry @ 0x14070FCF0 (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x14070FD64 (ViThunkReplaceImportIfThunkedRegular.c)
 */

__int64 __fastcall ViThunkReplaceAllThunkedImports(__int64 BugCheckParameter2, unsigned int a2, int a3, int a4)
{
  __int64 v4; // rsi
  char **v7; // rbx
  _QWORD *AllSpecialTables; // rdi
  __int64 i; // r14
  __int64 v10; // rsi
  _QWORD *v11; // rax
  char **v12; // rax
  char *v13; // rcx
  ULONG_PTR v15; // rdx

  v4 = a2;
  v7 = (char **)BugCheckParameter2;
  if ( a3 || a4 != 1 )
    AllSpecialTables = 0LL;
  else
    AllSpecialTables = ViThunkFindAllSpecialTables(BugCheckParameter2, a2);
  if ( (_DWORD)v4 )
  {
    for ( i = v4; i; --i )
    {
      if ( AllSpecialTables )
      {
        LODWORD(v10) = 0;
        if ( *AllSpecialTables )
        {
          v11 = AllSpecialTables;
          while ( (unsigned int)ViThunkReplaceImportEntry(*v11 + 24LL, v7) != 1 )
          {
            v10 = (unsigned int)(v10 + 1);
            v11 = &AllSpecialTables[v10];
            if ( !*v11 )
              goto LABEL_12;
          }
          goto LABEL_24;
        }
      }
LABEL_12:
      if ( KernelVerifier )
      {
LABEL_20:
        if ( !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7, &VfPoolThunks) && !a3 && a4 == 1 )
          ViThunkReplaceImportEntry(&ViVerifierDriverAddedThunkListHead, v7);
        goto LABEL_24;
      }
      if ( !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7, &VfRegularThunks) )
      {
        v12 = &VfOrderDependentThunks;
        if ( VfOrderDependentThunks )
        {
          v13 = *v7;
          while ( !v13 || v13 != v12[2] )
          {
            v12 += 6;
            if ( !*v12 )
              goto LABEL_19;
          }
          if ( !a3 )
          {
            v15 = (ULONG_PTR)v12[1];
LABEL_31:
            MmReplaceImportEntry((ULONG_PTR)v7, v15);
            goto LABEL_24;
          }
          v15 = (ULONG_PTR)v12[4];
          if ( v15 )
            goto LABEL_31;
        }
        else
        {
LABEL_19:
          if ( !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7, &VfXdvThunks) )
            goto LABEL_20;
        }
      }
LABEL_24:
      ++v7;
    }
  }
  if ( AllSpecialTables )
    ExFreePoolWithTag(AllSpecialTables, 0);
  return 1LL;
}
