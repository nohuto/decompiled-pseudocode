/*
 * XREFs of WdipSemCleanStart @ 0x1405ADD3C
 * Callers:
 *     WdipSemInitialize @ 0x1405ADC60 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1406DEBD4 (WdipSemUpdate.c)
 * Callees:
 *     WdipSemGetLoggerIds @ 0x140552228 (WdipSemGetLoggerIds.c)
 *     WdipSemCleanupGroupPolicy @ 0x1405ADDA0 (WdipSemCleanupGroupPolicy.c)
 *     WdipSemStartTimeoutCheck @ 0x1405ADDBC (WdipSemStartTimeoutCheck.c)
 *     WdipSemLoadGroupPolicy @ 0x1405ADEB4 (WdipSemLoadGroupPolicy.c)
 *     WdipSemLoadConfigInfo @ 0x1405ADF04 (WdipSemLoadConfigInfo.c)
 *     WdipSemEnableSemProvider @ 0x1405AE000 (WdipSemEnableSemProvider.c)
 *     WdipSemLoadScenarioTable @ 0x1405AE61C (WdipSemLoadScenarioTable.c)
 *     WdipSemShutdown @ 0x1406DF140 (WdipSemShutdown.c)
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
