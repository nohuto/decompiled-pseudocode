/*
 * XREFs of ?EnsureQMsgLog@@YAHXZ @ 0x1C01CAD6C
 * Callers:
 *     ?InitLogQMsg@@YAXXZ @ 0x1C0130F5C (-InitLogQMsg@@YAXXZ.c)
 *     LogQMsg @ 0x1C01CB178 (LogQMsg.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 EnsureQMsgLog(void)
{
  if ( !qword_1C03267F0 )
  {
    if ( gMsgQLog )
    {
      qword_1C03267F0 = Win32AllocPool(680LL * (unsigned int)dword_1C03267E0, 1819374421LL);
      if ( !qword_1C03267F0 )
        memset(&gMsgQLog, 0, 0x28uLL);
    }
  }
  return (unsigned int)gMsgQLog;
}
