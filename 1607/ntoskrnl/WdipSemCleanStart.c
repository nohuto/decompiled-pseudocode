/*
 * XREFs of WdipSemCleanStart @ 0x140564790
 * Callers:
 *     WdipSemInitialize @ 0x1405646D4 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x14069B850 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x1404E4090 (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x1405647F4 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x140564810 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x140564918 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x140564968 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x140564A64 (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140565080 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x14069B990 (WdipSemShutdown.c)
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
