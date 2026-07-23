/*
 * XREFs of AnFwFadeCompletion @ 0x140726D9C
 * Callers:
 *     ResFwFreeContext @ 0x140725050 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x140728834 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x14072A3E8 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x14072A77C (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     LogFwStat @ 0x140727310 (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x1407276C0 (BgpGxRectangleDestroy.c)
 */

void AnFwFadeCompletion()
{
  if ( (dword_1402F9F90 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_1403404E0, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_1402F4E88 )
    {
      BgpGxRectangleDestroy(qword_1402F4E88);
      qword_1402F4E88 = 0LL;
    }
    if ( qword_1402F4EB0 )
    {
      BgpGxRectangleDestroy(qword_1402F4EB0);
      qword_1402F4EB0 = 0LL;
    }
    if ( qword_1402F4EB8 )
    {
      BgpGxRectangleDestroy(qword_1402F4EB8);
      qword_1402F4EB8 = 0LL;
    }
    if ( qword_1402F4EC0 )
    {
      BgpGxRectangleDestroy(qword_1402F4EC0);
      qword_1402F4EC0 = 0LL;
    }
    if ( qword_1402F4EE8 )
    {
      BgpGxRectangleDestroy(qword_1402F4EE8);
      qword_1402F4EE8 = 0LL;
    }
    if ( qword_1402F4EF0 )
    {
      BgpGxRectangleDestroy(qword_1402F4EF0);
      qword_1402F4EF0 = 0LL;
    }
  }
}
