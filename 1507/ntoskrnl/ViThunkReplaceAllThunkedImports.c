/*
 * XREFs of ViThunkReplaceAllThunkedImports @ 0x140745374
 * Callers:
 *     ViThunkApplyThunksCurrentSession @ 0x140744F94 (ViThunkApplyThunksCurrentSession.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x14020E664 (MmReplaceImportEntry.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ViThunkFindAllSpecialTables @ 0x1407450D0 (ViThunkFindAllSpecialTables.c)
 *     ViThunkReplaceImportEntry @ 0x1407454CC (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x140745540 (ViThunkReplaceImportIfThunkedRegular.c)
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
  ULONG_PTR v14; // rdx

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
          goto LABEL_22;
        }
      }
LABEL_12:
      if ( KernelVerifier )
      {
LABEL_18:
        if ( !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7, &VfPoolThunks) && !a3 && a4 == 1 )
          ViThunkReplaceImportEntry(&ViVerifierDriverAddedThunkListHead, v7);
        goto LABEL_22;
      }
      if ( !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7, &VfRegularThunks) )
      {
        v12 = &VfOrderDependentThunks;
        if ( VfOrderDependentThunks )
        {
          while ( *v7 != v12[2] )
          {
            v12 += 6;
            if ( !*v12 )
              goto LABEL_17;
          }
          if ( !a3 )
          {
            v14 = (ULONG_PTR)v12[1];
LABEL_29:
            MmReplaceImportEntry((ULONG_PTR)v7, v14);
            goto LABEL_22;
          }
          v14 = (ULONG_PTR)v12[3];
          if ( v14 )
            goto LABEL_29;
        }
        else
        {
LABEL_17:
          if ( !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7, &VfXdvThunks) )
            goto LABEL_18;
        }
      }
LABEL_22:
      ++v7;
    }
  }
  if ( AllSpecialTables )
    ExFreePoolWithTag(AllSpecialTables, 0);
  return 1LL;
}
