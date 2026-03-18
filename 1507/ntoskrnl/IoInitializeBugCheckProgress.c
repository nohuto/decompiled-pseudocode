/*
 * XREFs of IoInitializeBugCheckProgress @ 0x1401F3704
 * Callers:
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 * Callees:
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1401718C0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 */

char __fastcall IoInitializeBugCheckProgress(int a1, __int64 a2)
{
  char result; // al
  int v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  v3 = a1;
  result = CrashdmpDumpBlock;
  if ( CrashdmpDumpBlock )
  {
    *(_DWORD *)(CrashdmpDumpBlock + 1404) = 0;
    result = off_140321B00();
    if ( result == 1 || v3 == 265 )
    {
      BugCheckProgressEFICalled = 1;
    }
    else if ( !BugCheckProgressEFICalled )
    {
      BugCheckProgressEFICalled = 1;
      IopReportBugCheckProgress(L"BugCheckCode", &BUGCHECK_EFI_GUID, &v3, 4LL, 1);
      result = IopReportBugCheckProgress(L"BugCheckParameter1", &BUGCHECK_EFI_GUID, &v4, 8LL, 1);
      BugCheckProgressEFICalled = 0;
    }
  }
  return result;
}
