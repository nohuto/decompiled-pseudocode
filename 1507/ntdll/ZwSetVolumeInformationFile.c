/*
 * XREFs of ZwSetVolumeInformationFile @ 0x180095260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetVolumeInformationFile()
{
  __int64 result; // rax

  result = 406LL;
  __asm { syscall; Low latency system call }
  return result;
}
