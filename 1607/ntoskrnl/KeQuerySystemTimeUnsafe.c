/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x1400EFE70
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
