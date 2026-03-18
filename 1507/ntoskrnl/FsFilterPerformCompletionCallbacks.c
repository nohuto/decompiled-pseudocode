/*
 * XREFs of FsFilterPerformCompletionCallbacks @ 0x140088C80
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x1400E3638 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1400E6A80 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404B1FB8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404B2240 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlReleaseFile @ 0x1404B32F0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1404B34E0 (FsRtlAcquireFileExclusiveCommon.c)
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
