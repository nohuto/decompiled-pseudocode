/*
 * XREFs of FsFilterPerformCompletionCallbacks @ 0x140025DF0
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

__int64 __fastcall FsFilterPerformCompletionCallbacks(__int64 a1, unsigned int a2)
{
  __int64 v4; // r9
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 74) )
  {
    do
    {
      v4 = *(_QWORD *)(a1 + 80) + 32LL * (*(unsigned __int16 *)(a1 + 74) - 1);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)v4;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(v4 + 8);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v4 + 24))(a1, a2, *(_QWORD *)(v4 + 16));
    }
    while ( (*(_WORD *)(a1 + 74))-- != 1 );
  }
  return result;
}
