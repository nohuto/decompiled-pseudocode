/*
 * XREFs of ZwQueryAttributesFile @ 0x1800A6BC0
 * Callers:
 *     LdrpResolveDllName @ 0x18000FA94 (LdrpResolveDllName.c)
 *     RtlDoesFileExists_UstrEx @ 0x180044734 (RtlDoesFileExists_UstrEx.c)
 *     LdrpIsReparsePoint @ 0x180075EF4 (LdrpIsReparsePoint.c)
 *     LdrAddDllDirectory @ 0x180090690 (LdrAddDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 *     LdrpResValidateFilePath @ 0x1800DDB90 (LdrpResValidateFilePath.c)
 *     _ResGetFileAttributesW @ 0x180104A74 (_ResGetFileAttributesW.c)
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
