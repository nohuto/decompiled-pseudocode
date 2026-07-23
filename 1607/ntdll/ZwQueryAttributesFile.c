/*
 * XREFs of ZwQueryAttributesFile @ 0x1800A6BC0
 * Callers:
 *     LdrpResolveDllName @ 0x18000FA84 (LdrpResolveDllName.c)
 *     RtlDoesFileExists_UstrEx @ 0x180044724 (RtlDoesFileExists_UstrEx.c)
 *     LdrpIsReparsePoint @ 0x180075EE4 (LdrpIsReparsePoint.c)
 *     LdrAddDllDirectory @ 0x180090680 (LdrAddDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 *     LdrpResValidateFilePath @ 0x1800DDC50 (LdrpResValidateFilePath.c)
 *     _ResGetFileAttributesW @ 0x1801049B4 (_ResGetFileAttributesW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  NTSTATUS result; // eax

  result = 61;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
