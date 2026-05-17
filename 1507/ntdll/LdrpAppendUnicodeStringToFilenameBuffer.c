/*
 * XREFs of LdrpAppendUnicodeStringToFilenameBuffer @ 0x180021564
 * Callers:
 *     LdrpCorInitialize @ 0x1800032D8 (LdrpCorInitialize.c)
 *     LdrpPreprocessDllName @ 0x180020EEC (LdrpPreprocessDllName.c)
 *     LdrpApplyFileNameRedirection @ 0x18002108C (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 * Callees:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x1800215E4 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall LdrpAppendUnicodeStringToFilenameBuffer(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int FileNameBufferIfNeeded; // edi

  FileNameBufferIfNeeded = 0;
  if ( *a2 )
  {
    FileNameBufferIfNeeded = LdrpAllocateFileNameBufferIfNeeded(a1, *a1 + (unsigned int)*a2 + 2);
    if ( FileNameBufferIfNeeded >= 0 )
    {
      memmove((void *)(*((_QWORD *)a1 + 1) + *a1), *((const void **)a2 + 1), *a2);
      *a1 += *a2;
      *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
    }
  }
  return (unsigned int)FileNameBufferIfNeeded;
}
