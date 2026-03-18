/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x14002D3F0
 * Callers:
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
