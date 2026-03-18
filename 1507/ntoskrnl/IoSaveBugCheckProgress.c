/*
 * XREFs of IoSaveBugCheckProgress @ 0x1401F3834
 * Callers:
 *     HvlResumeFromRootCrashdump @ 0x1401E9EEC (HvlResumeFromRootCrashdump.c)
 *     IoWriteCrashDump @ 0x1401F3B80 (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 *     KiDisplayBlueScreen @ 0x140202B60 (KiDisplayBlueScreen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoSaveBugCheckProgress(int a1)
{
  __int64 result; // rax
  bool v2; // zf

  if ( CrashdmpDumpBlock )
  {
    result = a1 | *(_DWORD *)(CrashdmpDumpBlock + 1404) & 0xFFFF0000;
    v2 = BugCheckProgressEFICalled == 0;
    *(_DWORD *)(CrashdmpDumpBlock + 1404) = result;
    if ( v2 )
    {
      BugCheckProgressEFICalled = 1;
      result = IopReportBugCheckProgress(L"BugCheckProgress", &BUGCHECK_EFI_GUID, CrashdmpDumpBlock + 1404, 4LL, 1);
      BugCheckProgressEFICalled = 0;
    }
  }
  return result;
}
