/*
 * XREFs of FsFilterCtrlFree @ 0x14003AFD0
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14002FED0 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14003079C (FsRtlReleaseFileForModWrite.c)
 *     FsRtlReleaseFile @ 0x1403F9150 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1403F9340 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404556F4 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140455928 (FsRtlAcquireFileForCcFlushEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsFilterCtrlFree(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 64);
  if ( (result & 1) != 0 )
    return FsFilterFreeCompletionStack();
  return result;
}
