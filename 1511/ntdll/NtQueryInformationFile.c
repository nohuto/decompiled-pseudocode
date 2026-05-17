/*
 * XREFs of NtQueryInformationFile @ 0x1800A52E0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180087A00 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800D4C90 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800D578C (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x1800E5F20 (RtlpGetFileSize.c)
 *     _ResGetFileSizeEx @ 0x1800FA194 (_ResGetFileSizeEx.c)
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
