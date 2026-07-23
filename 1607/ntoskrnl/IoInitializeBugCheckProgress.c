/*
 * XREFs of IoInitializeBugCheckProgress @ 0x1401C5F90
 * Callers:
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 * Callees:
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140159800 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     KeFrozenProcessorCount @ 0x1401D7A34 (KeFrozenProcessorCount.c)
 */

void __fastcall IoInitializeBugCheckProgress(int a1, __int64 a2)
{
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  int v4; // [rsp+50h] [rbp+18h] BYREF
  int v5; // [rsp+54h] [rbp+1Ch]

  v3 = a2;
  if ( CrashdmpDumpBlock && (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount() <= 1 )
  {
    if ( off_1402F2650() == 1 || a1 == 265 )
    {
      BugCheckProgressEFICalled = 1;
    }
    else if ( !BugCheckProgressEFICalled )
    {
      BugCheckProgressEFICalled = 1;
      v4 = a1;
      v5 = MEMORY[0xFFFFF780000002C4];
      HIWORD(v5) = *(_WORD *)(CrashdmpDumpBlock + 1408) + 1;
      IopReportBugCheckProgress(L"BugCheckCode", &BUGCHECK_EFI_GUID, &v4, 8LL, 1);
      IopReportBugCheckProgress(L"BugCheckParameter1", &BUGCHECK_EFI_GUID, &v3, 8LL, 1);
      BugCheckProgressEFICalled = 0;
    }
  }
}
