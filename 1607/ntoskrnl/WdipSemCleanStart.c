/*
 * XREFs of WdipSemCleanStart @ 0x140564CD0
 * Callers:
 *     WdipSemInitialize @ 0x140564C14 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x14069B934 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x1404C6D48 (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x140564D34 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x140564D50 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x140564E58 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x140564EA8 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x140564FA4 (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x1405655C0 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x14069BA74 (WdipSemShutdown.c)
 */

__int64 WdipSemCleanStart()
{
  int LoggerIds; // ebx

  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds >= 0 )
  {
    LoggerIds = WdipSemEnableSemProvider();
    if ( LoggerIds >= 0 )
    {
      LoggerIds = WdipSemLoadConfigInfo();
      if ( LoggerIds >= 0 )
      {
        LoggerIds = WdipSemLoadGroupPolicy();
        if ( LoggerIds >= 0 )
        {
          LoggerIds = WdipSemLoadScenarioTable();
          if ( LoggerIds >= 0 )
            LoggerIds = WdipSemStartTimeoutCheck();
        }
      }
    }
  }
  WdipSemCleanupGroupPolicy();
  if ( LoggerIds < 0 )
    WdipSemShutdown();
  else
    WdipSemEnabled = 1;
  return (unsigned int)LoggerIds;
}
