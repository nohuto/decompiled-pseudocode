/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x140021258
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
