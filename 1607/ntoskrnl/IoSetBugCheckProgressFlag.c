/*
 * XREFs of IoSetBugCheckProgressFlag @ 0x1401C6180
 * Callers:
 *     IoWriteCrashDump @ 0x1401C645C (IoWriteCrashDump.c)
 * Callees:
 *     KeFrozenProcessorCount @ 0x1401D7A34 (KeFrozenProcessorCount.c)
 */

__int64 __fastcall IoSetBugCheckProgressFlag(int a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx

  result = CrashdmpDumpBlock;
  if ( CrashdmpDumpBlock )
  {
    *(_DWORD *)(CrashdmpDumpBlock + 1404) |= a1;
    v2 = KeNumberProcessors_0 - KeFrozenProcessorCount();
    result = 1LL;
    if ( v2 <= 1 && !BugCheckProgressEFICalled )
    {
      BugCheckProgressEFICalled = 1;
      result = IopReportBugCheckProgress(L"BugCheckProgress", &BUGCHECK_EFI_GUID, CrashdmpDumpBlock + 1404, 4LL, 1);
      BugCheckProgressEFICalled = 0;
    }
  }
  return result;
}
