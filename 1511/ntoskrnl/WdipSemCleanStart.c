/*
 * XREFs of WdipSemCleanStart @ 0x140532858
 * Callers:
 *     WdipSemInitialize @ 0x14053279C (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x14065C388 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x140505B4C (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x1405328BC (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x1405328D8 (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x1405329D0 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x140532A20 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x140532B1C (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140533138 (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x14065C898 (WdipSemShutdown.c)
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
