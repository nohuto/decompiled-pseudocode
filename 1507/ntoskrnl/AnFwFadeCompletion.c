/*
 * XREFs of AnFwFadeCompletion @ 0x14075DEB4
 * Callers:
 *     ResFwFreeContext @ 0x14075C040 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x14075F794 (BgpFwLibraryDisable.c)
 *     BgpConsoleDisplayCharacter @ 0x140761444 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayString @ 0x140761850 (BgpConsoleDisplayString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     LogFwStat @ 0x14075E428 (LogFwStat.c)
 *     BgpGxRectangleDestroy @ 0x14075E7EC (BgpGxRectangleDestroy.c)
 */

__int64 AnFwFadeCompletion()
{
  __int64 result; // rax

  result = dword_140323CF0 & 0xC00;
  if ( (_DWORD)result != 3072 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_14036C680, Executive, 0, 0, 0LL);
    result = BgpFwAcquireLock();
    if ( qword_14031E6E8 )
    {
      result = BgpGxRectangleDestroy(qword_14031E6E8);
      qword_14031E6E8 = 0LL;
    }
    if ( qword_14031E710 )
    {
      result = BgpGxRectangleDestroy(qword_14031E710);
      qword_14031E710 = 0LL;
    }
    if ( qword_14031E718 )
    {
      result = BgpGxRectangleDestroy(qword_14031E718);
      qword_14031E718 = 0LL;
    }
    if ( qword_14031E720 )
    {
      result = BgpGxRectangleDestroy(qword_14031E720);
      qword_14031E720 = 0LL;
    }
    if ( qword_14031E748 )
    {
      result = BgpGxRectangleDestroy(qword_14031E748);
      qword_14031E748 = 0LL;
    }
    if ( qword_14031E750 )
    {
      result = BgpGxRectangleDestroy(qword_14031E750);
      qword_14031E750 = 0LL;
    }
  }
  return result;
}
