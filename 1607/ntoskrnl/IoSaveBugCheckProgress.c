/*
 * XREFs of IoSaveBugCheckProgress @ 0x1401C6100
 * Callers:
 *     IoWriteCrashDump @ 0x1401C645C (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     KiDisplayBlueScreen @ 0x1401D4F98 (KiDisplayBlueScreen.c)
 * Callees:
 *     KeFrozenProcessorCount @ 0x1401D7A34 (KeFrozenProcessorCount.c)
 */

void __fastcall IoSaveBugCheckProgress(int a1)
{
  if ( CrashdmpDumpBlock )
  {
    *(_DWORD *)(CrashdmpDumpBlock + 1404) = a1 | *(_DWORD *)(CrashdmpDumpBlock + 1404) & 0xFFFF0000;
    if ( (unsigned int)KeNumberProcessors_0 - (unsigned int)KeFrozenProcessorCount() <= 1 && !BugCheckProgressEFICalled )
    {
      BugCheckProgressEFICalled = 1;
      IopReportBugCheckProgress(L"BugCheckProgress", &BUGCHECK_EFI_GUID, CrashdmpDumpBlock + 1404, 4LL, 1);
      BugCheckProgressEFICalled = 0;
    }
  }
}
