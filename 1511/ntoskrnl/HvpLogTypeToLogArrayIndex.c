/*
 * XREFs of HvpLogTypeToLogArrayIndex @ 0x1403D43F4
 * Callers:
 *     HvWriteLogFile @ 0x1403D27F0 (HvWriteLogFile.c)
 *     CmpInitializeActualFileSizes @ 0x1403D3D80 (CmpInitializeActualFileSizes.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1403D4084 (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x1404BC2A4 (CmpDoFileSetSizeEx.c)
 *     HvSwapLogFiles @ 0x1404BF75C (HvSwapLogFiles.c)
 *     HvIsCurrentLogSwappable @ 0x1404C2844 (HvIsCurrentLogSwappable.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1404C4358 (HvTruncateAllLogFilesIfRequired.c)
 *     HvResetLogFileStatusAll @ 0x1404C4490 (HvResetLogFileStatusAll.c)
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
