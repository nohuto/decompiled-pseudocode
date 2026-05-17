/*
 * XREFs of ZwQueryAttributesFile @ 0x180093CD0
 * Callers:
 *     RtlDoesFileExists_UstrEx @ 0x1800272A0 (RtlDoesFileExists_UstrEx.c)
 *     LdrpResolveDllName @ 0x18003F930 (LdrpResolveDllName.c)
 *     LdrAddDllDirectory @ 0x180059AB0 (LdrAddDllDirectory.c)
 *     LdrpIsReparsePoint @ 0x180069B2C (LdrpIsReparsePoint.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 *     LdrpResValidateFilePath @ 0x1800CCFA8 (LdrpResValidateFilePath.c)
 *     _ResGetFileAttributesW @ 0x1800FA7B0 (_ResGetFileAttributesW.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryAttributesFile()
{
  __int64 result; // rax

  result = 61LL;
  __asm { syscall; Low latency system call }
  return result;
}
