/*
 * XREFs of AnFwFadeCompletion @ 0x1406DAE6C
 * Callers:
 *     ResFwFreeContext @ 0x1406D9204 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x1406DC74C (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x1406DE3C8 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x1406DE7D4 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     LogFwStat @ 0x1406DB3E0 (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x1406DB7A4 (BgpGxRectangleDestroy.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_1402D4BB0 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_14031C380, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_1402CF688 )
    {
      BgpGxRectangleDestroy(qword_1402CF688);
      qword_1402CF688 = 0LL;
    }
    if ( qword_1402CF6B0 )
    {
      BgpGxRectangleDestroy(qword_1402CF6B0);
      qword_1402CF6B0 = 0LL;
    }
    if ( qword_1402CF6B8 )
    {
      BgpGxRectangleDestroy(qword_1402CF6B8);
      qword_1402CF6B8 = 0LL;
    }
    if ( qword_1402CF6C0 )
    {
      BgpGxRectangleDestroy(qword_1402CF6C0);
      qword_1402CF6C0 = 0LL;
    }
    if ( qword_1402CF6E8 )
    {
      BgpGxRectangleDestroy(qword_1402CF6E8);
      qword_1402CF6E8 = 0LL;
    }
    if ( qword_1402CF6F0 )
    {
      BgpGxRectangleDestroy(qword_1402CF6F0);
      qword_1402CF6F0 = 0LL;
    }
  }
}
