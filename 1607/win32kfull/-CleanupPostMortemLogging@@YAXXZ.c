/*
 * XREFs of ?CleanupPostMortemLogging@@YAXXZ @ 0x1C0134C88
 * Callers:
 *     CleanupModuleAllocations @ 0x1C0134C80 (CleanupModuleAllocations.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall CleanupPostMortemLogging(__int64 a1, __int64 a2, __int64 a3)
{
  if ( qword_1C03267F0 )
    Win32FreePool(qword_1C03267F0, a2, a3);
  if ( gpQmsgHistory )
  {
    Win32FreePool(gpQmsgHistory, a2, a3);
    gpQmsgHistory = 0LL;
  }
  if ( gpQmsgHistory2 )
  {
    Win32FreePool(gpQmsgHistory2, a2, a3);
    gpQmsgHistory2 = 0LL;
  }
  if ( gpAtomickCheckStacks )
  {
    Win32FreePool(gpAtomickCheckStacks, a2, a3);
    gpAtomickCheckStacks = 0LL;
  }
  if ( gpLinkWindowLog )
  {
    Win32FreePool(gpLinkWindowLog, a2, a3);
    gpLinkWindowLog = 0LL;
  }
}
