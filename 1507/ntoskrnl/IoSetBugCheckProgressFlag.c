/*
 * XREFs of IoSetBugCheckProgressFlag @ 0x1401F38A4
 * Callers:
 *     IoWriteCrashDump @ 0x1401F3B80 (IoWriteCrashDump.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoSetBugCheckProgressFlag(int a1)
{
  __int64 result; // rax

  result = CrashdmpDumpBlock;
  if ( CrashdmpDumpBlock )
  {
    *(_DWORD *)(CrashdmpDumpBlock + 1404) |= a1;
    if ( !BugCheckProgressEFICalled )
    {
      BugCheckProgressEFICalled = 1;
      result = IopReportBugCheckProgress(L"BugCheckProgress", &BUGCHECK_EFI_GUID, CrashdmpDumpBlock + 1404, 4LL, 1);
      BugCheckProgressEFICalled = 0;
    }
  }
  return result;
}
