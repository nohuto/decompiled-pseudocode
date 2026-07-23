/*
 * XREFs of FsFilterCtrlFree @ 0x140025DD4
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x14008E914 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14009E320 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14042AAEC (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14042AD70 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlReleaseFile @ 0x14042CD30 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14042CEE0 (FsRtlAcquireFileExclusiveCommon.c)
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
