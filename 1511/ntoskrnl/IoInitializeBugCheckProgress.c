/*
 * XREFs of IoInitializeBugCheckProgress @ 0x1401B8338
 * Callers:
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 * Callees:
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140143840 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     KeFrozenProcessorCount @ 0x1401C8E60 (KeFrozenProcessorCount.c)
 */

void __fastcall IoInitializeBugCheckProgress(int a1, __int64 a2)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  v2 = a1;
  if ( CrashdmpDumpBlock && (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount() <= 1 )
  {
    if ( off_1402D29B0() == 1 || v2 == 265 )
    {
      BugCheckProgressEFICalled = 1;
    }
    else if ( !BugCheckProgressEFICalled )
    {
      BugCheckProgressEFICalled = 1;
      IopReportBugCheckProgress(L"BugCheckCode", &BUGCHECK_EFI_GUID, &v2, 4LL, 1);
      IopReportBugCheckProgress(L"BugCheckParameter1", &BUGCHECK_EFI_GUID, &v3, 8LL, 1);
      BugCheckProgressEFICalled = 0;
    }
  }
}
