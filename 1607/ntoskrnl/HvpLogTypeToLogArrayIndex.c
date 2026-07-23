/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x14047FB48
 * Callers:
 *     HvWriteLogFile @ 0x1403F4934 (HvWriteLogFile.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     HvSwapLogFiles @ 0x14047D3FC (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x14047D5E4 (HvIsCurrentLogSwappable.c)
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 *     CmpInitializeActualFileSizes @ 0x14047F2D0 (CmpInitializeActualFileSizes.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x14047F7CC (HvTruncateCurrentLogFileIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1404D2BE8 (HvResetLogFileStatusAll.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1404D2C40 (HvTruncateAllLogFilesIfRequired.c)
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
