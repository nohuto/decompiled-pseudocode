/*
 * XREFs of ZwQueryAttributesFile @ 0x1800A5860
 * Callers:
 *     LdrpResolveDllName @ 0x18000CFF8 (LdrpResolveDllName.c)
 *     RtlDoesFileExists_UstrEx @ 0x180018498 (RtlDoesFileExists_UstrEx.c)
 *     LdrpIsReparsePoint @ 0x180042D10 (LdrpIsReparsePoint.c)
 *     LdrAddDllDirectory @ 0x18008D820 (LdrAddDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 *     LdrpResValidateFilePath @ 0x1800D57E8 (LdrpResValidateFilePath.c)
 *     _ResGetFileAttributesW @ 0x1800FA0C8 (_ResGetFileAttributesW.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryAttributesFile()
{
  __int64 result; // rax

  result = 61LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
