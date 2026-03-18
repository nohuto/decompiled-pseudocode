/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x140480DF4
 * Callers:
 *     HvWriteLogFile @ 0x1403F5A70 (HvWriteLogFile.c)
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     HvSwapLogFiles @ 0x14047E6A8 (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x14047E890 (HvIsCurrentLogSwappable.c)
 *     CmpDoFileSetSizeEx @ 0x14047E8FC (CmpDoFileSetSizeEx.c)
 *     CmpInitializeActualFileSizes @ 0x14048057C (CmpInitializeActualFileSizes.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x140480A78 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1404F0AF4 (HvResetLogFileStatusAll.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1404F0B4C (HvTruncateAllLogFilesIfRequired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpLogTypeToLogArrayIndex(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 4 || a1 == 1 )
    return 0LL;
  return result;
}
