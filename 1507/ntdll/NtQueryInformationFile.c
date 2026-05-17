/*
 * XREFs of NtQueryInformationFile @ 0x180093A10
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18007F190 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpResFileSize @ 0x1800CC450 (LdrpResFileSize.c)
 *     LdrpResValidateFileHandle @ 0x1800CCF4C (LdrpResValidateFileHandle.c)
 *     RtlpGetFileSize @ 0x1800E07CC (RtlpGetFileSize.c)
 *     _ResGetFileSizeEx @ 0x1800FA87C (_ResGetFileSizeEx.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationFile()
{
  __int64 result; // rax

  result = 17LL;
  __asm { syscall; Low latency system call }
  return result;
}
