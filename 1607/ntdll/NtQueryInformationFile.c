/*
 * XREFs of NtQueryInformationFile @ 0x1800A6640
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008BE60 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800DD040 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800DDB34 (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x1800EF1E0 (RtlpGetFileSize.c)
 *     _ResGetFileSizeEx @ 0x180104B40 (_ResGetFileSizeEx.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationFile()
{
  __int64 result; // rax

  result = 17LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
