/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x14044D6E8
 * Callers:
 *     HvWriteLogFile @ 0x14044C3A0 (HvWriteLogFile.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 *     HvSwapLogFiles @ 0x1405560A0 (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1405599F8 (HvIsCurrentLogSwappable.c)
 *     HvResetLogFileStatusAll @ 0x14055BA34 (HvResetLogFileStatusAll.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x14055BA64 (HvTruncateAllLogFilesIfRequired.c)
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
